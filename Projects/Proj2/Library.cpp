#include "library.h"

int split(string str, char letter, string arr[], int len)                       //hw 4
{
    string temp = "";
    int arrparts = 0;
    int parts = 0;
    
    if(str == "")
    {
        return 0;
    }
    
    else
    {
        str = str + letter;
        for (int i = 0; i < str.length(); i++)
        {
            if(str[i] != letter)
            {
                temp = temp + str[i];
            }
            
            else
            {
                if(temp == "")
                {
                    temp =="";
                }
                else
                {
                    arr[arrparts] = temp;
                    arrparts++;
                    parts++;
                
                    if(parts > len)
                    {
                        return -1;
                    }
                    temp = "";
                }
            }
        }
    }
    return arrparts;
}

string insensitive(string str)                                                  //hw 6
{
    string strU = "";
    for(int i = 0; i < str.length(); i++)
    {
        if(islower(str[i]))                                                   
        {
            strU += toupper(str[i] - 32);
        }
        else
        {
            strU += str[i];
        }
    }
    return strU;
}

Library :: Library()
{
    numBooks = 0;
    numUsers = 0;
}
    
int Library :: getSizeBook()
{
    return sizeBook;
}
    
int Library :: getSizeUser()
{
    return sizeUser;
}
    
int Library :: getNumBooks()
{
    return numBooks;
}
    
int Library :: getNumUsers()
{
    return numUsers;
}
    
int Library :: readBooks(string fileName)
{
    ifstream myfile;                                                            //open file
    myfile.open(fileName);
    string line = "";                                                           //initialize line
    
    if(numBooks == sizeBook)                                                    //if number of books and size are same return -2
    {
        return -2;
    }
    
    if(myfile.is_open())                                                        //if file is open
    {
        while(getline(myfile, line) && numBooks < sizeBook)                     //can still get lines and number is less than size
        {
            if(line != "")                                                      //if line isn't empty
            {
                string temp[2];
                split (line, ',', temp, sizeBook);                              //split into author and title
                books[numBooks].setAuthor(temp[0]);
                books[numBooks].setTitle(temp[1]);
                numBooks++;                                                     //next
            }
        }
    }
    
    else                                                                        //otherwise return -1
    {
        return -1;
    }   
    myfile.close();   
    return numBooks;                                                            //return number of books
                                                          //close file
}
    
void Library :: printAllBooks()
{
    if(numBooks <= 0)                                                           //if less than 0 books
    {
        cout << "No books are stored." << endl;                                 //no books
    }
    else                                                                        //otherwise print list of books
    {
        cout << "Here is a list of books" << endl;
        for(int i = 0; i < numBooks; i++)
        {
            cout << books[i].getTitle() << " by " << books[i].getAuthor() << endl;
        }
    }
}
    
void Library :: printBooksByAuthor(string author)
{
    int count = 0;                                                              //initialize count
    if(numBooks <= 0)                                                           //if 0 or less books
    {
        cout << "No books are stored" << endl;                                  //no books stored
        return;
    }
    for(int x = 0; x < numBooks; x++)                                           //count through books
    {
        if(author == books[x].getAuthor())
        {
            count++;
        }
    }
    
    if(count < 1)                                                               //if less than 1 no books by author
    {
        cout << "There are no books by " << author << endl;
        return;
    }
    
    cout << "Here is a list of books by " << author << endl;                    //otherwise print list
    for(int y = 0; y < numBooks; y++)
    {
        if(author == books[y].getAuthor())
            {
                cout<< books[y].getTitle() << endl;
            }
    }
}
    
int Library :: readRatings(string fileName)
{
    ifstream myfile;                                                            //open file
    myfile.open(fileName);
    string line = "";                                                           //initialize string
    string temp[51];                                                            //initialize array
    
    if(numUsers == 100)                                                         //if more users than 100 return -2
    {
        return -2;
    }
    
    if(!(myfile.is_open()))                                                     //if file isn't open return -1
    {
        return -1;
    }
    
    if(myfile.is_open())                                                        //if it's open
    {
        while((getline(myfile, line)) && (numUsers < 100))
        {
            if(line != "")
            {
                split(line, ',', temp, 51);                                     //call split
                users[numUsers].setUsername(temp[0]);                           //initialize temp for users
                for(int a = 1; a < 50 + 1; a++)                                 //counter for places
                {
                    if(temp[a] != "")                                           //if temp isn't empty
                    {
                        users[numUsers].setRatingAt(a-1, stoi(temp[a]));        //users array filled
                    }
                }
                numUsers++;                                                     //move on
            }
        }
        return numUsers;                                                        //return number of users
        
        myfile.close();                                                         //close file
    }
}
    
int Library :: getRating(string username, string title)
{
    int userNum = 0;                                                            //variables
    int bookNum = 0;
    int rating = 0;
    bool userCheck = false;
    bool titleCheck = false;
    
    for(int i = 0; i < numUsers; i++)                                           //counter through users
    {
        if(insensitive(username) == insensitive(users[i].getUsername()))        //if usernames are same
        {
            userCheck = true;                                                   //change to true
            userNum = i;
        }
    }
    
    for(int i = 0; i < numBooks; i++)                                           //count through titles
    {
        if(insensitive(title) == insensitive(books[i].getTitle()))              //if titles are same
        {
            titleCheck = true;                                                  //change to true
            bookNum = i;
        }
    }
    
    if(userCheck == true && titleCheck == true)                                 //if both are found return rating
    {
        rating = users[userNum].getRatingAt(bookNum);
    }
    
    else                                                                        //otherwise return -3
    {
        rating = -3;
    }
    
    return rating;                                                              //return rating
}
    
int Library :: getCountReadBooks(string username)
{
    int rating = 0;                                                             //variables
    bool userCheck = false;
    
    if(numBooks == 0)                                                           //if no books return -3
    {
        return -3;
    }
    
    for(int i = 0; i < numUsers; i++)                                           //got through users
    {
        if(insensitive(username) == insensitive(users[i].getUsername()))        //if same make true
        {
            userCheck = true;
            for(int x = 0; x < numBooks; x++)                                   //go through books
            {
                if(users[i].getRatingAt(x) > 0 && users[i].getRatingAt(x) <= 5) //get rating
                {
                    rating++;
                }
            }
        }
    }
    
    if(userCheck == true)                                                       //if user exists return rating
    {
        return rating;
    }
    
    else                                                                        //otherwise return -3
    {
        return -3;
    }
}  

//______________________________________________________________________________

void Library :: viewRatings(string username, int minRating)
{
    int location = 0;                                                           //variables
    int rating = 0;
    int number = 0;                                                             //valid ratings
    int none = 0;                                                               //no rating
    bool userCheck = false;
    int temp[50];
    
    for(int l = 0; l < numUsers; l++)                                           //go through num users and see if they are the same to what it is looking for if they are the same save index.
    {
        if(insensitive(username) == insensitive(users[l].getUsername()))
        {
            userCheck = true;
            location = l;
        }
    }
    
    for(int i = 0; i < numBooks; i++)                                           //get rating at that location and if it is valid add to numbers if invalid add to no rating
    {
        if(users[location].getRatingAt(i) <= 5)
        {
            number++;
        }
        
        if(users[location].getRatingAt(i) == 0)
        {
            none++;
        }
    }
    if(userCheck == true && number - none > 0)                                  //if the user has rated books go through if
    {
        cout << "Here are the books that " << username << " rated" << endl;
        for(int i = 0; i < numBooks; i++)                                       //go through books and for the ones the user rated get title, and rating and print
        {
            if(users[location].getRatingAt(i) >= minRating)
            {
                cout << "Title : " << books[i].getTitle() << endl;
                cout << "Rating : " << users[location].getRatingAt(i) << endl;
                cout << "-----" << endl;
            }
        }
    }
    if(userCheck == false)                                                      //if user isn't found
    {
        cout << username << " does not exist." << endl;
    }
    if(none == numBooks)                                                        //if no books rated
    {
        cout << username << " has not rated any books yet." << endl;
    }
}
    
double Library :: calcAvgRating(string title)
{
    double add = 0;                                                             //variables
    double dR = 0;
    double retrn = 0;
    int index = -1;
    
    title = insensitive(title);                                                 //title all one case
    if(numUsers == 0 || numBooks == 0)                                          //if no users and no books return -3
    {
        return -3;
    }
     
    for(int i = 0; i < numBooks; i++)                                           //go through and see if titles same 
    {
        if(insensitive(books[i].getTitle()) == title)
        {
            index = i;
        }
    }
     
    for(int j = 0; j < numUsers; j++)
    {
        if(users[j].getRatingAt(index) != 0)                                    //is there is a rating for user at that index add it
        {
            add = add + users[j].getRatingAt(index);
            dR++;
        }
    }
     
    if(numUsers == 0 || numBooks == 0)                                          //if no users or no books return -3
    {
        return -3;
    }
     
    if(index == -1)                                                             //if position is -1 return -3
    {
        return -3;
    }
     
    if(dR == 0)                                                                 //if dR is 0 return 0
    {
        return 0;
    }
     
    else                                                                        //otherwise find avg
    {
        retrn = 1.0 * add/dR;
    }
     
    return retrn;
}
    
double Library :: calcAvgRatingByAuthor(string author)
{
    int counter = 0;                                                            //variables
    string authorN;
    string tempS;
    double rating = 0.0;
    double total = 0.0;
    int location = -1;
    double avg = 0.0;
    
    if(numUsers == 0)                                                           //no users return
    {
        return -3
    }
    
    authorN = insensitive(author);                                              //auhtors name input
    {
        for(int l = 0; l < numBooks; l++)
        {
            tempS = insensitive(books[l].getAuthor());                          //string is author
            if(tempS == authorN)                                                //if authors names are same return
            {
                location = l;                                                   //store location of author
                for(int i = 0; i < numUsers; i++)
                {
                    if(users[i].getRatingAt(location) != 0)                     //as long as location isn't 0
                    {
                        rating = users[i].getRatingAt(location);                //get rating at locations
                        total = rating + total;                                 //total is current rating + previous total
                        count++;                                                //next
                    }
                }
            }
        }
        if(location == -1)                                                      //location -1 return
        {
            return -3;
        }
        if(counter > 0)                                                         //counter is positive find average
        {
            avg = double(total / counter);
            return avg;
        }
        else                                                                    //otherwise return
        {
            return 0;
        }
    }
}
    
int Library :: addUser(string username)
{
    int in;                                                                     //if its in or out
    bool userCheck = false;
    
    if(numUsers == sizeUser)                                                    //if the number of users is same as size of array
    {
        in = -2;
    }
    
    else
    {
        for(int i = 0; i < numUsers; i++)                                       //go through users
        {
            if(insensitive(username) == insensitive(users[i].getUsername()))    //if username is added to array
            {
                userCheck = true;
                in = 0;
            }
        }
        
        if(userCheck == false)                                                  //is user is not added to array
        {
            users[numUsers].setUsername(username);
            numUsers = numUsers + 1;
            in = 1;
        }
    }
    return in;                                                                  //return if added
}
    
int Library :: checkOutBook(string username, string title, int newRating)
{
    int userNum = 0;                                                            //variables
    int bookNum = 0;
    int rating = 0;
    bool ratCheck = false;
    bool userCheck = false;
    bool titleCheck = false;
    
    for(int i = 0; i < numUsers; i++)                                           //go through users
    {
        if(insensitive(username) == insensitive(users[i].getUsername()))        //if username is same as one looking for save index
        {
            userCheck = true;
            userNum = i;
        }
    }
    
    for(int i = 0; i < numBooks; i++)                                           //if book is same as one looking for save index
    {
        if(insensitive(title) == insensitive(books[i].getTitle()))
        {
            titleCheck = true;
            bookNum = i;
        }
    }
    
    if(newRating >= 0 && newRating <= 5)                                        //if new rating is valid
    {
        ratCheck = true;
    }
    
    if(ratCheck == true)                                                        //if rating valid
    {
        if(userCheck == true && titleCheck == true)                             //and title and user exist
        {
            users[userNum].setRatingAt(bookNum,newRating);                      //set rating
            rating = 1;
        }
        
        else                                                                    //if user and title don't exist return
        {
            rating = -3;
        }
    }
    
    else                                                                        //otherwise return -4
    {
        rating = -4;
    }
    
    return rating;                                                              //return rating
}
    
string Library :: getRecommendations(string username)
{
    int look = -1;                                                              //variables
    int SSD = 0;
    int min = 1000;
    int user = 0;
    
    for(i = 0; i < 100; i++)                                                    //find the username and store index of it
    {
        if(insensitive(users[i].getUsername()) == insensitve(username))
        {
            look = i;
        }
    }
    
    if(look == -1)                                                              //if index is -1 username doesn't exist
    {
        cout << username << " does not exist." << endl;
        return;
    }
    
    for(int i = 0; i < 100; i++)
    {
        SSD = 0;                                                                //make sure SSD is 0
        if(getCountReadBooks(users[i].getUsername()) > 0 && i != look)          //go to every username except for username comparing to
        {
            for(int a = 0; a < numBooks; a++)
            {
                int comp;                                                       //initialize comparison value
                comp = (users[look].getRatingAt(a)) - (users[i].getRatingAt(a));//user rating that you are comparing and other user's rating
                comp = pow(comp, 2);                                            //comparison for that book
                SSD += comp;                                                    //add to SSD
            }
            
            if(SSD < min)                                                       //if less than min new min
            {
                min = SSD;
                user = i;                                                       //user similar is at i
            }
        }
    }
    
    bool rat = false;                                                           //new variables
    int counter = 0;
    User related = users[user];
    
    for(int b = 0; b < 100, b++)
    {
        if(users[user].getRatingAt(b) >= 3 && users[look].getRatingAt(b) == 0)
        {
            if(counter < 5)                                                     //if less than 5 books
            {
                if(rat == false)                                                //if rating check is false give reccomendations and change to true
                {
                    cout << "Here is the list of recommendations" << endl;
                    rat = true;
                }
                cout << books[i].getTitle() << " by " << books[i].getAuthor() << endl;  //all books reccomended
                counter++
            }
        }
    }
    
    if(counter == 0)                                                            //if none return
    {
        cout << "There are no recommendations for " << username << " at present." << endl;
    }
}
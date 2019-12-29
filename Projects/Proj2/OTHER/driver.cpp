#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

class Book
{
    private:
        string title;                                                           //variables
        string author;
        
    public:
        Book();                                                                 //Default constructor
        Book(string, string);                                                   //Parameterized constructor
        string getTitle();                                                      //Get title from user
        void setTitle(string);                                                  //Set Title
        string getAuthor();                                                     //Get author from user
        void setAuthor(string);                                                 //Set author
        
};

Book :: Book()                                                                  //Default constructor, set title and author to empty dtrings
{
    title = "";
    author = "";
}

Book :: Book(string bTitle, string bAuthor)                                     //Parameterized constuctor
{
    title = bTitle;
    author = bAuthor;
}

string Book :: getTitle()                                                       //Return title from user
{
    return title;
}

void Book :: setTitle(string t)                                                 //Set title to t
{
    title = t;
}

string Book :: getAuthor()                                                      //Get author from user
{
   return author; 
}

void Book :: setAuthor(string a)                                                //Set author to a
{
    author = a;
}

class User
{
    private:
        string username;                                                        //Variables
        int ratings[50];
        int numRatings;
        int size;
    public:
        User();                                                                 //Default constructor
        User(string, int[], int);                                               //Parameterized constructor
        string getUsername();                                                   //Return username from file
        void setUsername(string);                                               //Set username to a string
        int getRatingAt(int);                                                   //Get ratings from file
        bool setRatingAt(int, int);                                             //Set ratings and return true or false
        int getNumRatings();                                                    //Return number of ratings(users)
        void setNumRatings(int);                                                //Set number of ratings(users)
        int getSize();                                                          //Get size of array
};

User :: User()                                                                  //Default constructor
{
    username = "";                                                              //Username starts empty
    numRatings = 0;                                                             //Number of rating starts as 0
    size = 50;                                                                  //Size is 50
    for(int i = 0; i < size; i++)                                               //Ratings array
    {
        ratings[i] = 0;
    }
    
}

User :: User(string username1, int ratings1[], int numRatings1)                 //Parameterized constructor
{
    username = username1;
    numRatings = numRatings1;
    size = 50;
    for(int a = 0; a < 50; a++)
    {
        if(a < numRatings)
        {
            ratings[a] = ratings1[a];
        }
        else
        {
            ratings[a] = 0;
        }
   
}
}

string User :: getUsername()                                                    //Return username from file
{
    return username;
}

void User :: setUsername(string usern)                                          //Set username to usern
{
    username = usern;
}

int User :: getRatingAt(int index)
{
    if(index >= size || index < 0)                                              //Return -1 if index is larger than size or index is less than 0
    {
        return -1;
        
    }
    return ratings[index];                                                      //Otherwise return ratings at that index
}

bool User :: setRatingAt(int position, int aposition)
{
    if((position >= 0 && position <= 50)&&(aposition >= 0 && aposition <=50))   //If position is greater than or equal to 0 and less than or equal to 50 return 1
    {
       ratings[position] = aposition ;
       return 1;
    }
    else                                                                        //Otherwise return 0
    {
        return 0;
    }
}

int User :: getNumRatings()                                                     //Return number of ratings(users)
{
    return numRatings;
}

void User :: setNumRatings(int nRatings)                                        //Set numRatings to nRatings
{
    numRatings = nRatings;
}

int User :: getSize()                                                           //Return size
{
    return size;
}

class Library
{
    private:
        int sizeBook = 50;                                                      //variables
        int sizeUser = 100;
        Book books[50];
        User users[100];
        int numBooks;
        int numUsers;
        
    public:
        Library();                                                              //default constructor
        int getSizeBook();                                                      //return size book
        int getSizeUser();                                                      //return size user
        int getNumBooks();                                                      //return num books
        int getNumUsers();                                                      //return num users
        int readBooks(string);                                                  //return new num books
        void printAllBooks();                                                   //make sure books were added
        void printBooksByAuthor(string);                                        //see wha tbooks there are by each author
        int readRatings(string);                                                //return ratings from a file
        int getRating(string, string);                                          //return rating for a book if author and title are found
        int getCountReadBooks(string);                                          //return ratings by a user if user is found
        void viewRatings(string, int);                                          //return ratings the user has given for books
        double calcAvgRating(string);                                           //return average rating for a book
        double calcAvgRatingByAuthor(string);                                   //return average rating for authors
        int addUser(string);                                                    //adds a new user to the database
        int checkOutBook(string, string, int);                                  //updates ratings of a book
        string getRecommendations(string);                                      //reccomends books for a user
        
};

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
    return numBooks;                                                            //return number of books
    myfile.close();                                                             //close file
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
    bool userCheck = false;                                                     //variables
    bool authorCheck = false;
    double avg = 0.0;
    double bookNum = 0.0;
    int authorIndex = 0;
    double tot = 0.0;
    
    if(numBooks == 0 || numUsers == 0)                                          //if no books or no users
    {
        return -3;
    }
    
    for(int i = 0; i < numBooks; i++)
    {
        if(insensitive(author) == insensitive(books[i].getAuthor()))            //look for author and save index
        {
            authorCheck = true;
            authorIndex = i;
        }
        
        if(authorCheck == true)                                                 //if author does actually exist
        {
            for(int a = 0; a < numUsers; a++)                                   //go through users and get total of those authors ratings from all of the users
            {
                if(users[a].getRatingAt(authorIndex) != 0)
                {
                    userCheck = true;
                    tot = tot + double(users[a].getRatingAt(authorIndex));
                    bookNum++;
                }
            }
        }
    }
    
    if(userCheck == true)                                                       //if user is what is looked for return the average rating
    {
        avg = tot / bookNum;
        return avg;
    }
    
    if(authorCheck == false)                                                    //if author is nonexistent return
    {
        return -3;
    }
    
    if(tot = 0.0)                                                               //if total is 0 return
    {
        return 0;
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
    int count = 6;                                                              //variables
    int num = 0;
    int recommendation = 6;
    int similar = 0;
    int tot = 0;
    int location = 0;
    int userNum = 0;
    int minimum = 1000000;
    int userLoc = 0;
    bool userCheck = false;
    bool check = false;
    int none = 0;
    
    for(int i = 0; i < numUsers; i++)                                           //go through and see if usernames are same
    {
        if(insensitive(username) == insensitive(users[i].getUsername()))
        {
            userCheck = true;
            userNum = i;                                                        //save index
        }
    }
    
    if(userCheck == true)                                                       //if users are same
    {
        for(int i = 0; i < sizeUser; i++)
        {
            for(int a = 0; a <= numBooks; a++)
            {
                num = pow((users[userNum].getRatingAt(a) - users[i].getRatingAt(i)), 2);    //SSD
                tot = tot + num;
            }
            
            if(tot == minimum)                                                  //save score
            {
                if(location < i)
                {
                    location = similar;
                }
            }
            
            else if(tot < minimum)                                              //reset minimum
            {
                minimum = tot;
                location = i;
                similar = i;
            }
        }
        
        for(int i = 0; i < count; i++)
        {
            if((users[userNum].getRatingAt(i) == 0) && (users[location].getRatingAt(i) >= 3) && (users[location].getRatingAt(i) <= 5))  //rating in range wanted increase rec
            {
                count++;
            }
            
            else                                                                //otherwise still no recs
            {
                none++;
            }
        }
        
        if((count > 0) && (none > numBooks))                                    //more than 0 recs
        {
            cout << "Here is the list of recommendations" << endl;              //list them
            
            for(int i = 0; i < recommendation; i++)
            {
                if((users[userNum].getRatingAt(i) == 0) && (users[location].getRatingAt(i) >= 3) && (users[location].getRatingAt(i) <= 5))
                {
                    cout << books[i].getTitle() << " by " << books[i].getAuthor() << endl;
                    recommendation++;
                }
            }
        }
        
        if(none == numBooks)                                                    //not rec same as numbooks return below
        {
            cout << "There are no recommendations for " << username << " at present." << endl;
        }
    }
    
    else                                                                        //otherwise username is nonexistent
    {
        cout << username << " does not exist." << endl;
    }
}
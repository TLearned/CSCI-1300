// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 7 - Problem 6

int split(string str, char letter, string arr[], int len)   //split function from hw4
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
                
                    if(parts >= len)                     
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

double readBooks(string fileName, Book objects[], int numBookStored, int size) //hw 5
{
    ifstream myfile;   
    myfile.open(fileName);
    string line = "";
    
    if(numBookStored == size)
    {
        return -2;
    }
    
    if(myfile.is_open())
    {
        while(getline(myfile, line) && numBookStored < size)
        {
            if(line != "")
            {
                string temp[2];
                split (line, ',', temp, size);
                objects[numBookStored].setAuthor(temp[0]);
                objects[numBookStored].setTitle(temp[1]);
                numBookStored++;
            }
        }
    }
    
    else
    {
        return -1;
    }
    return numBookStored;
}

int readRatings(string fileName, User users[], int numUsersStored, int usersArrSize, int maxColumns)  //from hw5 changed
{
    ifstream myfile;                                                //open file
    myfile.open(fileName);
    string line = "";                                               //initialize string
    string temp[51];
    
    if(numUsersStored == usersArrSize)                                         //if more users than rows return -2
    {
        return -2;
    }
    
    if(!(myfile.is_open()))                                         //if file isn't open return -1
    {
        return -1;
    }
    
    if(myfile.is_open())                                            //if it's open
    {
        while((getline(myfile, line)) && (numUsersStored < usersArrSize))
        {
            if(line != "")
            {
                split(line, ',', temp, 51);                         //call split
                users[numUsersStored].setUsername(temp[0]);                          //initialize temp for users
                for(int a = 1; a < maxColumns + 1; a++)             //counter for columns
                {
                    if(temp[a] != "")                               //if temp isn't empty
                    {
                        users[numUsersStored].setRatingAt(a-1, stoi(temp[a]));   //users array filled
                    }
                }
                numUsersStored++;                                         //move on
            }
        }
        return numUsersStored;                                            //return number of users
    }
}

string insensitive(string str)
{
    string strU = "";
    for(int i = 0; i < str.length(); i++)
    {
        if(islower(str[i]))                                                   //if letter is lowercase
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

int getRating(string username, string title, User users[], Book books[], int usersSize, int booksSize)  //hw7
{
    title = insensitive(title);
    username = insensitive(username);
    for(int z = 0; z < usersSize; z ++)
    {
        if(insensitive(users[z].getUsername()) == username)
        {
            for(int x = 0; x < booksSize; x++)
            {
                if(insensitive(books[x].getTitle()) == title)
                {
                    return users[z].getRatingAt(x);
                }
            }
        }
    }
return -3;
}

int getCountReadBooks(string userName, User users[], int numUsersStored, int numBooksStored)  //hw7
{
    int countRB = 0;
    userName = insensitive(userName);
    if(numBooksStored == 0)
    {
        return -3;
    }
    for(int a = 0; a <numUsersStored; a++)
    {
        if(insensitive(users[a].getUsername()) == userName)
        {
            for(int b = 0; b < numBooksStored; b++)
            {
                if(users[a].getRatingAt(b) != 0)
                {
                    countRB++;
                }
            }
            return countRB;
        }
    }
    return -3;
}

double calcAverageRating(User users[], Book books[], int numUsersStored, int numBooksStored, string title)  //hw7
{
     double add = 0;
     double dR = 0;
     double retrn = 0;
     int index = -1;
     title = insensitive(title);
     if(numUsersStored == 0 || numBooksStored == 0)
     {
         return -3;
     }
     
     for(int i = 0; i < numBooksStored; i++)
     {
         if(insensitive(books[i].getTitle()) == title)
         {
             index = i;
         }
     }
     
     for(int j = 0; j < numUsersStored; j++)
     {
         if(users[j].getRatingAt(index) != 0)
         {
             add = add + users[j].getRatingAt(index);
             dR++;
         }
     }
     
     if(numUsersStored == 0 || numBooksStored == 0)
     {
         return -3;
     }
     
     if(index == -1)
     {
         return -3;
     }
     
     if(dR == 0)
     {
         return 0;
     }
     
     else
     {
         retrn = 1.0 * add/dR;
     }
     
     return retrn;
}

void printMenu()
{
    cout << "======Main Menu=====" << endl;
    cout << "1. Read books" << endl;
    cout << "2. Read ratings" << endl;
    cout << "3. Get rating" << endl;
    cout << "4. Find number of books user rated" << endl;
    cout << "5. Get average rating" << endl;
    cout << "6. Quit" << endl;
}

int main()
{
    string fileName;
    int aSize = 50;
    
    do
    {
        int choice;
        cin >> choice;
        switch(choice)
        {
            case 1:
            {
                cout << "Enter a book file name: " << endl;
                cin >> fileName;
                double numBookStored = readBooks(string fileName, Book objects[], int numBooksStored, int aSize);
                {
                    if(numBookStored == -1)                                     //if returned -1 return
                    {
                        cout << "No books saved to the database: " << endl;
                    }
                    else if(numBookStored == -2)                                //if returned -2 return
                    {
                        cout << "Database is already full. No books were added." << endl;
                    }
                    else if(numBookStored == asize)                             //if return and numbooks is same return
                    {
                        cout << "Database is full. Some books may have not been added." << endl;
                    }
                    else                                                        //otherwise return
                    {
                        cout << "Total books in the database: " << endl << numBookStored << endl;
                    }
                }
                break;
            }
            
            case 2:
            {
                cout << "Enter a user file name: " << endl;
                int numUsersStored = readRatings(string fileName; User users[]; int numUsersStored; int usersArrSize; int maxColumns);
                {
                    if(numUsersStored == -1)                                    //if returned -1 return
                    {
                        cout << "No users saved to the database. " << endl;
                    }
                    
                    else if(numUsersStored == -2)                               //if returned -2 return
                    {
                        cout << "Database is already full. No users were added." << endl;
                    }
                    
                    else if(numBookStored == asize)                             //if return and array size is same return
                    {
                        cout << "Database is full. Some users may have not been added." << endl;
                    }
                    else                                                        // otherwise return
                    {
                        cout << "Total users in the database: " << endl << numUsersStored << endl;
                    }
                }
                break;
            }
            
            case 3:
            {
                cout << "Enter a user name: " << endl;
                cin >> username;
                cout << "Enter a book title: " << endl;
                cin >> title;
                int ates = getRating(string username; string title; User users[]; Book books[]; int usersSize; int booksSize)
                {
                    if(rates == 0)                                              //is no rates return
                    {
                        cout << username << " as not rated " << title << endl;
                    }
                    
                    else if(rates == -3)                                        //if return is -3 return return
                    {
                        username << " or " << title << " does not exist. " << endl;
                    }
                    
                    else                                                        //otherwise return
                    {
                    cout << username << " rated " << title << " with " << rating << endl;
                    }
                }
                break;
            }
            
            case 4:
            {
                cout << "Enter a username: " << endl;
                cin >> username;
                int count = getCountReadBooks(string username; User users[]; int numUsersStored; int numBooksStored)
                {
                    if(count == 0)                                              //if 0 return
                    {
                        username << " has not rated any books." << endl;
                    }
                    
                    if(count == -3)                                             //if -3 return
                    {
                        username << " does not exist." << endl;
                    }
                    
                    else                                                        //otherwise return
                    {
                        "The average rating for " << title << " is " << avg << endl;
                    }
                }
                break;
            }
            
            case 5:
            {
                cout << "Enter a book title: " << endl;
                cin >> book title;
                double avg = calcAvgRating(User users[]; Book books[]; int numUsersStored; int numBooksStored; string title)
                {
                    if(avg == -3)                                               //if -3 return
                    {
                        cout << title << " does not exist." << endl;
                    }
                    
                    else                                                        //otherwise return
                    {
                        "The average rating for " << title << " is " << avg << endl;
                    }
                }
                break;
            }
            
            case 6:
            {
                cout << "Good bye!" << endl;                                    //if 6 exit and return
                break;
            }
        }
    }while (choice != 6)                                                        //keep going through until 6 is chosen
}
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Book
{
    private:
        string title;
        string author;
        
    public:
        Book();
        Book(string, string);
        string getTitle();
        void setTitle(string);
        string getAuthor();
        void setAuthor(string);
        
};

Book :: Book()
{
    title = "";
    author = "";
}

Book :: Book(string bTitle, string bAuthor)
{
    title = bTitle;
    author = bAuthor;
}

string Book :: getTitle()
{
    return title;
}

void Book :: setTitle(string t)
{
    title = t;
}

string Book :: getAuthor()
{
   return author; 
}

void Book :: setAuthor(string a)
{
    author = a;
}

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

void printAllBooks (Book objects[], int numBooksStored) //hw5
{
    if(numBooksStored <= 0)                                                 
    {
        cout << "No books are stored" << endl;
    }
    else                                                                
    {
        cout << "Here is a list of books" << endl;
        for(int i = 0; i < numBooksStored; i++)
        {
            cout << objects[i].getTitle() << " by " << objects[i].getAuthor() << endl;
        }
    }
}

void printBooksByAuthor(Book objects[], int numOfBooks, string authorName) //hw5
{
    int count = 0;
    if(numOfBooks <= 0)
    {
        cout << "No books are stored" << endl;
        return;
    }
    for(int x = 0; x < numOfBooks; x++)
    {
        if(authorName == objects[x].getAuthor())
        {
            count++;
        }
    }
    
    if(count < 1)
    {
        cout << "There are no books by " << authorName << endl;
        return;
    }
    
    cout << "Here is a list of books by " << authorName << endl;
    for(int y = 0; y < numOfBooks; y++)
    {
        if(authorName == objects[y].getAuthor())
            {
                cout<< objects[y].getTitle() << endl;
            }
    }
}

void printMenu(){
    cout << "======Main Menu=====" << endl;
    cout << "1. Read books" << endl;
    cout << "2. Print all books" << endl;
    cout << "3. Print books by author" << endl;
    cout << "4. Quit" << endl;
}

int main()
{
    int choice;
    Book books[50];
    string fileName;
    int numBooksStored = 0;
    int aSize = 50;
    string authorName;
    
    do
    {
        printMenu();
        cin >> choice;
        switch (choice)
        {
            case 1:
            {
                cout << "Enter a book file name: " << endl;
                cin >> fileName;
                numBooksStored = readBooks(fileName, books, numBooksStored, aSize);
                {
                    if(numBooksStored == -1)
                    {
                        cout << "No books saved to the database." << endl;
                    }
                    else if(numBooksStored == -2)
                    {
                        cout << "Database is already full. No books were added." << endl;
                    }
                    else if(numBooksStored == aSize)
                    {
                        cout << "Database is full. Some books may have not been added." << endl;
                    }
                    else
                    {
                        cout << "Total books in the database: " << numBooksStored << endl;
                    }
                }
                break;
            }
            
            case 2:
            {
                printAllBooks(books, numBooksStored);
                break;
            }
            
            case 3:
            {
                cout << "Enter name of author: " << endl;
                cin.ignore();
                getline(cin, authorName);
                printBooksByAuthor(books, numBooksStored, authorName);
                break;
            }
            
            case 4:
            {
                cout << "Good bye!" << endl;
                break;
            }
            
            default:
            {
                cout << "Invalid input." << endl;
                
            }
        }
    }while (choice != 4);
}
#include <iostream>
#include <fstream>
using namespace std;

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

void printAllBooks (Book objects[], int numOfBooks) //hw5
{
    ifstream myfile;                                                        
    myfile.open("books.txt");                                               
    if(myfile.is_open())                                                    
    {
        if(numOfBooks <= 0)                                                 
        {
            cout << "No books are stored" << endl;
        }
        else                                                                
        {
            cout << "Here is a list of books" << endl;
            for(int i = 0; i < numOfBooks; i++)
            {
                cout << objects[i].getTitle() << " by " << objects[i].getAuthor() << endl;
            }
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
    int numBooks = 0;
    string authorName;
    
                if (choice == 1)
                {
                    cout << "Enter a book file name: " << endl;
                    getline(cin, fileName);
                    numBooks = readBooks(fileName, books, numBooksStored, aSize);
                    {
                        if(numBooks == -1)
                        {
                            cout << "No books saved to the database." << endl;
                        }
                        else if(numBooks == -2)
                        {
                            cout << "Database is already full. No books were added." << endl;
                        }
                        else if(numBooks == aSize)
                        {
                            cout << "Database is full. Some books may not have been added." << endl;
                        }
                        else
                        {
                            cout << "Total books in the database: " << numBooksStored << endl;
                        }
                    }
                    break;
                }
                
                if else(choice == 2)
                {
                    printAllBooks(books, numBooksStored);
                    break;
                }
                
                if else(choice == 3)
                {
                    cout << "Enter name of author: " << endl;
                    getline(cin, authorName);
                    printBooksByAuthor(books, numBooksStored, authorName);
                    break;
                }
                
                if else(choice == 4)
                {
                    cout << "Good bye!" << endl;
                    break;
                }
                
               else
                {
                    cout << "Invalid option." << endl;
                    
                }
  
// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 6 - Problem 7

#include <iostream>
#include <fstream>
using namespace std;

int split(string str, char letter, string arr[], int len)                       //split function from hw4
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

double readBooks(string fileName, Book objects[], int numBookStored, int size)  //hw 6
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

void printAllBooks (Book objects[], int numBooksStored)                         //hw6 with checking for file being open removed
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

void printBooksByAuthor(Book objects[], int numBooksStored, string authorName)  //hw6
{
    int count = 0;
    if(numBooksStored <= 0)
    {
        cout << "No books are stored" << endl;
        return;
    }
    for(int x = 0; x < numBooksStored; x++)
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
    for(int y = 0; y < numBooksStored; y++)
    {
        if(authorName == objects[y].getAuthor())
            {
                cout<< objects[y].getTitle() << endl;
            }
    }
}

void printMenu(){                                                               //print menu function
    cout << "======Main Menu=====" << endl;
    cout << "1. Read books" << endl;
    cout << "2. Print all books" << endl;
    cout << "3. Print books by author" << endl;
    cout << "4. Quit" << endl;
}

int main()
{
    int choice;                                                                 //initialize variables
    Book books[50];
    string fileName;
    int numBooksStored = 0;
    int aSize = 50;
    string authorName;
    
    do
    {
        printMenu();
        cin >> choice;
        switch (choice)                                                         //switch funcion
        {
            case 1:                                                             //if they choose 1 they ener a file name, the function runs through readBooks.
            {
                cout << "Enter a book file name: " << endl;
                cin >> fileName;
                numBooksStored = readBooks(fileName, books, numBooksStored, aSize);
                {
                    if(numBooksStored == -1)                                    //If the output from readBooks is -1 return below.
                    {
                        cout << "No books saved to the database." << endl;
                    }
                    else if(numBooksStored == -2)                               //If the output from readBooks is -2 return below.
                    {
                        cout << "Database is already full. No books were added." << endl;
                    }
                    else if(numBooksStored == aSize)                            //If the output from readBooks is the same as the array size return below.
                    {
                        cout << "Database is full. Some books may have not been added." << endl;
                    }
                    else                                                        //otherwise return the number of books
                    {
                        cout << "Total books in the database: " << numBooksStored << endl;
                    }
                }
                break;
            }
            
            case 2:                                                             //If the user inputs two run through printAllBooks.
            {
                printAllBooks(books, numBooksStored);
                break;
            }
            
            case 3:                                                             //If the user chooses three run through printBooksByAuthor.
            {
                cout << "Enter name of author: " << endl;                       //User enters authors name.
                cin.ignore();
                getline(cin, authorName);
                printBooksByAuthor(books, numBooksStored, authorName);
                break;
            }
            
            case 4:                                                             //If they choose 4 return below.
            {
                cout << "Good bye!" << endl;
                break;
            }
            
            default:                                                            //If they choose any number not between 1 and 4 return below.
            {
                cout << "Invalid input." << endl;
                
            }
        }
    }while (choice != 4);                                                       //Keep going until the choice is 4 and when the choice is 4 exit the loop
}
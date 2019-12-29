// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 6 - Problem 5

#include <iostream>
#include <fstream>
using namespace std;

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

int main()
{
   // Test Case 1
   Book books[10];
   printAllBooks(books, 0);
}
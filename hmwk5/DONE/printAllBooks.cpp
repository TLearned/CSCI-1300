// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 5 - Problem 3

#include <iostream>
#include <fstream>
using namespace std;

void printAllBooks (string titles[], string authors[], int numOfBooks)
{
    ifstream myfile;                                                        //input file
    myfile.open("books.txt");                                               
    if(myfile.is_open())                                                    //if its open
    {
        if(numOfBooks <= 0)                                                 //if 0 or less books output
        {
            cout << "No books are stored" << endl;
        }
        else                                                                //otherwise print list
        {
            cout << "Here is a list of books" << endl;
            for(int i = 0; i < numOfBooks; i++)
            {
                cout << titles[i] << " by " << authors[i] << endl;
            }
        }
    }
}

int main()
{
    //Test Case 1
    string book_titles[] = {};
    string book_authors[] = {};
    printAllBooks(book_titles, book_authors, 0);
}
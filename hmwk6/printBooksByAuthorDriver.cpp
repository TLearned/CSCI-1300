// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 6 - Problem 6

#include <iostream>
#include <fstream>
using namespace std;

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

int main()
{
    //Test Case 1
    Book listOfBooks[] = {};
    int numberOfBooks = 0;
    string author = "Dan Brown";
    printBooksByAuthor(listOfBooks, numberOfBooks, author);
}
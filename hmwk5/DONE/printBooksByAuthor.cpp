#include <iostream>
#include <fstream>
using namespace std;


void printBooksByAuthor(string titles[], string authors[], int numOfBooks, string authorName)
{
    int count = 0;                                                          //initial count
    if(numOfBooks <= 0)                                                     //if no books print
    {
        cout << "No books are stored" << endl;
        return;
    }
    for(int x = 0; x < numOfBooks; x++)                                     //author name check
    {
        if(authorName == authors[x])
        {
            count++;
        }
    }
    
    if(count < 1)                                                           //if the author doesn't have books return
    {
        cout << "There are no books by " << authorName << endl;
        return;
    }
    
    cout << "Here is a list of books by " << authorName << endl;            //if the author has books return list
    for(int y = 0; y < numOfBooks; y++)
    {
        if(authorName == authors[y])
            {
                cout<< titles[y] << endl;
            }
    }
}

int main()
{
    //Test Case 1
    string book_titles[] = {};
    string book_authors[] = {};
    int numberOfBooks = 0;
    string author = "Dan Brown";
    printBooksByAuthor(book_titles, book_authors, numberOfBooks, author);
}
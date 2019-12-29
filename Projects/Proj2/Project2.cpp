// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Project 2 - Problem 13

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

void displayMenu()
{
    cout << "Select a numerical option:" << endl;
    cout << "======Main Menu=====" << endl;
    cout << "1. Read books" << endl;
    cout << "2. Read ratings" << endl;
    cout << "3. Print all books" << endl;
    cout << "4. Print books by author" << endl;
    cout << "5. Get rating" << endl;
    cout << "6. Find number of books user rated" << endl;
    cout << "7. View ratings" << endl;
    cout << "8. Get average rating" << endl;
    cout << "9. Get average rating by author" << endl;
    cout << "10. Add a user" << endl;
    cout << "11. Checkout a book" << endl;
    cout << "12. Get recommendations" << endl;
    cout << "13. Quit" << endl;
}

int main()
{
    Library l  = Library();
    int choice;
    int numBooksStored = 0;
    int numUsersStored = 0;
    int rate = 0;
    int countRead = 0;
    double avgRating = 0;
    double avgRatingA = 0;
    int in = 0;
    string COB;
    string gR;
    int minRating;
    string authorN;
    int newRating;
    Book books[50];
    string fileName;
    int aSize = 50;
    string authorName;
    bool booksIn = false;
    bool usersIn = false;
    string username;
    string title;
    double rating;
    
    do
    {
        displayMenu();
        cin >> choice;
        switch (choice)                                                         //switch funcion
        {
            case 1:
            {
                booksIn = true;                                                 //change because books was correctly input
                cout << "Enter a book file name: " << endl;
                cin >> fileName;
                numBooksStored = l.readBooks(fileName);
                {
                    if(numBooksStored == -1)                                    //If the output from readBooks is -1 return below.
                    {
                        cout << "No books saved to the database." << endl;
                        cout << endl;
                        break;
                    }
                    else if(numBooksStored == -2)                               //If the output from readBooks is -2 return below.
                    {
                        cout << "Database is already full. No books were added." << endl;
                        cout << endl;
                        break;
                    }
                    else if(numBooksStored == aSize)                            //If the output from readBooks is the same as the array size return below.
                    {
                        cout << "Database is full. Some books may have not been added." << endl;
                        cout << endl;
                        break;
                    }
                    else                                                        //otherwise return the number of books
                    {
                        cout << "Total books in the database: " << numBooksStored << endl;
                        cout << endl;
                        break;
                    }
                }
                break;
            }
            
            case 2:
            {
                usersIn = true;                                                 //change becasue users was imported
                cout << "Enter a user file name: " << endl;                     //enter and store file name
                cin >> fileName;
                numUsersStored = l.readRatings(fileName);                       //look for num users as return from read ratings
                if(numUsersStored = -1)                                         //-1 return below
                {
                    cout << "No users saved to the database." << endl;
                    cout << endl;
                    break;
                }
                if(numUsersStored = -2)                                         //-2 return below
                {
                    cout << "database is already full. No users were added." << endl;
                    cout << endl;
                    break;
                }
                else                                                            //anything else return
                {
                    cout << "Total users in the database: " << numUsersStored << endl;
                    cout << endl;
                    break;
                }
            }
            
            case 3:
            {
                l.printAllBooks();                                              //cal print all books
                cout << endl;
                break;
            }
            
            case 4:
            {
                if(booksIn == true && usersIn == true)                          //both imported correctly
                {
                    cout << "Enter name of author: " << endl;                   //enter author name and store
                    cin >> authorName;
                    l.printBooksByAuthor(authorName);                           //print books by that author
                    break;
                }
                else
                {
                    cout << "Database has not been fully initialized." << endl; //otherwise not initialized
                }
            }
            case 5:
            {
               if(booksIn == true && usersIn == true)                           //both imported correctly
               {
                   cout << "Enter a user name: " << endl;                       //enter and store username
                   cout << "Enter a book title: " << endl;                      //enter and store title
                   cin.ignore();
                   getline(cin,title);                                          //multiple word title
                   rate = l.getRating(username, title);                         //store get rating in rate
                   if(rate == 0)                                                //if 0 return
                   {
                       cout << username << " has not rated " << title << endl;
                       cout << endl;
                       break;
                   }
                   
                   else if(rate == -3)                                          //if -3 return
                   {
                       cout << username << " or " << title << " does not exist." << endl;
                       cout << endl;
                       break;
                   }
                   
                   else                                                         //otherwise return
                   {
                      cout << username << " rated " << title << " with " << rating << endl; 
                      cout << endl;
                      break;
                   }
               }
               else                                                             //if not imported correctly
               {
                   cout << "Database has not been fully initialized." << endl;
               }
               break;
            }
            case 6:
            {
                if(booksIn == true && usersIn == true)                          //if imported correctly
                {
                    cout << "Enter a user name: " << endl;                      //enter and store username
                    cin >> username;
                    countRead = l.getCountReadBooks(username);                  //store get count read books in count read
                    if(countRead == 0)                                          //if 0 return
                    {
                        cout << username << " has not read any books." << endl;
                        cout << endl;
                        break;
                    }
                    if(countRead == -3)                                         //if -3 return
                    {
                        cout << username << " does not exist." << endl;
                        cout << endl;
                        break;
                    }
                    else                                                        //otherwise return
                    {
                        cout << username << " rated " << countRead << " books." << endl;
                        cout << endl;
                        break;
                    }
                }
                else                                                            //not imported correctly
                {
                    cout << "Database has not been fully initialized." << endl;
                }
            }
            case 7:
            {
                if(booksIn == true && usersIn == true)                          //imported correctly
                {
                    cout << "Enter a user name" << endl;                        //enter and store username
                    cin >> username;
                    cout << "Enter a minimum rating" << endl;                   //enter and store min rating
                    cin >> minRating;
                    l.viewRatings(username, minRating);                         //pass to view ratings
                }
                else                                                            //not imported correctly
                {
                    cout << "Database has not been fully initialized." << endl;
                    cout << endl;
                    break;
                }
            }
            case 8 :
            {
                if(booksIn == true && usersIn == true)                          //imported correctly
                {
                    cout << "Enter a book title: " << endl;                     //enter and store title
                    cin >> title;
                    avgRating = l.calcAvgRating(title);                         //pass to avg rating
                    if(avgRating == -3)                                         //if -3 return
                    {
                        cout << title << " does not exist." << endl;
                        cout << endl;
                        break;
                    }
                    else                                                        //otherwise return
                    {
                        cout << "The average rating for " << title << " is " << avgRating << endl;
                        cout << endl;
                        break;
                    }
                }
                else                                                            //not imported correctly
                {
                    cout << "Database has not been fully initialized." << endl;
                    cout << endl;
                    break;
                }
                break;
            }
            case 9 :
            {
                if(booksIn == true && usersIn == true)                          //imported correctly
                {
                    cout << "Enter an author name: " << endl;                   //enter and store author name
                    cin >> authorN;
                    avgRatingA = l.calcAvgRatingByAuthor(authorName);           //pass to calcAvgRatingByAuthor
                    if(avgRatingA == -3)                                        //if -3 return
                    {
                        cout << authorN << " does not exist." << endl;
                        cout << endl;
                        break;
                    }
                    else                                                        //otherwise return
                    {
                        cout << "The average rating for" << authorN << " is " << avgRatingA << endl;
                        cout << endl;
                        break;
                    }
                }
                else                                                            //not imported correctly
                {
                    cout << "Database has not been fully initialized." << endl;
                    cout << endl;
                    break;
                }
                break;
            }
            case 10:
            {
                cout << "Enter a user name: " << endl;                          //enter and store username
                cin >> username;
                in = l.addUser(username);                                              //pass to add user
                if(in == 1)                                                     //if 1 return
                {
                    cout << "Welcome to the library " << username << endl;
                    cout << endl;
                    break;
                }
                else if(in == 0)                                                //if 0 return
                {
                    cout << username << " already exists in the database." << endl;
                    cout << endl;
                    break;
                }
                else if(in == -2)                                               //if -2 return
                {
                    cout << "Database is already full. " << username << " was not added.";
                    cout << endl;
                    break;
                }
                break;
            }
            case 11:
            {
                if(booksIn == true && usersIn == true)                          //if correctly imported
                {
                    cout << "Enter a user name: " << endl;                      //enter and store username
                    cin >> username;
                    cout << "Enter a book title: " << endl;                     //enter and store title
                    cin >> title;
                    cout << "Enter a new rating: " << endl;                     //enter and store rating
                    cin >> newRating;
                    COB = l.checkOutBook(username, title, newRating);           //pass to CheckOutBook
                    cout << COB << endl;
                    cout << endl;
                    break;
                }
                else                                                            //otherwise return
                {
                    cout << "Database has not been fully initialized." << endl;
                    cout << endl;
                    break;
                } 
                break;
            }
            case 12:
            {
                if(booksIn == true && usersIn == true)                          //if correctly imported
                {
                    cout << "Enter a user name: " << endl;                      //enter and store username
                    cin >> username;
                    gR = l.getRecommendations(username);
                    cout << gR << endl;
                    cout << endl;
                    break;
                }
                else                                                            //if not correctly imported
                {
                    cout << "Database has not been fully initialized." << endl;
                }
            }
            case 13:
            {
                cout << "Good bye!" << endl;                                    //return goodbye and get out
                break;
            }
            default:
            {
                cout << "Invalid input." << endl;                                //input is anything but numbers between 1 and 13
                cout << endl;
            }
        }                                                                       //Keep going until the choice is 4 and when the choice is 4 exit the loop
    }
    while (choice != 13);
}
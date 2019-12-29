#include "book.h"

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
// CS1300 Fall 2019
// Author: Tyler Learned
// Recitation: 1300-301 - Punith
// Homework 6 - Problem 3

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    Book b3 = Book();
    string a = "is this author?";
    b3.setAuthor(a);
    cout << b3.getAuthor() << endl;
}
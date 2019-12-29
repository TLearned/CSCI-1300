#indef SMAPLE_H
#define SMAPLE_H

class Book
{
    private:
        string title;                                                           //variables
        string author;
        
    public:
        Book();                                                                 //Default constructor
        Book(string, string);                                                   //Parameterized constructor
        string getTitle();                                                      //Get title from user
        void setTitle(string);                                                  //Set Title
        string getAuthor();                                                     //Get author from user
        void setAuthor(string);                                                 //Set author
        
};

#endif
#indef SMAPLE_H
#define SMAPLE_H

class Library
{
    private:
        int sizeBook = 50;                                                      //variables
        int sizeUser = 100;
        Book books[50];
        User users[100];
        int numBooks;
        int numUsers;
        
    public:
        Library();                                                              //default constructor
        int getSizeBook();                                                      //return size book
        int getSizeUser();                                                      //return size user
        int getNumBooks();                                                      //return num books
        int getNumUsers();                                                      //return num users
        int readBooks(string);                                                  //return new num books
        void printAllBooks();                                                   //make sure books were added
        void printBooksByAuthor(string);                                        //see wha tbooks there are by each author
        int readRatings(string);                                                //return ratings from a file
        int getRating(string, string);                                          //return rating for a book if author and title are found
        int getCountReadBooks(string);                                          //return ratings by a user if user is found
        void viewRatings(string, int);                                          //return ratings the user has given for books
        double calcAvgRating(string);                                           //return average rating for a book
        double calcAvgRatingByAuthor(string);                                   //return average rating for authors
        int addUser(string);                                                    //adds a new user to the database
        int checkOutBook(string, string, int);                                  //updates ratings of a book
        string getReccomendations(string);                                      //reccomends books for a user
        
};

#endif
#indef SMAPLE_H
#define SMAPLE_H

class User
{
    private:
        string username;                                                        //Variables
        int ratings[50];
        int numRatings;
        int size;
    public:
        User();                                                                 //Default constructor
        User(string, int[], int);                                               //Parameterized constructor
        string getUsername();                                                   //Return username from file
        void setUsername(string);                                               //Set username to a string
        int getRatingAt(int);                                                   //Get ratings from file
        bool setRatingAt(int, int);                                             //Set ratings and return true or false
        int getNumRatings();                                                    //Return number of ratings(users)
        void setNumRatings(int);                                                //Set number of ratings(users)
        int getSize();                                                          //Get size of array
};

#endif
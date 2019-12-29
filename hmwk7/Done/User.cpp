#include "user.h"

User :: User()                                                                  //Default constructor
{
    username = "";                                                              //Username starts empty
    numRatings = 0;                                                             //Number of rating starts as 0
    size = 50;                                                                  //Size is 50
    for(int i = 0; i < size; i++)                                               //Ratings array
    {
        ratings[i] = 0;
    }
    
}

User :: User(string username1, int ratings1[], int numRatings1)                 //Parameterized constructor
{
    username = username1;
    numRatings = numRatings1;
    size = 50;
    for(int a = 0; a < 50; a++)
    {
        if(a < numRatings)
        {
            ratings[a] = ratings1[a];
        }
        else
        {
            ratings[a] = 0;
        }
   
}
}

string User :: getUsername()                                                    //Return username from file
{
    return username;
}

void User :: setUsername(string usern)                                          //Set username to usern
{
    username = usern;
}

int User :: getRatingAt(int index)
{
    if(index >= size || index < 0)                                              //Return -1 if index is larger than size or index is less than 0
    {
        return -1;
        
    }
    return ratings[index];                                                      //Otherwise return ratings at that index
}

bool User :: setRatingAt(int position, int aposition)
{
    if((position >= 0 && position <= 50)&&(aposition >= 0 && aposition <=50))   //If position is greater than or equal to 0 and less than or equal to 50 return 1
    {
       ratings[position] = aposition ;
       return 1;
    }
    else                                                                        //Otherwise return 0
    {
        return 0;
    }
}

int User :: getNumRatings()                                                     //Return number of ratings(users)
{
    return numRatings;
}

void User :: setNumRatings(int nRatings)                                        //Set numRatings to nRatings
{
    numRatings = nRatings;
}

int User :: getSize()                                                           //Return size
{
    return size;
}
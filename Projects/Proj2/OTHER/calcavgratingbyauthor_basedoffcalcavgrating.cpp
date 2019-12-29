double Library :: calcAvgRating(string title)
{
    double add = 0;                                                             //variables
    double dR = 0;
    double retrn = 0;
    int index = -1;
    
    author = insensitive(author);                                                 //title all one case
    if(numUsers == 0 || numBooks == 0)                                          //if no users and no books return -3
    {
        return -3;
    }
     
    for(int i = 0; i < numBooks; i++)                                           //go through and see if titles same 
    {
        if(insensitive(books[i].getAuthor()) == author)
        {
            index = i;
        }
    }
     
    for(int j = 0; j < numUsers; j++)
    {
        if(users[j].getRatingAt(index) != 0)                                    //is there is a rating for user at that index add it
        {
            add = add + users[j].getRatingAt(index);
            dR++;
        }
    }
     
    if(numUsers == 0 || numBooks == 0)                                          //if no users or no books return -3
    {
        return -3;
    }
     
    if(index == -1)                                                             //if position is -1 return -3
    {
        return -3;
    }
     
    if(dR == 0)                                                                 //if dR is 0 return 0
    {
        return 0;
    }
     
    else                                                                        //otherwise find avg
    {
        retrn = 1.0 * add/dR;
    }
     
    return retrn;
}
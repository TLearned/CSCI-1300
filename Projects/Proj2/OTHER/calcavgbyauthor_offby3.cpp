double Library :: calcAvgRatingByAuthor(string author)
{
    bool userCheck = false;                                                     //variables
    bool authorCheck = false;
    double avg = 0.0;
    double bookNum = 0.0;
    int authorIndex = 0;
    double tot = 0.0;
    
    if(numBooks == 0 || numUsers == 0)                                          //if no books or no users
    {
        return -3;
    }
    
    for(int i = 0; i < numBooks; i++)
    {
        if(insensitive(author) == insensitive(books[i].getAuthor()))            //look for author and save index
        {
            authorCheck = true;
            authorIndex = i;
        }
        
        if(authorCheck == true)                                                 //if author does actually exist
        {
            for(int a = 0; a < numUsers; a++)                                   //go through users and get total of those authors ratings from all of the users
            {
                if(users[a].getRatingAt(authorIndex) != 0)
                {
                    userCheck = true;
                    tot = tot + double(users[a].getRatingAt(authorIndex));
                    bookNum++;
                }
            }
        }
    }
    
    if(userCheck == true)                                                       //if user is what is looked for return the average rating
    {
        avg = tot / bookNum;
        return avg;
    }
    
    if(authorCheck == false)                                                    //if author is nonexistent return
    {
        return -3;
    }
    
    if(tot = 0.0)                                                               //if total is 0 return
    {
        return 0;
    }
}
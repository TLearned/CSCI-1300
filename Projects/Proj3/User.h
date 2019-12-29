#indef SMAPLE_H
#define SMAPLE_H

class User
{
    private:
        string username;                                                        //variables
        int num_pokemon;
        int points;
        int num_pokeballs;
        
    public:
        User();                                                                 //constructors
        User(string, int, int, int);
        string getUsername();
        void setUsername(string);
        int getNum_pokemon();
        void setNum_pokemon(int);
        int getPoints();
        void setPoints(int);
        int getNum_pokeballs();
        void setNum_pokeballs(int);
        
};

#endif
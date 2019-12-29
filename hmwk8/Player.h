#indef SMAPLE_H
#define SMAPLE_H

class Player
{
    private:
        string name;                                                            //Variables
        double points;
        
    public:
        Player();                                                               //Constructors
        Player(string, double);
        string getName();                                                       //class functions
        double getPoints();
        void setName(string);
        void setPoints(double);
};

#endif
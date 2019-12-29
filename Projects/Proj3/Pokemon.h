#indef SMAPLE_H
#define SMAPLE_H

class Pokemon
{
    private:
        string name;                                                            //Variables
        int hp;
        int attack;
        int defense;
        int speed;
        int max;
        
    public:
        Pokemon();                                                               //Constructors
        Player(string, int, int, int, int, int);
        void readFile();
        string getName();
        void setName(string);
        int get_hp();
        void set_hp(int);
        int getAttack();
        void setAttack(int);
        int getDefense();
        void setDefense(int);
        int getSpeed();
        void setSpeed(int);
        int getMax();
        void setMax(int);
        
};

#endif
#indef SMAPLE_H
#define SMAPLE_H

class Map
{
    private:
        char ground_tile;                                                       //variables
        char water_tile;
        char gym_tile;
        char center_tile;
        
    public:
        Map();                                                                  //constructors
        Map(string, string, string, string);
        void readFile();
        array map[][];
        char getGround();
        void setGround(char);
        char getWater();
        void setWater(char);
        char getGym();
        void setGym(char);
        char getCenter();
        void setCenter(char);
        
};

#endif
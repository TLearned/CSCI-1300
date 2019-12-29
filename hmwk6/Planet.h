#indef SMAPLE_H
#define SMAPLE_H

class Planet
{
    private:
        string planetName;                                                      //variables
        double planetRadius;
        
    public:
        Planet();                                                               //Default Constructor
        Planet(string, double);                                                 //Parameterized Constructor
        string getName();                                                       //Get name from user
        void setName(string);                                                   //Set name for parameter
        double getRadius();                                                     //Get the radius from user
        void setRadius(double);                                                 //Set Radius for parameter
        double getVolume();                                                     //Get Volume function
};

#endif
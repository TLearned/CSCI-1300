class RaceTrack
{
private:
    string name;
    string raceName;
    double topSpeed;
    string carModel;
    double minSpeed;
    string model;
public:
    RaceTrack();
    RaceTrack(string);
    bool addCar(double, string);
    double calcAvgSpeed();
    int countAvailable(double);
    int countAvailableModels(string);
};
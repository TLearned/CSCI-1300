#indef SMAPLE_H
#define SMAPLE_H

class Gym
{
    private:
        string trainer;                                                         //variables
        string trainer_pokemon;
        int tp_hp;                                                              //trainer pokemon hp
        string username;
        string user_pokemon;
        int up_hp;                                                              //user pokemon hp
        
    public:
        Gym();                                                                  //constructors
        Gym(string, string, int, string, string ,int);
        string getTrainerName();
        void setTrainerName(string);
        string getTrainer_pokemon();
        void setTrainer_pokemon(string);
        int get_tp_hp();
        void set_tp_hp(int);
        string getUsername();
        void setUsername(string);
        string getUser_pokemon();
        void setUser_pokemon(string);
        int get_up_hp();
        void set_up_hp(int);
        
};

#endif
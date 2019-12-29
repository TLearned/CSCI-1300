#indef SMAPLE_H
#define SMAPLE_H

class Center
{
    private:
        array[] pokedex;                                                        //variables
        array[] party;
        
    public:
        Center();                                                               //constructors
        Center(array, array);
        string get_pokedex();
        void set_pokedex(array);
        string get_party;
        void set_party(array);
};

#endif
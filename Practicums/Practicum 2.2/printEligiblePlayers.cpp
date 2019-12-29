string printEligiblePlayers(string names[], double ages[], int idx)
{
    string name = "";
    double age = 0.0;
    int i = 0;
    
    while(i < idx)
    {
        name = names[i];
        age = ages[i];
        {
            if (ages[i] >= 4 && ages[i] <= 6)
            {
                cout << name << " " << age << endl;
            }
        }
        i++;
    }
}
class AwardWinners
{
    private:
    string name[];
    int year[];
    
    public:
    AwardWinners();
    AwardWinners(name[], year[]);
    int ReadFile(string filename);
    string getWinnerName(int winningYear);
    int getWinningYear(string winner);
};
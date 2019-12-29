class Song
{
    private:
    string title;
    string artist;
    int downloads;
    
    public:
    Song();
    Song(string, string, int);
    string getTilte();
    void setTitle(string);
    string getArtist();
    void setArtist(string);
    int getDownloads();
    void setDownloads(int);
    double grossRevenue(double);
};
Song::Song()
{
    title = "";
    artist = "";
    downloads = 0;
}

Song:: Song(string aTitle, string aArtist, int aDownloads)
{
    title = aTitle;
    artist = aArttist;
    downloads = aDownloads;
}

string Song :: getTitle()
{
    return title;
}

void Song :: setTitle(string t)
{
    title = t;
}

string Song :: getArtist()
{
    return artist;
}

void Song :: setArtist(string a)
{
    artist = a;
}

int Song :: getDownloads()
{
    return downloads;
}

void Song :: setDownloads(int d)
{
    downloads = d;
}

double Song :: grossRevenue()
{
    double revenue = int price * downloads;
    return revenue;
}
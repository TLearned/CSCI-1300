int calcPay(string fileName)
{
    int numwords = 0;
    string line = "";
    ifstream myfile;   
    myfile.open(fileName);
    if (myfile.is_open())
    {
        while(getline(myfile, line))
        {
            if(line.length() != 0)
            {
                string temp[3];
                split(line, ',', temp, 3);
                string name = temp[1];
                string hours = temp[2];
                string payRate = temp[3];
            }
        }
    }
    else
    {
        return -1;
    }
}
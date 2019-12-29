        AwardWinners :: AwardWinners()
        {
            string name[20];
            std::fill(name, name + 20, "");
            int year[20];
            std::fill(year, year + 20, 0);
        }
        
        AwardWinners :: AwardWinners(aname[20], ayear[20])
        {
            name[20] = aname[20];
            year[20] = ayear[20];
        }
        
        int AwardWinners :: ReadFile(string filename)
        {
            string tempString;
            
            ifstream file;
            file.open(filename);
            
            if(file.is_open())
            {
                while(getline(file, tempString))
                {
                    if(tempString.length() > 1)
                    {
                        while(inti = 0; i <= 20 ; i++)
                        string tempArray[2];
                        Split(tempString, '@', tempArray, 2);
                        name[i].setwinner(temp[0]);
                        year[i].setwinningYear(temp[1]);
                    }
                }
            }
            
            else
            {
                return -1;
            }
        }
        
        void AwardWinners :: setwinner()
        {
            winner = i;
        }
        
        void AwardWinners :: setwinningYear()
        {
            winningYear = 1
        }
        
        string AwardWinners :: getWinnerName(int winningYear);
        {
            return tempArray[0];
        }
        
        int AwardWinners :: getWinningYear(string winner)
        {
            return tempArray[1];
        }
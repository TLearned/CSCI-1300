string removeCapitals(string str) 
{ 
    int i = 0, j = 0;
    while(str[i]) 
    { 
        if (str[i] != 'A' || 'B' || 'C' || 'D' || 'E' || 'F' || 'G' || 'H' || 'I' || 'J' || 'K' || 'L' || 'M' || 'N' || 'O' || 'P' || 'Q' || 'R' || 'S' || 'T' || 'U' || 'V' || 'W' || 'X' || 'Y' || 'Z')
        {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = ' ';
    return str; 
} 
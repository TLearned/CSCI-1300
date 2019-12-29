// CPP program to replace c1 with c2 
// and c2 with c1 
#include <bits/stdc++.h> 
using namespace std; 
string replace(string s, char c1, char c2) 
{ 
    int l = s.length(); 
  
    // loop to traverse in the string 
    for (int i = 0; i < l; i++) { 
  
        // check for c1 and replace 
        if (s[i] == c1) 
            s[i] = c2; 
  
        // check for c2 and replace 
        else if (s[i] == c2) 
            s[i] = c1; 
    } 
    return s; 
} 
  
// Driver code to check the above function 
int main() 
{ 
    string s = "grrksfoegrrks"; 
    char c1 = 'e', c2 = 'r'; 
    cout << replace(s, c1, c2); 
    return 0; 
} 
#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int> vec1, vector<int> vec2)
{
    vector<int> vec3;                                                           //new vector
    
    if(vec1.empty() && vec2.empty())                                            //if both empty return
    {
        return vec3;
    }
    
    if(vec1.size() == vec2.size())                                              //if same just go through and add
    {
       for(int i = 0; i < vec1.size(); i++)
       {
           vec3.push_back(vec1[i]);
           vec3.push_back(vec2[i]);
       }
    }
    
    if(vec1.size() > vec2.size())                                               //if 1 is bigger than 2
    {
        for(int a = 0; a < vec2.size(); a++)                                    //put 1 and 2 in
        {
            vec3.push_back(vec1[a]);
            vec3.push_back(vec2[a]);
        }
        
        for(int a = vec2.size(); a < vec1.size(); a++)                          //finish up
        {
            vec3.push_back(vec1[a]);
        }
        
        return vec3;                                                            //return
    }
    
    if(vec1.size() < vec2.size())                                               //if 2 bigger than 1
    {
        for(int b = 0; b < vec1.size(); b++)                                    //put them in
        {
            vec3.push_back(vec2[b]);
            vec3.push_back(vec1[b]);
        }
        
        for(int b = vec1.size(); b < vec2.size(); b++)                          //finish up
        {
            vec3.push_back(vec2[b]);
        }
        
        return vec3;                                                            //return 
    }
}

int main()
{
    //Test Case 1
    vector<int> v1{1,3,5,9};
    vector<int> v2{2,4,6,8,10};
    vector<int> v3 = shuffle(v1,v2);
    for (int i=0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    
    //Test Case 2
    vector<int> v4{1,3};
    vector<int> v5{5,-7};
    vector<int> v6 = shuffle(v4,v5);
    for (int i=0; i < v6.size(); i++) 
    {
        cout << v6[i] << " ";
    }
}

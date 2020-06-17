//obtain power set of a string

#include <bits/stdc++.h>
using namespace std;

void power_set(string str)
{
    int counter = pow(2,str.length());
    for(int i=0;i<counter;i++)
    {
        cout<<"'";
        for(int j=0;j<str.length();j++)
        {
            if((i&(1<<j)) != 0) cout<<str[j];
        }
        cout<<"'"<<"\n";
    }
    
}

int main()
{
    string str = "ABC";
    power_set(str);
}
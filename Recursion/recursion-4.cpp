//power set of a string

#include <iostream>
using namespace std;

void power_set(string str, string current ="", int index = 0)
{
    if (index==str.length())
    {
        cout<<"'"<<current<<"'"<<" ";
        return;
    }
    power_set(str,current,index+1);
    power_set(str,current+str[index],index+1);
}

int main()
{
    power_set("ABC");
}
/*
possible words from phone digits. 
Print all possible words in lexicographically order from phone digits with a single space.
e.g. number : 234
     output : ADG ADH ADI AEG AEH AEI AFG AFH AFI BDG BDH BDI BEG BEH BEI BFG BFH BFI CDG CDH CDI CEG CEH CEI CFG CFH CFI

*/

#include <bits/stdc++.h>
using namespace std;

void possible_words_permute(vector<string>& result,int arr[],int n,string keypad[],string current,int index)
{
    if(index==n)
    {
        result.push_back(current);
        return;
    }
    string contains = keypad[arr[index]];
    for (int i = 0;i<contains.length();i++)
    {
        possible_words_permute(result,arr,n,keypad,current + contains[i],index+1);
    }
}

vector<string> possible_words(int arr[], int n)
{
    vector<string> result;
    string keypad []= {"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
    possible_words_permute(result,arr,n,keypad,"",0);
    sort(result.begin(),result.end());
    return result;
}

int main()
{
    int arr[] = {2,3,4};
    vector<string> a = possible_words(arr,3);
    for(string x: a) cout<<x<<" ";
    return 0;
}
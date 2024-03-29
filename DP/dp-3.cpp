//Longest Common Subsequence
#include <iostream>
#include <string.h>
using namespace std;

//top down approach
int memo[1000][1000];
int lcs1(string s1, string s2, int n, int m){
    if(memo[n][m]!=-1)
        return memo[n][m];
    if(n==0 || m==0)
        memo[n][m]=0;    
    else{
        if(s1[n-1]==s2[m-1])
            memo[n][m] = 1 + lcs1(s1,s2,n-1,m-1);
        else
            memo[n][m] = max(lcs1(s1,s2,n-1,m),lcs1(s1,s2,n,m-1));
    } 
    return memo[n][m];
}

//bottom up approach
int lcs2(string s1, string s2,int m, int n){
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++)
        dp[i][0]=0;
    for(int j=0;j<=n;j++)
        dp[0][j]=0;  
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(s1[i-1]==s2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[m][n];
}

int main() {
	string s1="AXYZ", s2="BAZ";
	int n = 4, m = 3;
	memset(memo,-1,sizeof(memo));
	cout<<lcs1(s1,s2,n,m);
}
#include<iostream>
using namespace std;
//Frog's staircase to Heaven
int staircase(int n)
{
    int dp[n+1];
    int i;
    dp[0]=1; //staircase of height 0
    dp[1]=1; //staircase of height 1
    
    for(i=2;i<=n;i++)
    dp[i]=dp[i-1]+dp[i-2];
    
    return dp[n];
}

int main()
{
    cout<<staircase(4)<<endl;
}
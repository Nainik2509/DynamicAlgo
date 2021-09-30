#include<iostream>
#include<string>
using namespace std;
int lcs(string s1,string s2)
{
    int dp[s1.length()+1][s2.length()+1];
    int i,j;
    for(i=0;i<=s1.length();i++)
    {
        for(j=0;j<=s2.length();j++)
        {
            //case 1: If both the strings are empty - empty string
            if (i==0 || j==0)
            dp[i][j]=0;
            
            //case 2: if there is a match
            else if(s1[i-1]==s2[j-1])
            dp[i][j]=dp[i-1][j-1]+1;
            
            //case 3: mismatch
            else
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            
        }
    }
    return dp[s1.length()][s2.length()];
}

int main()
{
    string s1="xyx";
    string s2="xxz"; //xx
    int result=lcs(s1,s2);
    cout<<result<<endl;
}

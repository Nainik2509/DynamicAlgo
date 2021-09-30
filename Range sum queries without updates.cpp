#include<iostream>
using namespace std;
int SOR(int arr[],int i,int j,int n)
{
    int dp[n];
    int k;
    //forming the sum array(dp)
    dp[0]=arr[0];
    for(k=1;k<n;k++)
    {
        dp[k]=arr[k]+dp[k-1];
    }
    
    //Fetch the value for a range from i to j
    if(i==0)
    return dp[j];
    
    else
    return dp[j]-dp[i-1]; //sor(0,j)-sor(0,i-1)
    
}

int main()
{
    int arr[]={10,14,5,-10,3};
    int n=5;
    cout<<SOR(arr,2,4,5)<<endl;
    cout<<SOR(arr,1,3,5)<<endl;
}
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int ways(int x,int k)
{
	vector<int> dp(x+1,0);
	dp[0]=1;
	for(int i=1;i<=k+1;i++)
	{
		for(int j=1;j<x+1;j++)
		{
			if(j>=i)
				dp[j] = dp[j] + dp[j-i];
		}
	}
	return dp[x];
}

int main() {
	int x,k;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>x;
		cin>>k;
		cout<<ways(x,k)<<endl;
		
	}
	return 0;
}

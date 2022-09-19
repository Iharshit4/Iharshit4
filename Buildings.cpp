#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int s;
	cin>>s;
	int n;
	
	double p;
	double ans;
	while(s!=0)
	{
		int count=1;
		cin>>n;
		cin>>p;
		double arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int maxi=arr[0];
		for(int i=1;i<n;i++)
		{
			if(arr[i]>(maxi+0.5))
			{
				maxi = arr[i];
				count++;
			}
		}
		cout<<fixed<<setprecision(2)<<count*p<<endl;
		s--;
	}
	return 0;
}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long singledigit(long long n)
{
	if(n/10==0)
		return n;
	long long sum=0;
	while(n!=0)
	{
		sum += n%10;
		n /= 10;
	}
	return singledigit(sum);
}


int main() {
	int n,q;
	cin>>n;
	cin>>q;
	long long x;
	vector<long long> arr;
	vector<long long> maxarr;
	vector<long long> minarr;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		long long s = singledigit(x);
		arr.push_back(s);
	}
	sort(arr.begin(),arr.end());

	maxarr.push_back(arr[n-1]);
	minarr.push_back(arr[0]);

	for(int i=1;i<n;i++)
	{
		minarr.push_back(arr[i]+minarr[i-1]);
		maxarr.push_back(arr[n-1-i]+maxarr[i-1]);
	}

	for(int i=0;i<q;i++)
	{
		int a,b;
		cin>>a;
		cin>>b;
		if(a==1)
			cout<<maxarr[b-1]<<endl;
		else
			cout<<minarr[b-1]<<endl;
	}
	
	return 0;
}

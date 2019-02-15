#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int N,arr[100000];
    int max;
	cin>>N;
	
	for(int i=0;i<N;++i)
	{
	cin>>arr[i];
	if(i==0)
	max=arr[i];
	else if(i>0)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	}
	cout<<max;

	
	
    return 0;
}


#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int N,A,D;
	cin>>N;
	cin>>A;
	cin>>D;
	int sum=(N*(2*A+D*(N-1)))/2;
	cout<<sum;
    return 0;
}


//#include <stdio.h>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int N;
    int arr[100001],i=0;
    cin>>N;
    for(int i=0;i<N;++i)
    {
        cin>>arr[i];
    }
    int min_value=*min_element(arr,arr+N);
    cout<<min_value;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int N,i=0;
    int pos,temp;
    int arr[100001];
    
    cin>>N;
    for(int i=0;i<N;++i)
    {
        cin>>arr[i];
    }
    

    for(int i=0;i<N-1;++i)
    {
        int min=arr[i];
        pos=i;
        for(int j=i+1;j<N;++j)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                pos=j;
            }
        }
        temp=arr[i];
        arr[i]=min;
        arr[pos]=temp;
         }
    for(int i=0;i<N;++i)
    cout<<arr[i]<<" ";
    
    return 0;
}


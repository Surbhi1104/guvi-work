
#include <iostream>
using namespace std;

int main() {
	   int n,k;
	   int sum=0;
	   int arr[100000];
	   scanf("%d %d",&n,&k);
	   
	   for(int i=0;i<n;++i)
	   scanf("%d",&arr[i]);
	   
	   for(int i=0;i<k;++i)
	   sum+=arr[i];
	   
	   printf("%d\n",sum);
	   
	   
	   	return 0;
}

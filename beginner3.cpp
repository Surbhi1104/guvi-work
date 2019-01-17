#include <iostream>
using namespace std;

int main() {
	
	int i,arr[3];
	int max;
	
	for(i=0;i<3;++i)
	scanf("%d",&arr[i]);
	
	max=arr[0];
	for(i=1;i<3;++i)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	printf("%d",max);
	return 0;
}

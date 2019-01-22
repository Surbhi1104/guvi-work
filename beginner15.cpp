#include <iostream>
#include<math.h>
using namespace std;

int main() {
	     
	    int a,b;
	    int flag=0;
		scanf("%d %d",&a,&b);
		for(int i=a+1;i<b;++i)
		{
			if(i%2==0)
			printf("%d ",i);
		}
		 
		return 0;
}

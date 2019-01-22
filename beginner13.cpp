#include <iostream>
#include<math.h>
using namespace std;

int main() {
	     
	    int N;
	    int flag=0;
		scanf("%d",&N);
		if(N<=1)
		printf("no\n");
		else if(N==2 || N==3)
		printf("yes\n");
		else
		{
			for(int i=5;i<N/2;++i)
			{
				if(N%i==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
			printf("no\n");
			else
			printf("yes\n");
		 } 
	     
		return 0;
}

#include <iostream>
using namespace std;

int isPrime(int N)
{
        if(N<=1)
		return 0;
		else if(N==2 || N==3)
		return 1;
		else
		{
			for(int i=2;i<N;++i)
			{
				if(N%i==0)
				{
					return 0;
				}
			}
		
}
return 1;
}


int main() {
	     
	    int n,k;
		scanf("%d %d",&n,&k);
		for(int i=n+1;i<k;++i)
		{
			if(isPrime(i)==1)
			printf("%d ",i);
		}
			
	     
		return 0;
}

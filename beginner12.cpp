
#include <iostream>

int main() {
	   int n,r;
	    scanf("%d",&n);
	   int n2=n;
	   int num=0;
	   int k=10;
	   while(n2!=0)
	   {
	   	r=n2%10;
	   	num=num*k+r;
	   	n2=n2/10;
	   }
	   if(num==n)
	   printf("yes\n");
	   else
	   printf("no\n");
	   
	   	return 0;
}

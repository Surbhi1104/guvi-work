
#include <iostream>
using namespace std;

int main() {
	   int n;
	   int c=0;
	   scanf("%d",&n);
	   
	   while(n!=0)
	   {
	   	n=n/10;
	   	++c;
	   }
	   printf("%d\n",c);
	   
	   	return 0;
}

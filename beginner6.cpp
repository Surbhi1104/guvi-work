
#include <iostream>
using namespace std;

int main() {
	   int y;
	   scanf("%d",&y);
	   if(y%400==0)
	   printf("Yes\n");
	   else if(y%100!=0 && y%4==0)
	   printf("Yes\n");
	   else
	   printf("No\n");
		return 0;
}

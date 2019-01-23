
#include <iostream>
using namespace std;

int main() {
	char ch;
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'|| ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	printf("Vowel\n");
	else if((ch>='b'||ch<='z')||(ch>='B'||ch<='Z'))
	printf("Consonant\n");
	else
	printf("invalid\n");
	return 0;
}

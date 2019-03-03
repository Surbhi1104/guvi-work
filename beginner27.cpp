#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	int i,flag=0;
    getline(cin,str);
	for(i=0;str[i]!='\0';++i)
	{
	if(isalpha(str[i]))
	{
		flag=1;
		cout<<"No"<<"\n";
		break;
	}	
	}	
	if(flag==0)
	cout<<"Yes\n";
}

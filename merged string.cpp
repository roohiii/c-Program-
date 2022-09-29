#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char str1[50],str2[50],str3[50];
	cout<<"Enter the first string:";
	cin>>str1;
	cout<<"Enter the second string:";
	cin>>str2;
	str3=str1+str2;
	cout<<"The merged string is:"<<str3<<endl;
}

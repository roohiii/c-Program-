#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Ente a value of a:";
	cin>>a;
	cout<<"Enter a value of b:";
	cin>>b;
	cout<<"\nBefore Swapping,Value of::\n\tA="<<a<<"\tB="<<b<<"\n";
}
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"\nAfter Swapping ,Value of::\n\tA="<<a<<"\tB="<<b<<"\n";
}

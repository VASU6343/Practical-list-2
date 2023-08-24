#include<iostream>
using namespace std;
int fun()
{
	int a;
	static int b;
	cout<<"220130318016"<<endl;
	cout<<"Vasu sapariya"<<endl;
	cout<<"Value of a is non static::"<<a++<<endl;
	cout<<"value of b is static:: "<<b++<<endl;
}
int main()
{	
	for(int i=0;i<5;i++)
	{
		fun();	
	}
	return 0;	
}

#include<iostream>
using namespace std;
int x = 5;     
int &test();
int main()
{
    cout<<"220130318016"<<endl;
	  cout<<"Vasu Sapariya"<<endl;
    test()=15;
    cout<<test();
    return 0;
}
int &test()
{
    return x;
}

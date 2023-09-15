#include<iostream>
using namespace std;
class area
{
	private:
		int l,b;
		double c;
		int no1;
		
	public:
    cout<<"220130318016";
    cout<<"Vasu sapariya";
		void area (int l,int b)
		{
			cout<<"the area is::"<<l*b<<endl;
		}
		void area (double c)
		{
			cout<<"Value of c is::"<<c<<endl;
		}
		void area (int no1)
		{
			cout<<"integer value is::"<<no1<<endl;
		}
};
int main()
{
	area a;
	a.area(2,3);
	a.area(4,5);
	a.area(20);
	return 0;
}

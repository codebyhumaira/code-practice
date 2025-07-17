#include<iostream>
using namespace std;
int main()
{
	float radius;
	const float pi=3.14159;
	cout<<"enter radius:"<<endl;
	cin>>radius;
	float area,circumference;
	circumference=2*pi*radius;
	area =pi*radius*radius;
	cout<<"circumference of circle:"<<circumference<<endl;
	cout<<"area of circle :"<<area<<endl;
	return 0;
	
}

#include<iostream>
using namespace std;
int main(){
char condition='y';
while(condition=='y')	
{
int num1;
int num2;
char operation;

cout<<"Enter num1: ";
cin>>num1;
cout<<"Enter num2: ";
cin >>num2;
cout<<"Enter operation(+,-,+,/,*,%):"<<endl;
cin>>operation;
if (operation  == '+')
{
 cout<<num1	 <<" + "<<num2<<" = "<<num1+num2<<endl;
}

else if (operation  == '-')
{
 cout<<num1	 <<" - "<<num2<<" = "<<num1-num2<<endl;
}

else if (operation  == '*')
{
 cout<<num1	 <<" * "<<num2<<" = "<<num1*num2<<endl;
}

else if (operation  == '%')
{
 cout<<num1	 <<" % "<<num2<<" = "<<num1%num2<<endl;
}
cout<<"do you want another operation(y/n)"<<endl;
cin>>condition;
else if (condition=='n')
{
	cout<<"thanks for using our service!"<<endl;
}
}
return 0;
}

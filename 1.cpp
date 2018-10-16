#include<iostream>
using namespace std;
int main()
{
	char o;
	float sub,nult,divd,add,a,b;
	cout<<"enter the the first number =";
	cin>>a;
		cout<<"enter the the second number =";
	cin>>b;
		cout<<"enter the the symbolls for + additin  -  subtraction  * for multipaication / for divion =";
		cin>>o;
		switch(o)
		{
			case'+':
				cout<<a<<"+"<<b<<"="<<a+b;
		       break;
			case'-':
				cout<<a<<"-"<<b<<"="<<a-b;
				break;
			case'*':
				cout<<a<<"*"<<b<<"="<<a*b;
				break;
			case'/':
				cout<<a<<"/"<<b<<"="<<a/b;
				break;
		}
}

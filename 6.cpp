#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	float a,b,c,d,root1,root2;
	cout<<"Enter value of  a : ";
	cin>>a;
		cout<<"Enter value of  b : ";
	cin>>b;

	cout<<"Enter value of  c : ";
	cin>>c;


	d=b*b-4*a*c;

	if(d==0)
	{
		root1=(-b)/(2*a);
		root2=root1;
		cout<<"Roots are real & equal";
  	}
	else if(d>0)
	{
		root1=-(b+sqrt(d))/(2*a);
		root2=-(b-sqrt(d))/(2*a);
		cout<<"Roots are real & distinct";
	}
	else
	{
		root1=(-b)/(2*a);
		root2=sqrt(-d)/(2*a);
		cout<<"Roots are imaginary";
	}

	cout<<"\nRoot 1= "<<root1<<"\nRoot 2= "<<root2;


	return 0;
}
 

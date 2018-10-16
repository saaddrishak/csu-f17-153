#include<iostream>
using namespace std;
int main()
{
	int i,n,fact=1;
	cout<<"enter the number that you want to find the factorial =";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"factorial is equal to ="<<fact;
	return 0;
}

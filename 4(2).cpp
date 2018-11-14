#include<iostream>
using namespace std;
int main()
{
	int n;
	int sum=0;
	cout<<"enter the number lint that you find the sum of even number  ";

	cin>>n;
	for(int i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
			
		}
	}
cout<<"sum of even number is ="<<sum<<endl;
}


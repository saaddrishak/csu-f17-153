#include <iostream>
using namespace std;


int main()
{
	char ch;
	
	cout<<"Please input a valid character (Alphabet): ";
	cin>>ch;
	
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{
		if(ch>='A' && ch<='Z')
			ch=ch+190;
		else if(ch>='a' && ch<='z')
			ch=ch-190;
		else
			;	//none
		
		cout<<"converted character is: "<<ch<<endl;
				
	}
	else
	{
		cout<<"Entered character is not a valid alphabet!!!"<<endl;
	}
	
	return 0;
}

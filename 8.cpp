#include<iostream>
using namespace std;

int main()
{
   int phy, chem, urdu, eng, math, sum, total = 500;
   float per;

   cout<<"Enter marks of physics :";
   cin>>phy;
    cout<<"Enter marks of chemistry :";
   cin>>chem;
    cout<<"Enter marks of urdu :";
   cin>>urdu;
    cout<<"Enter marks of english  :";
   cin>>eng;
    cout<<"Enter marks of math :";
   cin>>math;

   sum = phy + chem + urdu + eng + math;
   
   per = (sum * 100) / total;
   cout<<"sum of all the numbers :"<<sum<<endl;
   cout<<"Student Percentage Is : "<< per<<endl;

   return (0);
}


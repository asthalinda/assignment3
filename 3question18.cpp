#include<iostream>
using namespace std;
int main()
{
int cp,sp,profit;
cout<<"Enter cost price : ";
cin>>cp;
cout<<"Enter selling price : ";
cin>>sp;
profit=sp-cp;
if(profit>0)
cout<<"Profit : "<<profit;
else if(profit<0)
cout<<"Loss : "<<profit;
else
cout<<"No profit no loss";
return 0;
}

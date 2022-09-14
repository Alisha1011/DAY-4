#include<iostream>
using namespace std;
int main()
{
	int income,tax;
	cout<<" enter the income of the person :";
	cin>>income;
	if (income<=150000)
	  tax = 0;
	else if(income>=150001 && income<=300000)
	  tax = income*0.1;
	else if(income>=300001 && income<=500000)
	  tax = income*0.2;
	else
	  tax=income*0.3;
	cout<<" the income tax is :"<<tax<<endl;
	return 0;
}

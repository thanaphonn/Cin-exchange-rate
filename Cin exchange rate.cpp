#include<iostream>
using namespace std;
int main()
{
	float money,dollar,Euro;
	cout << "Input Thai Baths : ";
	cin >> money;
	dollar = money*0.033;
	Euro = money*0.029;
	cout << "****Exchange Rate****\n";
	cout << money <<" Baths is " << dollar <<" dollars\n";
	cout << money <<" Baths is " << Euro <<" Euro.\n";
	return(0);
}
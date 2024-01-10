#include<iostream>
using namespace std;

int main() {

	double gallons(0), liters(0);
	const double CONVERSION_L(3.78541);

	cout<<"Please, enter the amount in gallons: ";
	cin>>gallons;

	liters = gallons * CONVERSION_L;

	cout<<"The equivalent in liters is: "<<liters<<endl; 

	return 0;
}

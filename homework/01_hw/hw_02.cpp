#include<iostream>
using namespace std;

int main() {

	double sweetener(0), weight_m(0), weight_h(0);
	double mortal_amount(0);
	double final_mortal_amount(0);
	const double content(0.001);

	cout<<"Please enter amount of artificial sweetener needed to kill a mouse: ";
	cin>>sweetener;

	cout<<"Please enter weight of such mouse: ";
	cin>>weight_m;

	cout<<"Please enter the weight at which you will stop dieting: ";
	cin>>weight_h;

	mortal_amount = sweetener * (weight_h/weight_m);

	final_mortal_amount = mortal_amount / content;

	cout<<"It is possible to drink less than "<<final_mortal_amount<<" bottles of diet soda without dying as a result \n";


	return 0;
}

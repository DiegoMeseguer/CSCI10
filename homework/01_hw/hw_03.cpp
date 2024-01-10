#include<iostream>
using namespace std;

int main() {

	double kg(0), lb(0), MET(0), time(0), calories(0), total_calories(0);

	cout<<"Please, enter weight in pounds: ";
	cin>>lb;

	kg = 2.2 * lb;

	cout<<"Please, enter the number of METS for you activity: ";
	cin>>MET;

	cout<<"Please enter the number of minutes spend on your activity: ";
	cin>>time;

	calories = 0.0175 * MET * kg;
	total_calories = calories * time;

	cout<<"You burned a total of : "<<total_calories<<" calories"<<endl;

	return 0;
}

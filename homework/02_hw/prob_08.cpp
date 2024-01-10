#include <iostream>
using namespace std;

double convertToMPH(double kph) {

	double mph;

	mph = kph * 0.621371;

	return mph;
}

double convertToMPH(int p_min, int p_sec) {

	double mph, total_hours;

	total_hours = (p_min * 0.0166667) + (p_sec * 0.000277778);

	mph = 1.0 / (total_hours);

	return mph;
}

int main() {

	double kmph;
	int pace_min, pace_sec, opt;

	cout<<"Enter '1' if you want to calculate your speed in mph using a speed in kph or\n"
		<<"Enter '2' if you want to use a pace.\n";
	cin>>opt;

	if (opt == 1) {
		cout<<"Enter speed in kilometers per hour: ";
		cin>>kmph;
		cout<<"Your speed in miles per hour is "<<convertToMPH(kmph)<<endl;
	} else if (opt == 2) {
		cout<<"Enter your minutes and seconds per mile\n";
		cout<<"Minutes: ";
		cin>>pace_min;
		cout<<"Seconds: ";
		cin>>pace_sec;
		cout<<"Your speed in miles per hour is "<<convertToMPH(pace_min, pace_sec)<<endl;
	} else {
		cout<<"Error, invalid option.\n";
	}

	return 0;
}

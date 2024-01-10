#include <iostream>
#include <string>
using namespace std;

int get_24_time() {

	int result, minutes, hours;

	cout<<"Please enter the time in 24-hour notation, for example 17:58\n";
	cout<<"First enter the hour part, for example 17: ";
	cin>>hours;
	cout<<"Now enter the minute part, for example 58: ";
	cin>>minutes;

	result = (hours * 100) + minutes;

	return result;
}

string convert_time(int time24) {

	int minutes, hours;
	string ampm, result;

	hours = time24 / 100;
	minutes = time24 - ((time24 / 100) * 100);

	if (0 <= time24 && time24 <= 1159)
		ampm = "AM";
	else if (1200 <= time24 && time24 <= 2359)
		ampm = "PM";
	else
		cout<<"Error. Please try again\n";

	if (hours == 0)
		hours = 12;
	else if (13 <= hours && hours <= 23)
		hours = hours -12;

	result = to_string(hours) + ":" + to_string(minutes) + " " + ampm;

	return result;
}

void output_time(string time_ampm) {
	
	cout<<"The time in AM/PM format is: "<<time_ampm<<endl;
}

int main() {

	char ans('Y');

	while(ans != 'N' && ans != 'n') {

		output_time(convert_time(get_24_time()));

		cout<<"Type 'y' if you want to do another conversion, type 'n' to end program: ";
		cin>>ans;
	}

	return 0;
}

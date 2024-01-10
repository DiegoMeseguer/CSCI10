#include <iostream>
#include <string>
using namespace std;

bool isLeapYear(int year) {

	if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
		return true;
	else
		return false;
}

int getCenturyValue(int year) {
	
	int first_two_digits, cent_val;

	first_two_digits = year / 100;
	cent_val = (3 - (first_two_digits % 4)) * 2;

	return cent_val;
}

int getYearValue(int year) {

	int last_wo_digits, year_value;

	last_wo_digits = year - ((year / 100) * 100);
	year_value = (last_wo_digits / 4) + last_wo_digits;

	return year_value;
}

int getMonthValue(string month, int year) {

	int result;

	if(month == "January" || month == "january") {
		result = 0;
		if(isLeapYear(year) == true)
			result = 6;
	} else if (month == "February" || month == "february") {
		result = 3;
		if(isLeapYear(year) == true)
			result = 2;
	} else if (month == "March" || month == "march") {
		result = 3;
	} else if (month == "April" || month == "april") {
		result = 6;
	} else if (month == "May" || month == "may") {
		result = 1;
	} else if (month == "June" || month == "june") {
		result = 4;
	} else if (month == "July" || month == "july") {
		result = 6;
	} else if (month == "August" || month == "august") {
		result = 2;
	} else if (month == "September" || month == "september") {
		result = 5;
	} else if (month == "October" || month == "october") {
		result = 0;
	} else if (month == "November" || month == "november") {
		result = 3;
	} else if (month == "December" || month == "december") {
		result = 5;
	}

	return result;
}

string get_day(int day_num, int month_value, int year_value, int cent_value) {

	int final_sum;

	final_sum = ((day_num + month_value + year_value + cent_value) % 7);

	switch(final_sum) {
		case 0:
			return "Sunday";
		case 1:
			return "Monday";
		case 2:
			return "Tuesday";
		case 3:
			return "Wednesday";
		case 4:
			return "Thursday";
		case 5:
			return "Friday";
		case 6:
			return "Saturday";
		default:
			return "ERROR";
	}
}

int main() {

	string month, day_week;
	int year, day;

	cout<<"Please enter a date in the following format (July 4, 2008): "<<endl;
	cout<<"Enter month: ";
	cin>>month;
	cout<<"Enter day: ";
	cin>>day;
	cout<<"Enter year: ";
	cin>>year;

	day_week = get_day(day, getMonthValue(month, year), getYearValue(year), getCenturyValue(year));

	cout<<"The day of the week for that particular date is: "<<day_week<<endl;

	return 0;
}

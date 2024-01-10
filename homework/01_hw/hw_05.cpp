#include <iostream>
#include <string>
using namespace std;

int main() {

	string day;
	int day_num;

	while(true) {
		cout<<"Please, enter a day of the week: ";
		cin>>day;

		if (day == "Monday") {
			day_num = 1;
			break;
		} 
		else if (day == "Tuesday") {
			day_num = 2;
			break;
		}
		else if (day == "Wednesday") {
			day_num = 3;
			break;
		}
		else if (day == "Thursday") {
			day_num = 4;
			break;
		}
		else if (day == "Friday") {
			day_num = 5;
			break;			
		}
		else {
			cout<<"Please enter a valid day and capitalize your day."<<endl;
		}
	}

	switch(day_num) {
		case 1:
		cout<<"Monday:\n"
			<<"CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45"<<endl;

		case 2:
		cout<<"Tuesday:\n"
			<<"PHYS 2 at 12:10, CSCI 10 lab at 2:15"<<endl;

		case 3:
		cout<<"Wednesday:\n"
			<<"CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45"<<endl;

		case 4:
		cout<<"Thursday:\n"
			<<"PHYS 2 at 12:10"<<endl;

		case 5:
		cout<<"Friday:\n"
			<<"CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45"<<endl;

		break;
	}

	return 0;
}

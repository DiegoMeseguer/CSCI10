#include <iostream>
#include <cmath>
using namespace std;

bool validate_triangle(double lenght_1, double length_2, double length_3) {

	if(lenght_1 < (length_2 + length_3) && length_2 < (lenght_1 + length_3) && (length_3 < lenght_1 + length_2))
		return true;
	else
		return false;
}

void heron(double lenght_1, double length_2, double length_3, double& area, double& perim) {

	double semi_perim;

	perim = lenght_1 + length_2 + length_3;
	semi_perim = perim / 2.0;
	area = sqrt(semi_perim * (semi_perim - lenght_1) * (semi_perim - length_2) * (semi_perim - length_3));
}

int main() {

	double side_A, side_B, side_C;
	double area, perimeter;

	cout<<"Please enter the sides of a triangle: "<<endl;
	cout<<"Side A: ";
	cin>>side_A;
	cout<<"Side B: ";
	cin>>side_B;
	cout<<"Side C: ";
	cin>>side_C;

	if (validate_triangle(side_A, side_B, side_C)) {
		heron(side_A, side_B, side_C, area, perimeter);
		cout<<"The perimeter of your triangle is: "<<perimeter<<endl;
		cout<<"The area of your triangle is: "<<area<<endl;
	} else {
		cout<<"Invalid triangle, please try again with new inputs."<<endl;
	}

	return 0;
}

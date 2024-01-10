#include <iostream>
using namespace std;

const double G = 6.673 * (pow(10.0, -8.0));

double grav_force(double mass_1, double mass_2, double dist) {

	double force;
	force = (G * mass_1 * mass_2) / (pow(dist, 2.0));

	// Convert from Millinewtons to Dynes
	force = force * 100.0;

	return(force);
}

int main() {

	char ans('Y');
	double masa_1, masa_2, distance;
	double gravity_f;

	while(ans != 'n' && ans != 'N') {
		cout<<"Please enter two masses and the distance between them.\n";
		cout<<"Mass #1: ";
		cin>>masa_1;
		cout<<"Mass #2: ";
		cin>>masa_2;
		cout<<"Distance: ";
		cin>>distance;

		gravity_f = grav_force(masa_1, masa_2, distance);

		cout<<"The gravitational force is: "<<gravity_f<<" dynes.\n";
		cout<<"If you wish to do another calculation type 'y' otherwise "
			<<"type 'n'\n";
		cin>>ans;
	}

	return 0;
}

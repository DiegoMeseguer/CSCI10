#include <iostream>
#include <cmath>
using namespace std;


double wind_chill(double wind_sp, double temp) {
	
	double chill_dex(9999);

	if(temp <= 10)
		chill_dex = 33 - ((((10 * sqrt(wind_sp)) - wind_sp + 10.5) * (33 - temp)) / 23.1);
	else
		cout<<"Invalid temperature parameter, please try again."<<endl;

	return(chill_dex);
}


int main() {

	double speed, temperature;

	cout<<"Please enter the wind speed in m/s and the temperature in celsius.\n";
	cout<<"The temperature must be less than or equal to 10.\n";
	cout<<"Wind speed: ";
	cin>>speed;
	cout<<"Temperature: ";
	cin>>temperature;

	cout<<"The wind chill index is: "<<wind_chill(speed, temperature)<< " celsius.\n";

	return 0;
}

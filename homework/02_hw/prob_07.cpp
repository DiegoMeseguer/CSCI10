#include <iostream>
using namespace std;

void to_metric(double& feet, double& inches) {

	char ans('Y');

	while(ans != 'N' && ans != 'n') {

		cout<<"Please enter two lengths in feet and inches:\n";
		cout<<"Feet: ";
		cin>>feet;
		cout<<"inches: ";
		cin>>inches;

		feet = feet * 0.3048;
		inches = inches * 2.54;

		cout<<"Your lengths are: "<<feet<<" meters and "<<inches<<" centimeters.\n";
		cout<<"Do you want to do another conversion? Type 'y' for yes and 'n' for no: ";
		cin>>ans;
	}
}

void to_metric_kg(double& pounds, double& ounces) {

	char ans('Y');

	while(ans != 'N' && ans != 'n') {

		cout<<"Please enter two weights in pounds and ounces:\n";
		cout<<"Pounds: ";
		cin>>pounds;
		cout<<"Ounces: ";
		cin>>ounces;

		pounds = pounds * 0.453592;
		ounces = ounces * 28.3495;

		cout<<"Your weights are: "<<pounds<<" kilograms and "<<ounces<<" grams.\n";
		cout<<"Do you want to do another conversion? Type 'y' for yes and 'n' for no: ";
		cin>>ans;
	}
}

void to_imperial(double& meters, double& centimeters) {

	char ans('Y');

	while(ans != 'N' && ans != 'n') {

		cout<<"Please enter two lengths in meters and centimeters:\n";
		cout<<"Meters: ";
		cin>>meters;
		cout<<"Centimeters: ";
		cin>>centimeters;

		meters = meters * 3.28084;
		centimeters = centimeters * 0.393701;

		cout<<"Your lengths are: "<<meters<<" feet and "<<centimeters<<" inches.\n";
		cout<<"Do you want to do another conversion? Type 'y' for yes and 'n' for no: ";
		cin>>ans;
	}
}

void to_imperial_lb(double& kilograms, double& grams) {

	char ans('Y');

	while(ans != 'N' && ans != 'n') {

		cout<<"Please enter two weights in kilograms and grams:\n";
		cout<<"kilograms: ";
		cin>>kilograms;
		cout<<"Grams: ";
		cin>>grams;

		kilograms = kilograms * 2.20462;
		grams = grams * 0.035274;

		cout<<"Your weights are: "<<kilograms<<" pounds and "<<grams<<" ounces.\n";
		cout<<"Do you want to do another conversion? Type 'y' for yes and 'n' for no: ";
		cin>>ans;
	}
}

void combine_conv_length(double& length_1, double& length_2) {

	int opt;
	char ans('Y');

	while(ans != 'N' && ans != 'n') {

		cout<<"Enter '1' if you want to convert from ft and inch to m and cm or\n"
			<<"enter '2' if you want to convert from m and cm to ft and inch.\n";
		cin>>opt;

		if (opt == 1)
			to_metric(length_1, length_2);
		else if (opt == 2)
			to_imperial(length_1, length_2);
		else
			cout<<"Error, invalid option.\n";

		cout<<"Do you want to try a different conversion? Type 'y' for yes and 'n' for no: ";
		cin>>ans;
	}
}

void combine_conv_weight(double& weight_1, double& weight_2) {

	int opt;
	char ans('Y');

	while(ans != 'N' && ans != 'n') {

		cout<<"Enter '1' if you want to convert from kg and g to lb and oz or\n"
			<<"Enter '2' if you want to convert from lb and oz to kg and g.\n";
		cin>>opt;

		if (opt == 1)
			to_imperial_lb(weight_1, weight_2);
		else if (opt == 2)
			to_metric_kg(weight_1, weight_2);
		else
			cout<<"Error, invalid option.\n";

		cout<<"Do you want to try a different conversion? Type 'y' for yes and 'n' for no: ";
		cin>>ans;
	}
}

void combine_fund_quant(double& quant_1, double& quant_2) {

	int opt;
	char ans('N');

	while(ans != 'Y' && ans != 'y') {

		cout<<"Enter '1' if you want to do conversions between lengths.\n"
			<<"Enter '2' if you want to do conversions between masses.\n";
		cin>>opt;

		if (opt == 1)
			combine_conv_length(quant_1, quant_2);
		else if (opt == 2)
			combine_conv_weight(quant_1, quant_2);
		else
			cout<<"Error, invalid option.\n";

		cout<<"Do you want to exit the program? Type 'y' for yes and 'n' for no: ";
		cin>>ans;
	}
}

int main() {

	double qty_1, qty_2;

	combine_fund_quant(qty_1, qty_2);

	return 0;
}

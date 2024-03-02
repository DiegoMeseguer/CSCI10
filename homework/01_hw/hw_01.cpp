#include <iostream>
#include <string>

int main() {

	const double CONVERSION_GALLON_TO_LITERS{3.78541};
	double gallons{}, liters{};

	std::cout<<"Please enter the amount of gallons that you want to convert to liters: ";
	std::cin>>gallons;

	while(!std::cin) {
		std::cin.clear();					// Clear the error state
		// Sets the maximum number of characters to ignore. Since this is the upper limit on the size of a stream,
		// you are effectively telling cin that there is no limit to the number of characters to ignore.
		//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::string discard;
		std::getline(std::cin, discard);	// Read and discard the next line
		std::cout<<"Please enter a numeric value: ";
		std::cin>>gallons;
	}

	liters = gallons * CONVERSION_GALLON_TO_LITERS;
	
	std::cout<<"The equivalent in liters is: "<<liters<<std::endl;

	return 0;
}


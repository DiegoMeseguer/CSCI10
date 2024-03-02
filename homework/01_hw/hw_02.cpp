#include <iostream>

int main() {

	double sweetener{}, weightMouse{}, weightHuman{};
	double mortalAmount{};
	double finalMortalAmount{};
	constexpr double DEADLY_CONTENT{0.001};

	std::cout<<"Please enter amount of artificial sweetener needed to kill a mouse: ";
	std::cin>>sweetener;

	if(!std::cin) {
		std::cout<<"Error, invalid input. Please enter a numeric value"<<std::endl;
		return 0;
	}

	std::cout<<"Please enter weight of such mouse: ";
	std::cin>>weightMouse;

	if(!std::cin) {
		std::cout<<"Error, invalid input. Please enter a numeric value"<<std::endl;
		return 0;
	}

	std::cout<<"Please enter the weight at which you will stop dieting: ";
	std::cin>>weightHuman;

	if(!std::cin) {
		std::cout<<"Error, invalid input. Please enter a numeric value"<<std::endl;
		return 0;
	}

	mortalAmount = sweetener * (weightHuman / weightMouse);
	finalMortalAmount = mortalAmount / DEADLY_CONTENT;

	std::cout<<"It is possible to drink less than "<<finalMortalAmount<<" bottles of diet soda without dying as a result."<<std::endl;

	return 0;
}


#include <iostream>
#include <string>
using namespace std;

int main() {

	double score(0), total_score(0), final_score(0);
	int c(0), check(1);

	while(check) {
		cout<<"Enter score: ";
		cin>>score;
		if(score != -1) {
			if((score < 0) || (30 < score)) {
				cout<<"Please try again"<<endl;
			}
			else {
				total_score = score + total_score;
				c++;
			}
		}
		else {
			check = 0;
		}
	}

	final_score = total_score / c;

	cout<<"The average score is "<<final_score<<endl;


	return 0;
}

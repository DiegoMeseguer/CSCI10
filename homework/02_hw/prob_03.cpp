#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int humanTurn(int& humanTotalScore, int& hseed) {

	int roll(0), score(0);
	char ans;

	hseed = hseed + 5;
	srand(time(0) + hseed);

	cout<<"It's your turn, SCORE is "<<humanTotalScore<<endl;

	while(true) {
		
		roll = (rand() % 6) + 1;

		if(roll != 1) {
			cout<<"Your roll is --> "<<roll<<endl;
			score = roll + score;
		} else {
			cout<<"Your roll is --> "<<roll<<endl;
			score = 0;
			break;
		}

		cout<<"Do you want to roll again(r) or hold(h)? ";
		cin>>ans;

		if(ans == 'h' && (100 <= (humanTotalScore + score))) {
			cout<<"You win the game, your final SCORE is "<<humanTotalScore + score<<endl;
			break;
		}
		else if(ans == 'h' && ((humanTotalScore + score) < 100)) {
			break;
		}
	}

	humanTotalScore = humanTotalScore + score;
	cout<<"SCORE --> "<<humanTotalScore<<endl<<endl;

	return humanTotalScore;
}

int computerTurn(int& computerTotalScore, int& pseed) {

	int roll(0), score(0);

	pseed = pseed + 5;
	srand(time(0) + pseed);

	cout<<"PC's turn, SCORE is "<<computerTotalScore<<endl;

	while(score < 20) {

		roll = (rand() % 6) + 1;

		if(roll != 1) {
			cout<<"PC roll is --> "<<roll<<endl;
			score = roll + score;
		} else {
			cout<<"PC roll is --> "<<roll<<endl;
			score = 0;
			break;
		}

		if(100 <= (computerTotalScore + score)) {
			cout<<"PC WINS the game, her final SCORE is "<<computerTotalScore + score<<endl;
			break;
		}
	}

	computerTotalScore = computerTotalScore + score;
	cout<<"SCORE --> "<<computerTotalScore<<endl<<endl;

	return computerTotalScore;
}

int main() {

	int hu_score(0), pc_score(0), human_seed(99), pc_seed(199);

	cout<<endl;
	while(hu_score < 100 && pc_score < 100) {
		
		humanTurn(hu_score, human_seed);
		if(100 <= hu_score)
			break;

		computerTurn(pc_score, pc_seed);
		if(100 <= pc_score)
			break;
	}

	return 0;
}

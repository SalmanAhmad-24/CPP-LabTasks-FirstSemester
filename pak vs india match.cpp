

#include <iostream>
using namespace std;

int main()
{
	int score, pscore = 0, iscore = 0, spscore = 0, siscore = 0, balls = 1;
	while (balls <= 10) {
		cout << " enter the per ball score ";
		cin >> score;
		switch (score) {
		case 0:
			spscore = score + spscore;
			break;
		case 1:
			spscore = score + spscore;
			break;
		case 2:
			spscore = score + spscore;
			break;
		case 3:
			spscore = score + spscore;
			break;
		case 4:
			spscore = score + spscore;
			break;
		case 5:
			spscore = score + spscore;
			break;
		case 6:
			spscore = score + spscore;
			break;
		default:
			spscore = spscore + 0;

		}
		balls++;
	}cout << spscore;
	for (balls = 1; balls <= 10; balls++) {
		cout << "enter the indian score per ball";
		cin >> score;
		if (score >= 0 && score <= 6) {
			siscore = siscore + score;
		}
		else if (score < 0 || score>6) {
			siscore = siscore + 0;
		}

	}cout << siscore;
	if (spscore == siscore) {
		cout << " the match ended in a draw ";
	}
	else if (spscore > siscore) {
		cout << " pak won shaeen afridiiii";

	}
	else
		cout << "india won bumrahhh ";


    

}
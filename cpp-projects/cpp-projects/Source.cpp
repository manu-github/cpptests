//gussing challenge

#include<iostream>
#include<time.h>

using namespace std;

int main() {

	srand(time(0));
	int number = rand()%100;
	int guess = -1;
	int tryCount = 0;

	while (guess != number && tryCount < 8) {

		cout << "Please enter the guess: ";
		cin >> guess;
		if (guess < number) {
			cout << "Too low" << endl;

		}
		else if (guess > number) {
			cout << "Too high" << endl;

		}
		else {
			break;
		}
	}
	if(guess==number){
		cout << "You guessed the number"<<endl;
	}
	else{
		cout<<"Sorry,the number was : " << number<<endl;
	}


	system("pause");
	return 0;
}
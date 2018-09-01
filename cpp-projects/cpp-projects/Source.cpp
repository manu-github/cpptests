#include<iostream>
#include<string>

using namespace std;
//get the number in the desired format
void getNumber(int&);
//finding the factorial
int findFact(int);
int checkZero(int);

int main(int argc, char** argv) {
	int number;
	getNumber(number);
	int fact = findFact(number);
	cout << "number is " << fact << endl;
	cout<<"Number of tailering zeros :"<< checkZero(fact)<<endl;
	system("pause");
	return 0;
}

void getNumber(int& num) {
	string temp;
	while (1) {
		cout << "Enter a number in the format (x-!): ";
		cin >> num;
		getline(cin,temp);
		if (temp == "-!") {
			break;
		}
		else {
			cout << "Enter in the correct format"<<endl;
		}
	}
}

int findFact(int num) {
	int fact=num;
	if (num == 1) {
		return fact;
	}
	fact = fact * findFact(num-1);
	return fact; 

}
int checkZero(int temp) {
	int zeros=0;
	while(1) {		
		if (temp % 10==0) {
			temp = temp / 10;
			zeros++;
		}
		else {
			break;
		}
	}
	return zeros;
}
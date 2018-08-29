//Temperature Converter Challenge
#include<iostream>
#include<iomanip>

using namespace std;

const int MAX = 50000;
const int MIN = 0;
//function reads the inputs
void input(int&, int&, int&);
//function prints the inputs and other values
void cvtTable(int&, int&, int&);
//function convert the temperature
double convertTemp(double);

int main() {
	
	int start, end, step;
	//input the values
	input(start, end, step);
	cvtTable(start, end, step);
	system("pause");
	return 0;
}


void input(int& start, int& end, int& step){

	//get the start temperature
	cout << "Please give in a lower limit, limit >= 0:";
	cin >> start;
	while (start < MIN) {
		cout << "Your start reange is too less, Try again :";
		cin >> start;
	}

	//get the end temperature
	cout << "Please give in a higher limit, 10 > limit <= 50000 :";
	cin >> end;
	while (end > MAX) {
		cout << "Your start reange is too high, Try again :";
		cin >> end;
	}

	//get the stepsize
	cout << "Please give in a step, 0 < step <= 10: ";
	cin >> step;
	while (step > (end - start)) {
		cout << "Your step size too high, Try again :";
		cin >> step;
	}


}


void cvtTable(int& start, int& end, int& step) {

	cout.width(20);
	cout.setf(ios::left);
	cout << "Celsius";
	cout.width(20);
	cout.setf(ios::left);
	cout << "Fahrenheit"<<endl;
	cout.width(20);
	cout.setf(ios::left);
	cout << "----------";
	cout.width(20);
	cout.setf(ios::left);
	cout << "----------" << endl;

	for (double i = start; i < end; i = i + step) {	

		cout.width(20);
		cout.setf(ios::left);
		cout << fixed << setprecision(6) << i;
		cout.width(20);
		cout.setf(ios::left);
		cout << fixed << setprecision(6) << convertTemp(i)<<endl;
	}
}

double convertTemp(double temp) {
	return (temp * 9) / 5 + 32;	
}
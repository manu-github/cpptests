//calculator_edited with simplw functions

#include<iostream>

using namespace std;



int add(int, int);
int substract(int, int);
double divide(int, int);
int multiply(int, int);

int main() {

	char op = 'c';
	int x, y;
	while (1) {
		cout<<"What operation would you like to perform: add(+),substract(-),divide(/),multiply(*),[e]xit?"<<endl;
		cin >> op;
		
		switch (op) {			
			case '+':
				cin >> x >> y;
				cout << x << " + " << y << " " << " = " << add(x,y)<<endl;
				break;			
			case '-':
				cin >> x >> y;
				cout << x << " - " << y << " " << " = " << substract(x, y) << endl;
			case '*':
				
				cin >> x >> y;
				cout << x << " * " << y << " " << " = " << multiply(x, y) << endl;
				break;
			case '/':
				cin >> x >> y;
				cout << x << " / " << y << " " << " = " << divide(x, y) << endl;
				break;
			case 'e':
				return 0;
			default:				
				cout <<"Sorry,try again...!!!" << endl;
				break;
			}
	}

	system("pause");
	return 0;
}

int add(int x, int y) { return x + y; }
int substract(int x, int y) { return x - y; }
double divide(int x, int y) { return static_cast<double>(x) / y; }
int multiply(int x, int y) { return x * y; }

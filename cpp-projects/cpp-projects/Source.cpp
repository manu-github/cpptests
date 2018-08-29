//calculator

#include<iostream>

using namespace std;

int main() {

	char op = 'c';
	int x, y;
	while (op != 'e') {
		cout<<"What operation would you like to perform: add(+),substract(-),divide(/),multiply(*),[e]xit?"<<endl;
		cin >> op;
		cout << "Enter the numbers to be operated";
		switch (op) {
			case '+':
				cin >> x >> y;
				cout << x << " + " << y << " " << " = " << x + y<<endl;
			
			case '-':
				cin >> x >> y;
				cout << x << " - " << y << " " << " = " << x - y << endl;
			case '*':
				cin >> x >> y;
				cout << x << " * " << y << " " << " = " << x * y << endl;

			case '/':
				cin >> x >> y;
				cout << x << " / " << y << " " << " = " << static_cast<double>(x) / y << endl;
			
			case 'e':
				break;
			default:				
				cout <<"Sorry,try again...!!!" << endl;

		}
	}

	system("pause");
	return 0;
}
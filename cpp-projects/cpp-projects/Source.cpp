//Simple-array challenge

#include<iostream>
#include<string>

using namespace std;

int main() {

	int numbers[10];
	for (int i = 0; i < 8; i++) {
	
		cin >> numbers[i];
	}

	for (int i = 0; i < 8; i++) {

		cout << numbers[i] << " ";
	}


	system("pause");
	return 0;
}
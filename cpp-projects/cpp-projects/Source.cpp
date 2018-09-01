#include<iostream>
using namespace std;
int multiply(int, int[],int);

#define MAX 500
int main() {
	int num,size=1;

	int digits[MAX] = { 1 };
	cout << "Enter the number: ";
	cin >> num;
	
	//without recursion
	for (int i = 2; i <= num; i++) {
		size=multiply(i,digits,size);
	}

	cout << "Factoiral is :";
	for (int k = size - 1; k >= 0; k--) {
		cout << digits[k];
	}
	cout << endl;
	system("pause");
	return 0;
}

int multiply(int num, int temp[],int size) {

	int mul;
	int carry = 0;
	for (int j = 0; j < size; j++) {
		mul = num * temp[j] + carry;
		temp[j] = mul %10;
		carry = mul / 10;
	}
	while (carry) {
		temp[size] = carry % 10;
		carry = carry / 10;
		size++;
	}
	return size;
}


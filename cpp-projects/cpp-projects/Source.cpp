//conversion failed commmit
#include<iostream>
#include<string>
#include<vector>

using namespace std;

//formating the values less than thousand
string thousand(int);
//formatting the values greater than or equal to thousand
string findNum(int);


const string first[] = { "","one","two","three","four","five","six","seven","eight","nine","ten","elven","twelve","thirteen",
																	"fourteen","fifteen","sixteen","seventeen","eighteen","nineteen" };
const string second[] = { "","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty" };


int main(int argc,char** argv) {
	vector<int>numbers;
	int num;
	cout<<"enter the number : ";
	cin>> num;
	cout << findNum(num) <<endl;
	cout << argc<<endl;
	cout << argv[0]<<endl;
	//system("pause");
	return 0;
}
string findNum(int temp) {
	string outTemp1;
	int num1, num2;
	if (temp >= 1000000000) {
		num1 = temp / 1000000000;
		num2 = temp % 1000000000;
		outTemp1 = outTemp1 +thousand(num1) + " " + "billion ";
		outTemp1 = outTemp1 +findNum(num2);
	}
	else if (temp >= 1000000) {
		num1 = temp / 1000000;
		num2 = temp % 1000000;
		outTemp1 = outTemp1 +thousand(num1) + " " + "million ";
		outTemp1 = outTemp1 +findNum(num2);
	}
	else if (temp >= 1000) {
		num1 = temp / 1000;
		num2 = temp % 1000;
		outTemp1 = outTemp1 + thousand(num1) +" " + "thousand ";
		outTemp1 = outTemp1 + thousand(num2);
	}
	else {
		outTemp1 = thousand(temp);
	}	
	return outTemp1;
}


string thousand(int temp) {
	string outTemp2;
	if (temp >= 100&&temp>=20) {
		outTemp2 =first[temp / 100] + " " + "hundred ";
		temp = temp % 100;
	}
	if (temp < 20) {
		outTemp2 = outTemp2 +first[temp];
	}
	else {
		outTemp2 = outTemp2 + second[temp / 10] + " " + first[temp % 10];
	}
	return outTemp2;


}
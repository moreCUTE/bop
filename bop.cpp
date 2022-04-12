#include<iostream>
using namespace std;

float CircleArea(int x);

int main() {
	
	int i = 60;
	
	while (i > -25) {
		cout << i << " ";
		i -= 5;
		cout << endl;
	}
	
	int num;

	cout << "gib radius" << endl;
	cin >> num;
	cout << CircleArea(num) << endl;
	cout << endl;


	
		

}
float CircleArea(int x) {
	return (x * x * 3.1416);

}

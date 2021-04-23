#include <iostream>
using namespace std;

int sumSquares();
int squareSum();

int main() {

  cout << squareSum() - sumSquares();

	return 0;
}

int sumSquares(){

	int sum = 0;

	for (int i = 1; i <= 100; i++) {

		sum += i * i;
	}

	return sum;
}

int squareSum() {

	int sum = 0;

	for (int i = 1; i <= 100; i++) {

		sum += i;
	}

	return sum * sum;
}

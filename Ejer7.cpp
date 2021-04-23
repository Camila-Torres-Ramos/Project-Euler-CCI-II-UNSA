#include <iostream>
using namespace std;

int primos[10000] = {0}; 

bool esPrimo(int n);

int main() {

  int num = 1; 
	int i = 3; 

	while (num <= 10001) {

		if (esPrimo(i)) {

			num++;

			if (num==10001) {

				cout << i;

				return 0;
			}

		}

		i += 2; 
	}

	return 0;

}

 bool esPrimo(int n) {

	 int j = 0;

	 primos[0] = 2; 

	 while (n > primos[j] and n % primos[j] != 0) {

		 j++;

		 if (primos[j]==0) { 

			 primos[j] = n; 

			 return true; 
		 }

	 }

	 return false; 
}

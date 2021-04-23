#include<iostream>
using namespace std;

int main(){
  const unsigned MAX=4000000;

	unsigned sum=0;
	unsigned a=1;
	unsigned b=1;

	while(b<MAX){
		a+=b;
		b+=a;
		if((a%2==0)and(a<MAX))
			sum+=a;
		else if((b%2==0)and(b<MAX))
			sum+=b;
	}

	cout<<sum;
	return 0;
}

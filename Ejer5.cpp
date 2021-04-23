#include <iostream>
using namespace std;

int main(){
int multiploMenor=40;
int i=10;

while (i<20){
    if (multiploMenor%i==0){
        i++;
        continue;
    }
    else{
        i = 10;
        multiploMenor+= 20;
    }
    }
    cout <<multiploMenor;
}

#include <iostream>
#include <string.h>
using namespace std;


int sum(int x, int y){
    int sumOf = x+y;
    return sumOf;
}

float mul(int x, int y){
    int result = x*y;
    return result;
}

float divide(int x, int y){
    int result = x / y;
    return result;
}

void print(string t){
    cout << t << endl;
}

int main() 
{
    float multiplyTogether = mul(4,2);
    float divideTogether = divide(5.4,3);
    int addTheseTogether;
    addTheseTogether = sum(4,5);

    cout << "sum is " << addTheseTogether << endl;
    cout << "multiplication is " << multiplyTogether << endl;
    cout << "division is " << divideTogether << endl;
    print("function test test test");
	
    return 0;
}


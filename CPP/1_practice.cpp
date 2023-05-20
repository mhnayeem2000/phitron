#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int num1,num2;
cout << "Enter Two Number: ";
cin >> num1 >> num2;
int sum = num1 + num2;
int sub = num1 - num2;
int mul = num1 * num2;
double div = (float) num1 / num2;
cout << "sum = " << sum << endl << "Sub = " << sub << endl << "Mul = " << mul << endl << "Div = " << div << endl;
    return 0;
}
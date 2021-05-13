/* This program reads two integers from the user and prints their sum */

#include <iostream>
using namespace std;

int main() {
    int num1;   // will hold the first input
    int num2;   // will hold the second input
    int sum;    // will hold the sum

    cout<<"Please enter two numbers separated by a space:"<<endl;    // C Out and End L

    cin>>num1>>num2;    // C in, read num 1 and num 2

    sum = num1 + num2; // reassigning the value sum

    cout<<num1<<" + "<<num2<<" = "<<sum<<endl;

    return 0;
}

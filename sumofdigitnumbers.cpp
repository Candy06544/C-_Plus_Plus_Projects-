#include<iostream>
using namespace std;
int main(){
int number=0;
int sum =0;
cout <<"enter a number:" <<endl;
cin >> number;
int i=0;
while (number != 0) {
    sum += number % 10;  // Add the last digit to the sum
    number /= 10;         // Remove the last digit from the number
}

cout << "The sum of the digits in the number is" << sum<<endl;







}



if (/* condition */)
{
    /* code */
}

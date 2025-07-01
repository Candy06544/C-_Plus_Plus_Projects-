#include <iostream>
using namespace std;
int main (){
    int number;
    cout <<"Enter a number:"<<endl;
    cin>> number;
    if (number % 2 == 0)
    {
        /* code */ cout << number << " is even." << endl;
    }
    else 
    {
         cout << number << " is odd." << endl;
    };
    cout << endl;
    return 0;
    
}
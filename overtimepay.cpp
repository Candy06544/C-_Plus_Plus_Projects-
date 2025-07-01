#include<iostream>
using namespace std;
int main(){
    int hours;
    cout << "Enter number of working hours:" <<endl;
    cin>> hours;
    if (/* condition */ hours >40)
    {
        /* code */
        cout << "Get overtime pay:"<<endl;
    }
    else {
         cout << "Dont get overtime pay:"<<endl;

    }
    return 0;
    
}
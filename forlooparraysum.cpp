#include <iostream>
using namespace std;
int main(){
    int myArray[10]={5,10,15,20,25,30,35,40,45,50};
int sum = 0;
for (int i = 0; i <10; i++)
{
    sum += myArray[i];
}
cout << "The sum of all elements:" << sum <<endl;
return 0;


}
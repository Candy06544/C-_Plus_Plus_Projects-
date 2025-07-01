#include <iostream>
using namespace std;
int main (){
   int myArray[3]={20,40,99};
   int sum = 0;
   for (int i = 0; i < 3; i++)
   {
    /* code */
    sum += myArray[i];
   }
   double average =sum/3.0;
   cout << "The average of the element is:" << average << endl;
   return 0;
    




}
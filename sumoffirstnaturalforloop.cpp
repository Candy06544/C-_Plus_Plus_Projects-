#include <iostream>
int main(){
   int sum=0;
   for (int myNum=1; myNum<=10;myNum++) {
    sum+=myNum;
   }
   std::cout << "The sum of the first natural number is:" <<sum <<std::endl;
   return 0;

}
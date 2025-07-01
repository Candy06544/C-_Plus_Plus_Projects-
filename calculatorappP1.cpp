#include <iostream>
using namespace std;
int main(){
    float num1 ,num2,result;
    char operation;
    cin >> num1;
    cin >> num2;
    cin >>operation;


    if ( operation == '+')
    {
        result=num1+num1;
    }

    else if (operation == '-')
    {
       result= num1-num2;
    }
     
   else if (operation == '*'){
    result =num1*num2;
   }

   else if (operation== '/') 
   {
    if (num2 == 0){
        result= 0;
    }
    else {
        result = num1/num2; 
        }

   }
    
else{
  cout <<"invalid operation"<<endl;
  return 0;

}

cout << result <<endl;
return 0;

}
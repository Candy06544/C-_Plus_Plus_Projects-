#include  <iostream>
using namespace std ;

class Students {
   
   public:
   string  name;
   int age;

   void greetings() {
    
   }
};


int main (){
   Students student1;
    student1.name = "Joyce";
    student1.age =   19;

    cout << student1.name <<endl;
    cout << student1.age <<endl;

    student1.greetings();

    return 0;

}
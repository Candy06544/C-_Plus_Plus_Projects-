#include <iostream>
using namespace std;
class Student {
    public:
      string name;
      int  age;
      string grade;
      void greeting(){
        cout <<"Hi my name" << name << ", I am " << age << "years old and im in grade"  << grade <<endl;
      }
};
int main(){
    Student myStudent1,myStudent2,myStudent3,myStudent4,myStudent5;

    myStudent1.name="Angela";myStudent1.age=12;myStudent1.grade="7";
    myStudent2.name="Tom";myStudent2.age=15;myStudent2.grade="9";
    myStudent3.name="Kaka";myStudent3.age=10;myStudent3.grade="6";
    myStudent4.name="muthoni";myStudent4.age=16;myStudent4.grade="12";
    myStudent5.name="Angela";myStudent5.age=12;myStudent5.grade="7";

        
        myStudent1.greeting();
        myStudent2.greeting();
        myStudent3.greeting();
        myStudent4.greeting();
        myStudent5.greeting();

 return 0;
}
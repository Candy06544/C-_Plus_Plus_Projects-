#include <iostream>
using namespace std;
class student {
    public:
    string name;
    string grade;
    int age;
    void greetings(){


        cout << "My name is " << name << ", I am " << age << " years old, "
     << "and I'm in grade " << grade << "." << endl;

    }
    };
    int main(){
     student myStudent;
     myStudent.name="Angela";
     myStudent.age=12;
     myStudent.grade= "12";
     myStudent.greetings();




     
     return 0;

    }



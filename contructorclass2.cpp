#include <iostream>
using namespace std;

class Students {

    public:

    string name;
    int age ;

    Students( string n,int a)
    {
        name = n;
        age = a;
    }

    void info ()

    {
     cout <<" Students Data" <<endl;
     cout << name <<endl;
     cout << age <<endl;
     
    }
};

int main (){

Students student1 ( "Joyce", 19);
student1.info ();

return 0;
}

#include <iostream>
using namespace std;

class Employee
{
    
public:
    string name;
    string company;
    int age ;

    void introduction()
    {
        cout <<name <<endl;
         cout <<company <<endl;
          cout <<age<<endl;
    }
    

    Employee(string n,string c, int a)
{
    name= n;
    company =c;
    age = a;
        
};

}



int main()

{
Employee employee1= Employee("Joyce," "Amazon",20);
employee1.introduction();

return 0;
}



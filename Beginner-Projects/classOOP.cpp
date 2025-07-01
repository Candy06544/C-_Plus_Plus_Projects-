#include <iostream>
using std __cpp_raw_strings;


class Employee{

public:
    string Name;
    string Company;
    int Age;


    Employee(string name,string comapny,int age)
    {
        Name = name;
        Company= comapny;
        Age= age;
    }
    
    

};

int main()
{
Employee employee1 = Employee ("Joyce", "Amazon",20);
Employee employee2 = Employee ("Peter", "Amazon",40);  
}

#include <iostream>
using namespace std;
using std :: string;


class Employee {
  
  private:
  /* attributes of the class */
  string Name;
  string Company;
  int  Age;
   /* constructor */
   public:

// getter for Name
   void setName(string name)
   {
    Name = name;
   }

   string getName()
   {
    return Name;
   }

// getter for company
   void setCompany(string company)
   {
    Company = company;
   }

   string getCompany()
   {
    return Company;
   }

//getter and stter for age
   void setName(int age)
   {
    if(age >= 18)
    Age = age;
   }

   int getAge()
   {
    return Age;
   }   
   




   Employee( string name,string company,int age )
   {
    Name = name;
    Company = company;
    Age = age;
   }
    /* method to dispaly the attributes*/

    void employeedata()
    {
       
         cout <<"Name-"<< Name <<endl;
          cout << "Company-"<< Company<<endl;
           cout<<"Age -" << Age <<endl;
    }
};

int main()
 {
   /* Book objects*/
  Employee employee1= Employee( "Trevors ","Amazon",  10);
  Employee employee2( " Max","Google",  40);
  Employee employee3( " Magdalene","Tesla",  65);

 /* dispalying */
 employee1.employeedata();
 employee2.employeedata();
 employee3.employeedata();
 


return 0;

 }



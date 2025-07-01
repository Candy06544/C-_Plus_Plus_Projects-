#include <iostream>
using namespace std;

class Books {
  
  public:
  /* attributes of the class */
  string title;
  string author;
  double price;
   /* constructor */

   Books( string t,string a,double p)
   {
    title = t;
    author = a;
    price = p;
   }
    /* method to dispaly the attributes*/

    void booksdata()
    {
        cout <<"Book Details"<<endl;
         cout << title <<endl;
          cout << author<<endl;
           cout << price <<endl;
    }
};

int main()
 {
   /* Book objects*/
  Books book1( "Trevors Madness","Trevor Mwangi",  1500);
  Books book2( " Mad max","Trevor Mwangi",  4000);
  Books book3( " Madness","Trevor Mwangi",  6500);

 /* dispalying */
book1.booksdata();
book2.booksdata();
book3.booksdata();

return 0;

 }



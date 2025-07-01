#include<iostream>
using namespace std;
int main (){
  int myScore[5]={10,20,30,40,50};

  int searchElement,index =-1;
  cout <<"Enter the number to search: ";
  cin >> searchElement;

  for (int  i = 0; i < 5; i++)
  {
    if (myScore[i]==searchElement)
    {
        /* code */
        index=i;
        break;
    }
    
  }
if (index!=-1)
{
    /* code */
    cout <<"Element found at index:" << index;
}
else {
    cout <<"Element not found in the array";
}
return 0;

}
#include<iostream>
using namespace std;
int main(){ 
int Hours;
 float Wage;
 float weeklyEarnings;

cout <<"Enter the number of working hours for this week:"<<endl;
cin>>Hours;
cout <<"Enter the amount of hourly wage:"<<endl;
cin>>Wage;

weeklyEarnings=Hours*Wage;
if (weeklyEarnings > 5000)
{
    /* code */
    cout<<"Congratulations you get a bonus:"<<endl;
}
else{
     cout<<"You dont get a bonus ,workhard next time:"<<endl;
     
}
return 0;
}

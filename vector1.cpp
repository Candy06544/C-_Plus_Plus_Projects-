#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
    vector<int>myScores ={
        10,20,30,40,50 }; 

        myScores.at (0)=5;

        sort  (  myScores.begin(),myScores.end()  );

        for ( int myScore:myScores)
        {
            /* code */
            cout << myScore << "\n";
        }
        
    
        return 0;
}
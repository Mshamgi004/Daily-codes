// To find cube of number suing inline function//

#include<iostream>
using namespace std;

inline int cube(int s)
{
    cout<< "Inside the fuction" << endl;
    int i = 10;
    i++;
    cout<<i;
    
    return 5*5*5;
}
int main()
{
    cout<< "Cube of 5 is :" << cube(5) <<endl;
    
return 0;
}        
    

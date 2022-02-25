// Implementation of Type Conversion  Paramaeterized Const//
// Convert basic number to time type //
// Time t1 = 120; ---> t1.hour = 2, t1.min = 0; //

#include<iostream>
using namespace std;

class Time
{
    int hour, min;
    
    public:
       
       Time()   // default constructor
       {
                cout<< "default const\n";
                hour = 0;
                min =  0;
       }
       
       Time(int x) // param constructor
       {
          cout << "Param const\n";
          hour = x / 60;
          min  = x % 60;
       }
       
//       void operator = (int x)
//       {
//          cout<< "overload operator '=' \n";
//          hour = x / 60;
//          min  = x % 60;
//       }
                 
       void display()
       {
          cout<< " Time is : " << hour << "hr and " << min << " min" <<  endl;
       }   

};


int main()
{
       int j = 55;
       Time t1 = j;
//       t1 = j;
       t1.display();
   
       return 0;
}                     
                    
          

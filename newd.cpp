// Overloading of 'new and 'delete' operators //

#include<iostream>
using namespace std;

class location 
{
    int lon, lat;
    
    public:
    
    location() 
    {
         cout<< "Inside the default const\n";
         lon = 0;
         lat = 0;
    }
    
    location(int x, int y)
    {
         cout<< "Inside the param const\n";
         lon = 0;
         lat = 0;
    }
    
    void display() 
    {
         cout<< "THe location is= long: " << lon << " Lat: " << lat << endl;
    } 
    
    void * operator new(size_t size)
    {
         cout<< "Inside the overloading new\n";
         void *ptr;
         ptr = malloc(size);
         if(ptr==NULL)
              cout<< " No memory allocated\n";
         return ptr;
    }
    
    void operator delete(void *ptr)
    {
         cout<< "Inside the overloade delete\n";
         free(ptr);
    }               

};

class demo
{
    int j=22;
    public: demo() 
    { 
       cout << "\ninside the default\n" ;
    }

};

int main()
{
    location loc1,loc2(20,20);
    loc1.display();
    loc2.display();
    
    location *loc = new location;
    loc->display();
    delete loc; 
    
    int *pt = new int;
    *pt = 100;
    cout << "------------------------------------";
    
    demo *d1 = new demo;
    delete d1;   
    return 0;
}                  

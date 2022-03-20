// CPP FILE I/O OPERATIONS //
// Q.1 //
// MAHADEV G I //




#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    ifstream fin("Q1.txt");
    
    int count = 0;
    char ch[20];
    char c[20];
    
    cout<<"Enter a word to count:";
    cin>>c;
    
    while(fin)
    {
       fin>>ch;
       if(strcmp(ch,c)==0)
       count++;
    }
    cout<<"Occurance="<<count<<"n";
    fin.close();
    
    return 0;
    
}      

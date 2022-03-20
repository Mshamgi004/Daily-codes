// CPP FILE I/O OPERATIONS //
// Q.2 //
// MAHADEV G I //


#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	fstream f;
	int count=0, i=0;
	string str;

	f.open("Q2.txt", ios::in|ios::out);
	
	f.seekg(0);

	while(f >> str)
	{

		for(i=0; i<str.length(); i++)
		{
			if(str[i] == 'a')
			{
				count++;
				break;
			}
			else
			{
				continue;
			}
		}


	}

	cout << "Number of words that has 'a' in them are: " << count << endl;

	return 0;
}

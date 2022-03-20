// CPP FILES I/O OPERATIONS //
// Q.4 //
// MAHADEV G I //






#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream input;
	string str;
	int count=0;

	input.open("Q4.txt", ios::in|ios::out);

	input << "count words end with s, elephants has big ears, learning is always easy" << endl;
	input << "learning satisfies us, continuous studies always helps us" << endl;

	input.seekg(0);

	while(input >> str)
	{

		int l = str.length() - 1;


		if(str[l] == 's')
		{

			count++;
		}
		else if(str[l] == ',')
		{
			if(str[l-1] == 's')
			{

				count++;
			}
			else
				continue;
		}
		else
			continue;
	}

	cout << "the number of words that ends with 's' are: " << count << endl;

	return 0;
}

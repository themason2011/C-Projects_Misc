#include <iostream>
#include <cstdlib>

using namespace std;

char* parse(string str, int size)
{
	char* arr = new char[size];
    for(int i=0; i<size; i++)	{
    	arr[i] = str.at(i);
    }
    return arr;
}

int main()	{
	string str;
	cout << "Please enter a string and I'll parse it for you. Please press enter when finished:" << endl;
	getline(cin,str);
	int size = str.length();
	char* arr = parse(str, size);
	for(int i=0; i<size; i++)	{
		cout << arr[i] << endl;
	}
	delete arr;
	return 0;
}
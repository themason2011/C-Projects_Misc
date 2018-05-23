//pi.cpp
//Mason Corey

#include <iostream>
#include <math.h>

using namespace std;

int main()      {

	int n;
	double pi;
	int i;
	int num_terms;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);

	while(n!=-1)    {
		cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" << endl;
		cin >> n;
		pi = 0;

	for(i = 0; i<=n; i++)    {
		pi += ((pow(-1,i))/(2*i+1));
	}

	pi *= 4;
	num_terms = n + 1;

	if(n!=-1)       {
        if(n==0)        {
			cout << "The approximate value of pi using 1 term is: " << pi << endl;
		}
        else    {
			cout << "The approximate value of pi using " << num_terms << " terms is: " << pi << endl;
		}
	}

	}
}
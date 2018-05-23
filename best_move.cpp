#include <iostream>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

int int main()	{
	
	string cont = "N";
	do  {
		int avg_Thun = 0;
		int avg_Bal = 0;
		for(int i=0; i<50; i++)	{
			int Enemy_HP_Thun = 600;
			int Enemy_HP_Bal = 600;
			int num_Thun = 0;
			int num_Bal = 0;

			while(Enemy_HP_Thun>0)	{
				int rand_Chance = rand() % 100 + 1;
				if(rand_Chance<=70)	{
					Enemy_HP_Thun -= 345;
				}
			avg_Thun++;	
			num_Thun++;
			}

			while(Enemy_HP_Bal>0)	{
				int rand_Chance = rand() % 100 + 1;
				if(rand_Chance<=85)	{
					Enemy_HP_Bal -= 245;
				}
			avg_Bal++;
			num_Bal++;
			}
		}
		avg_Thun /= 50;
		avg_Bal /= 50;

	cout << "Number of times to defeat enemy with Thunder on average: " << avg_Thun << endl;
	cout << "Number of times to defeat enemy with Balance on average: " << avg_Bal << endl;
	cout << "Repeat Experiment? (Y/y or N/n) and hit enter afterwards" << endl;
	cin >> cont;

	} while(cont=="Y" || cont=="y");
}
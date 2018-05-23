// array::size
#include <iostream>
#include <array>
#include <cstdlib>

using namespace std;

int main ()
{
  array<int,5> myints  = {15, 30, 7, 4, 9};
  int num_Elements = myints.size();
  int smallest = myints[0];
  
  for (int i=1; i<num_Elements-1; i++)	{
  	if(myints[i]<smallest)	{
  		smallest = myints[i];
  	}
  }
  
  cout << smallest;
  return 0;
}
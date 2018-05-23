#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){

    int a , sumPositive, sumNegative;

    string promptContinue ="\nTo continue enter Y/y\n";

    string promptNum = "\nEnter a number: ";

    char response;

    while (response = 'y'||'Y') {
       cout << promptNum;
       cin >> a;

       if(a)
          sumPositive+=a;
       else
          sumNegative+=a;

       cout<< promptContinue;
       cout<< sumPositive<< endl;
       cout<< sumNegative<< endl;

    }

    cout<< "Sum of all the positive numbers is: "<< sumPositive<<endl;

    cout<< "Sum of all the negative numbers is: "<< sumNegative<<endl;

    return 0;
}
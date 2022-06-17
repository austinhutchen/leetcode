#include <iostream>
#include "sqrt.h"
#include <ctime>
using namespace std;
long long now=clock();



// implement checker for very large numbers in algorithm
int main(){
Solution ans= Solution();
float input;
cout << "Enter your number for the calculation of its nearest square root." << endl;
cin >> input;
while(cin.fail()){
 cout << "Error. Please enter a number below." << endl;
 cin >> input;
}
cout << "Your root is -> " << ans.mySqrt(input) << endl;
long long end=clock();
cout << "Time taken to check: " << end-now << " seconds" << endl;


}
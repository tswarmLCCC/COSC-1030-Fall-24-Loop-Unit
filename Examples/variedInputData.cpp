/*
Statistics are often calculated with varying amounts of input data. Write a program that takes any number of 
non-negative integers as input, and outputs the max and average. A negative integer ends the input and is not 
included in the statistics. Assume the input contains at least one non-negative integer.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
 cout << fixed << setprecision(2); once before all other cout statements.

Ex: When the input is:

15 20 0 3 -1
the output is:

20 9.50
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int userInt;
   int sumInts;
   int numInts;
   int maxInt;
   double average;
      
   sumInts = 0;
   numInts = 0;
   maxInt  = -1;

   cin >> userInt;

   while (userInt >= 0) {
      sumInts = sumInts + userInt;
      numInts = numInts + 1;

      if (userInt > maxInt) {
         maxInt = userInt;
      }
      cin >> userInt;
   }
   
   average = static_cast<double>(sumInts) / numInts;
   
   cout << fixed << setprecision(2);
   cout << maxInt;
   cout << " " << average << endl;

   return 0;
}

/*
Write a program whose input is two integers, and whose output is the first integer and subsequent increments of 5 as long as the value is less than or equal to the second integer.

Ex: If the input is:

-15 10
the output is:

-15 -10 -5 0 5 10
Ex: If the second integer is less than the first as in:

20 5
the output is:

Second integer can't be less than the first.
For coding simplicity, output a space after every integer, including the last. End the output with a newline.

Modify this so that it instead shows each 3rd number in the range
*/

#include <iostream>
using namespace std;

int main() {
   int num1;
   int num2;
   int i;
   
   cin >> num1;
   cin >> num2;
   
   if (num2 < num1) {
      cout << "Second integer can't be less than the first." << endl;
   }
   else {
      for (i = num1; i <= num2; i = i + 5) {
         cout << i << " ";
      }
      cout << endl;
   }
   
   return 0;
}

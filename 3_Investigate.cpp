/*
This is a program that removes all non alpha characters from the given input.

Ex: If the input is:

-Hello, 1 world$!
the output is:

Helloworld

How does this work?  What is i doing here?  How big does i get and where does it increase at in this program?
What are the inputs to the for loop?  
*/

#include <iostream>
#include <istream>
using namespace std;

int main() {
   unsigned int i;
   string userInput;
   string userInputNoSpaces;
   
   getline(cin, userInput);
   
   for (i = 0; i < userInput.length(); ++i) {
      if ( isalpha(userInput.at(i)) ){
         userInputNoSpaces += userInput.at(i);
      }
   }
   
   cout << userInputNoSpaces << endl;

   return 0;
}
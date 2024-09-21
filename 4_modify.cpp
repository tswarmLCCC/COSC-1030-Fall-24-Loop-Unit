/*
Write a program that reads a loan amount, payment amount, and interest rate as inputs and outputs the number of payments 
required until the loan is paid. Interest is added to current balance before a payment is applied. Ex: If current balance
 is $100.00 and the interest rate is 0.02, the new balance is $102.00 before a payment is applied. All values are doubles.

Ex: If the input is:

1000.0 50.0 0.03
the output is:

31 payments
Ex: If the input is:

50.0 100.0 0.02
the output is:

1 payment
*/

/*
Add output statements inside the loop to show the progress of the iteration - ie - what is the balance each time,
 how much did it go down?
*/

#include <iostream>
using namespace std;

int main() {
   double balance;
   double payment;
   double rate;
   int numPayments = 0;
   
   cin >> balance;
   cin >> payment;
   cin >> rate;
   
   while (balance > 0) {
      cout << balance << endl;
      balance = balance * (rate + 1.0);
      balance = balance - payment;
      ++numPayments;
   }
   
   if (numPayments == 1) {
      cout << numPayments << " payment" << endl;
   }
   else {
      cout << numPayments << " payments" << endl;
   }

   return 0;
}
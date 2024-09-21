/*
Program Specifications Write a program to play an automated game of Rock, Paper, Scissors. Two players make one of three
 hand signals at the same time. Hand signals represent a rock, a piece of paper, or a pair of scissors. Each combination
  results in a win for one of the players. Rock crushes scissors, paper covers rock, and scissors cut paper. A tie occurs
   if both players make the same signal. Use a random number generator of 0, 1, or 2 to represent the three signals.

Note: this program is designed for incremental development. Complete each step and submit for grading before starting 
the next step. Only a portion of tests pass after each step but confirm progress.

Step 0. Read starter template and do not change the provided code. Integer constants are defined for ROCK,
 PAPER, and SCISSORS. A Random object is created and a seed is read from input and passed to the Random object. 
 This supports automated testing and creates predictable results that would otherwise be random.

Step 1 (2 pts). Read two player names from input (string). Read number of rounds from input. Continue
 reading number of rounds if value is below one and provide an error message. Output player names and number of rounds. 
 Submit for grading to confirm 2 tests pass.
Ex: If input is:

3 Anna Bert -3 -4 4
Sample output is:

Rounds must be > 0
Rounds must be > 0
Anna vs Bert for 4 rounds

Step 2 (2 pts). Generate random values (0 - 2) for player 1 followed by player 2 by calling rand() % 3. 
Continue to generate random values for both players until both values do not match. Output "Tie" when the
 values match. Submit for grading to confirm 3 tests pass.
Ex: If input is:

10 Anna Bert 1
Sample output is:

Anna vs Bert for 1 rounds
Tie
Tie

Step 3 (3 pts). Identify winner for this round and output a message. Rock crushes scissors, scissors
 cut paper, and paper covers rock. Submit for grading to confirm 6 tests pass.
Ex: If input is:

39 Anna Bert 1
Sample output is:

Anna vs Bert for 1 rounds
Tie
Tie
Bert wins with scissors

Step 4 (3 pts). Add a loop to repeat steps 2 and 3 for the number of rounds. Output total wins for 
each player after all rounds are complete. Submit for grading to confirm all tests pass.
Ex: If input is:

82 Anna Bert 3
Sample output is:

Anna vs Bert for 3 rounds
Anna wins with paper
Tie
Anna wins with rock
Anna wins with paper
Anna wins 3 and Bert wins 0
*/

#include <iostream>
using namespace std;

int main() {
   const int ROCK = 0;
   const int PAPER = 1;
   const int SCISSORS = 2;
   int seed;

   cin >> seed;
   srand(seed);

   // Step #1
   int rounds;
   string player1name;
   string player2name;
   cin >> player1name;
   cin >> player2name;

   do {
      cin >> rounds;
      if(rounds < 0) {
         cout << "Rounds must be > 0" << endl;
      }
   } while (rounds < 0);
   cout << player1name << " vs " << player2name << " for " << rounds << " rounds" << endl;

   int player1Value;
   int player2Value;
   int player1Wins;
   int player2Wins;
   player1Value = 0;
   player2Value = 0;
   player1Wins = 0;
   player2Wins = 0;

    //a very common and useful loop to know about !
   for (int i=0; i < rounds; ++i) {

      // Step #2
      do {
         player1Value = rand() % 3;
         player2Value = rand() % 3;
         if (player1Value == player2Value) {
            cout << "Tie" << endl;
         }
      } while (player1Value == player2Value);

      // Step #3
      // Did player 1 win?
      if (player1Value == ROCK && player2Value == SCISSORS) {
         cout << player1name + " wins with rock" << endl;
         ++player1Wins;
      }
      else if (player1Value == PAPER && player2Value == ROCK) {
         cout << player1name + " wins with paper" << endl;
         ++player1Wins;
      }
      else if (player1Value == SCISSORS && player2Value == PAPER) {
         cout << player1name + " wins with scissors" << endl;
         ++player1Wins;
      }

      // Did player 2 win?
      if (player2Value == ROCK && player1Value == SCISSORS) {
         cout << player2name + " wins with rock" << endl;
         ++player2Wins;
      }
      else if (player2Value == PAPER && player1Value == ROCK) {
         cout << player2name + " wins with paper" << endl;
         ++player2Wins;
      }
      else if (player2Value == SCISSORS && player1Value == PAPER) {
         cout << player2name + " wins with scissors" << endl;
         ++player2Wins;
      }
   }
   cout << player1name << " wins " << player1Wins << " and " << player2name << " wins " << player2Wins << endl;
   
   return 0;
}

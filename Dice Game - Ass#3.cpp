#include <iostream>
#include <time.h>
#include <cstdlib>
#include <string>
using namespace std;

/* Dice game program where it takes the user name,
simulates the computer roll of dice through
the use of random numbers,
displays the sum of the two dice rolls to the user
and asks the user for a bet.
After taking the bet,
it rolls the players dice and compares the value
to the computers alue to determine if it
was a win or loss. The game ends once
the user's total money drops below $1 or
goes over $100. Player either wins or loses) */

int main(){
// variable declarations
string username;
int player_money = 50;
int dice1, dice2; // dealers dice
int dice3, dice4; // players dice
bool starter = true; // starts and ends the while loop
int results1, results2; // computers dice sum and player dice sum
srand(time(0)); // random seed generator
int user_bet; // bet value

// gets player name
cout << "What's your name? ";
cin >> username;

// while loop is used to keep the program running until
// conditions are met (player money over 100 or less
// than one)
while(starter) {
    cout << "Currently, you have: $" << player_money << endl;
    dice1 = rand() % 6 + 1; // generates radom number b/w 1 to 6
    dice2 = rand() & 6 + 1;
    // computers dice roll sum
    results1 = dice1 + dice2;
    cout << "Computer rolled: " << results1 << endl;
    while(true) { // loop to check for positive bet value {
        cout << "What is your bet? ";
        cin >> user_bet;
        if (user_bet > 0) // exit out of loop
            break;
        cout << "Please enter a positive number." << endl;

    }
    // players dice roll sum
    dice1 = rand() % 6 + 1;
    dice2 = rand() & 6 + 1;
    results2 = dice1 + dice2;
    cout << "Player rolled: " << results2 << endl;
    // comparisons to see who won this round.
    // Also updates player money accordingly
    if(results1 > results2) {
        player_money = player_money - user_bet;
        cout << "Sorry you lost $" << user_bet << endl;
    } else if(results1 < results2) {
        player_money = player_money + user_bet;
        cout << "Congrats! You won $" << user_bet << endl;
    } else {
        cout << "Nobody won" << endl;
    }
    if (player_money < 1 || player_money > 100) {
        starter = false;
        break;
        }
}
// prints out whether or not user lost/won the game
if (player_money > 100) {
    cout << "You win the game, " << username;
} else{
    cout << "You lose the game, " << username;
}
return 0;
}

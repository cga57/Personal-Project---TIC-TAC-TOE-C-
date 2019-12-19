#include <iostream>

using namespace std;
//  update the display with player 2's turn upcoming
void update1();
//will update the display with player 2's turn upcoming
void update2();
// checks to see if anyone won the game yet or not
void winner_check();
// global variables
const int rows = 3;
const int columns = 3;
char board[rows][columns] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}}; // initalizes board
int choice1; // player 1 choice
int choice2; // player two choice
bool winner = false; // to check if anyone wins

// full fledged 2 player tic tac toe game
int main(){
    int count = 0;
    while (winner == false) {
        update1(); // initializes new update
        count++;
        if(count == 9) {
            // slight glitch found
            // If you
            break;
        }
        update2(); // updates the display with new values
        if(count == 9) {
            break;
        }
        count++;
        winner_check();
    }

    cout << "Its a tie!";
    return 0;

}
// Update display for Player 1. Will update all values and proceed
// ask for an input by player 1
void update1(){
    cout << "\n\tTic tac toe game" << endl << endl; //endl statement is one way to send to next line

    cout << "\tPlayer1 [X] \n\tPlayer2 [O]" << endl << endl; // putting a \n is another way to send the cursor to the next line
    // creates the tic tac toe board
    cout << "\t     |     |     \n";
    cout <<"\t  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "   \n";
    cout << "\t_____|_____|_____\n";
    cout << "\t     |     |     \n";
    cout <<"\t  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "   \n";
    cout << "\t_____|_____|_____\n";
    cout << "\t     |     |     \n";
    cout <<"\t  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "   \n";
    cout << "\t     |     |     \n";

    cout << "\n\t Player1[X] turn: ";
    // Player 1 enters choice
    cin >> choice1;

    // use a switch statement to tell what choice did player 1 pick
    // remember player 1 is X
    switch(choice1){
        case 1:
            board[0][0] = 'X';
            break;
        case 2:
            board[0][1] = 'X';
            break;
        case 3:
            board[0][2] = 'X';
            break;
        case 4:
            board[1][0] = 'X';
            break;
        case 5:
            board[1][1] = 'X';
            break;
        case 6:
            board[1][2] = 'X';
            break;
        case 7:
            board[2][0] = 'X';
            break;
        case 8:
            board[2][1] = 'X';
            break;
        case 9:
            board[2][2] = 'X';
            break;
        default:
            cout << "invalid choice" << endl;
            break;
    }
}
// Update display for Player 1. Will update all values and proceed
// ask for an input by player 1
void update2() {

    cout << "\n\tTic tac toe game" << endl << endl; //endl statement is one way to send to next line

    cout << "\tPlayer1 [X] \n\tPlayer2 [O]" << endl << endl; // putting a \n is another way to send the cursor to the next line
    // creates the tic tac toe board
    cout << "\t     |     |     \n";
    cout <<"\t  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "   \n";
    cout << "\t_____|_____|_____\n";
    cout << "\t     |     |     \n";
    cout <<"\t  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "   \n";
    cout << "\t_____|_____|_____\n";
    cout << "\t     |     |     \n";
    cout <<"\t  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "   \n";
    cout << "\t     |     |     \n";

    cout << "\n\t Player2[O] turn: ";
    // Player 2 enters choice
    cin >> choice2;

    // use a switch statement to tell what choice did player 2 pick
    // remember player 2 is O
    switch(choice2){
        case 1:
            board[0][0] = 'O';
            break;
        case 2:
            board[0][1] = 'O';
            break;
        case 3:
            board[0][2] = 'O';
            break;
        case 4:
            board[1][0] = 'O';
            break;
        case 5:
            board[1][1] = 'O';
            break;
        case 6:
            board[1][2] = 'O';
            break;
        case 7:
            board[2][0] = 'O';
            break;
        case 8:
            board[2][1] = 'O';
            break;
        case 9:
            board[2][2] = 'O';
            break;
        default:
            cout << "invalid choice" << endl;
            break;
    }
}

void winner_check() {














}








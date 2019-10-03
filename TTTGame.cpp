/* Class: TicTacToe
 * Author: [FINISH ME]
 * Description: A program that implements the game Tic-Tac-Toe
 */

#include <iostream>
#include "TicTacToe.h"
using namespace std;

int main() {

    // FINISH ME
    TicTacToe game;

    game.initializeBoard();

    int selection;
    int row;
    int column;
    bool validGuess = false;
    bool validSelection = false;
    cout << R"(Enter "1" to play 2 player game or "2" to play against computer)" << endl;
    cin >> selection;
    while (!validSelection){
        if (selection != 1 && selection != 2){
            cout << "Please enter a valid selection 1 or 2" << endl;
            cin >> selection;
        }
        else {
            validSelection = true;
        }
    }

    if (selection == 1){ // 2 Player Game
        while(game.checkForWin() == false) {
            game.printBoard();
            cout << "Player: " << game.getCurrentPlayerNumber() << " Enter row and column of guess" << endl;
            cin >> row >> column;
            while (!validGuess) {
                if (row > 2 || row < 0 || column > 2 || row < 0) {
                    cout << "Please enter a valid choice (Rows 0-2, Columns 0-2)" << endl;
                    cin >> row >> column;
                }
                else {
                    validGuess = true;
                }
            }
            game.placeMark(row, column);

            if (game.checkForWin() == true){
                cout << "Player " << game.getCurrentPlayerNumber() << " has won!" << endl;
                game.printBoard();
            }
            if (game.isBoardFull() == true && game.checkForWin() == false){
                cout << "Tie!" << endl;
                game.printBoard();
            }
            game.changePlayer();
        }
    }
    if (selection == 2){ // Play against Computer

    }


    return 0;
}
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
    cout << R"(Enter "1" to play 2 player game or "2" to play against computer)" << endl;
    cin >> selection;
    if (selection == 1){ // 2 Player Game
        while(game.checkForWin() == false) {
            game.printBoard();
            cout << "Player: " << game.getCurrentPlayerNumber() << " Enter row and column of guess" << endl;
            cin >> row >> column;
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
#include "tic_tac_toe.h"

#include <iostream>

TicTacToe::TicTacToe() : board_(3, vector<Piece>(3)) {}

void TicTacToe::addToken(int i, int j, Piece p) {
    board[i][j] = p;
}

void TicTacToe::printBoard() {
    for (auto& row : board_) {
        for (int i = 0; i < row.size(); ++i) {
            std::cout << row[i] == X ? 'X' : '0';
            if (i != row.size() - 1) {
                std::cout << '|';
            }
        }
        std::cout << std::endl;
    }
}
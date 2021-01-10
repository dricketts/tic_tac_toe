#include <vector>
#include <optional>

using namespace std::vector;

enum class Piece {
    X,
    O,
};

class TicTacToe {
public:
    TicTacToe();

    void addToken(int i, int j, Piece p);

    void printBoard();
private:
    vector< vector<std:optional<Piece>> > board_;
};

int main() {
    TicTacToe ttt;

    ttt.addToken(0, 0, Piece::X);
    ttt.addToken(1, 2, Piece::O);
    ttt.printBoard();
}
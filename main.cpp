#include <iostream>
#include <string>
#include "board.h"
using namespace std;

const string X = "X";
const string O = "0";

enum states {
    FREE,
    TYPE_0,
    TYPE_1
};

struct cell {
    int x;
    int y;
    states state;
};

cell board[SIZE][SIZE];

int init() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[j][i].x = j;
            board[j][i].y = i;
            board[j][i].state = FREE;
        }
    }
}

int get_your_choice() {
    cout << "Please, enter the cell coords of your choice: ";

    int choice;
    cin >> choice;

    return choice;
}

bool check_end() {
    // By horizontal
    bool result;
    for (int i = 0; i < SIZE; i++) {
        result = false;
        for (int j = 0; j < SIZE; j++) {
            board[j][i].state;
        }
    }

    return result;
}

int main() {
    init();

    string name = "Unknown";

    print_example();
    print_board();
    int choice  = get_your_choice();

    cout << choice;

    return 0;
}

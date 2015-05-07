void print_n_string(string str, int n) {
    for (int i = 0; i < n; i++) {
        cout << str;
    }
}

void print_board() {
    cout << "G A M E" << endl;

    print_n_string("-", SIZE * 4 + 1);
    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "|";

        for (int j = 0; j < SIZE; j++) {
            cout << " ";

            switch (board[j][i].state) {
                case TYPE_0:
                    cout << X;
                    break;

                case TYPE_1:
                    cout << O;
                    break;

                case FREE:
                default:
                    cout << " ";
                    break;

            }

            cout << " ";
            cout << "|";
        }

        cout << endl;
        print_n_string("-", SIZE * 4 + 1);
        cout << endl;
    }

    cout << endl;
}

void print_example() {
    cout << endl;
    cout << "C O O R D S" << endl;
    //cout << endl;

    print_n_string("-", SIZE * 5 + 1);
    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "| ";

        for (int j = 0; j < SIZE; j++) {
            cout << i + 1 << j + 1 << " | ";
        }

        cout << endl;
        print_n_string("-", SIZE * 5 + 1);
        cout << endl;
    }

    cout << endl;
}


int* get_coords(int choice) {
    int coords[] = {0, 0};

    int x = choice % 10;
    int y = choice / 10;

    if (x < 0 || x >= SIZE || y < 0 || y >= SIZE) {
        return NULL;
    }

    coords[0] = x;
    coords[1] = y;

    return &coords;
}



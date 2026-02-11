#include <iostream>
using namespace std;

int main() {
    int i, space, star, rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (i = rows; i >= 1; i--) {
        for (space = 0; space < rows - i; space++) {
            cout << "  ";
        }

        for (star = 1; star <= (2 * i - 1); star++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}

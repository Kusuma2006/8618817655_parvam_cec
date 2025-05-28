#include <iostream>
using namespace std;

int main() {
    int rows, i, j;
    char alphabet = 'A';

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= rows - i; ++j) {
            cout << "  ";
        }
        for (j = 1; j <= 2 * i - 1; ++j) {
            cout << alphabet << " ";
        }
        cout << endl;
        alphabet++;
    }
    return 0;
}
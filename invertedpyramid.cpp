
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        // spaces
        int space = 1;
        while (space < i) {
            cout << " ";
            space++;
        }

        // stars
        int j = 1;
        while (j <= 2 * (n - i) + 1) {
            cout << "*";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}

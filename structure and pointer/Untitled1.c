#include <iostream> // for cout and cin

using namespace std;

int main() {
    int n;

    // Take input from user
    cout << "Enter a number: ";
    cin >> n;

    // Loop from 1 to n
    for (int i = 1; i <= n; ++i) {
        // Check if even or odd
        if (i % 2 == 0) {
            cout << i << " is even" << endl;
        } else {
            cout << i << " is odd" << endl;
        }
    }

    return 0;
}


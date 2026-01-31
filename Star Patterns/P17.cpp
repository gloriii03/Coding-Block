#include <iostream>
using namespace std;

int main() {
    int n = 7;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if( (i == 1 && (j <= 3 || j >= 5)) ||
                (i == n && (j <= 3 || j >= 5)) ||
                (i == 2 && (j <= 2 || j >= 6)) ||
                (i == n-1 && (j <= 2 || j >= 6)) ||
                (i == 3 && (j == 1 || j == 7)) ||
                (i == n-2 && (j == 1 || j == 7))
            )
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}

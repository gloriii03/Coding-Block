#include <iostream>
using namespace std;
int main() {
    int n = 7;
    // Upper half of diamond 
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= n - i; j++) 
            cout << "  ";
        cout << "*"; 
        if (i > 1) {
            for (int j = 1; j <= 2 * (i - 1) - 1; j++) 
                cout << "  ";
            cout << " *";
        } 
        cout << endl;
    }
    // Lower half of diamond 
    for (int i = 4 - 1; i >= 1; i--) {
        for (int j = 1; j <=n - i; j++) 
            cout << "  ";
        cout << "*"; 
        if (i > 1) {
            for (int j = 1; j <= 2 * (i - 1) - 1; j++) 
                cout << "  ";
            cout << " *"; 
        }
        cout << endl;
    }
    return 0;
}

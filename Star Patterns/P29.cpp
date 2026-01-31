#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int s = 1; s <= n - i; s++)
            cout << "  ";

        cout << i << " ";
        for(int j = 1; j <= 2*i - 3; j++)
            cout << "0 ";
        if(i > 1)
            cout << i << " ";

        cout << endl;
    }
    return 0;
}

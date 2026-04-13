#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int m[n];

    for(int i = 0; i < n; i++)
    {
        cin >> m[i];
    }

    int search;
    cin >> search;
    int found = -1;

    for(int i = 0; i < n; i++)
    {
        if(m[i] == search) 
        {
            found = i;
            break; 
        }
    }

    if(found != -1)
        cout << "Element found at index: " << found << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
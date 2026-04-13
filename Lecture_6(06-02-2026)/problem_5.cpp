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
    
    int count = 0; 

    for(int i = 0; i < n; i++)
    {
        if(m[i] == search) 
        {
            count++;
        }
    }

    if(count > 0)
        cout << "Element found " << count << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}


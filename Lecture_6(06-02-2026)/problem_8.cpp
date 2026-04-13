#include <iostream>
using namespace std;

void printReversed(int arr[], int size) 
{
    for (int i = size - 1; i >= 0; i--) 
    {
        cout << arr[i]<<endl;
    }
}

int main() 
{
    int arr[] = {5, 10, 15, 20, 25, 30};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: "<<endl;
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " "<<endl;
    }

    cout << "Reversed output: "<<endl;
    
    printReversed(arr, n);

    return 0;
}
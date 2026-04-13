#include <iostream>
using namespace std;

void reverse(int arr[], int size) 
{
    int start = 0;
    int end = size - 1;

    while (start < end) 
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void display(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int num[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    cout << "Before: ";
    display(num, n);

    reverse(num, n);

    cout << "After:  ";
    display(num, n);

    return 0;
}
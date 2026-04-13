#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    
    int i = 1; 
    int j = 3;
    cout << "Original: "<< arr[i]<< arr[j] <<endl;

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    cout << "Swap: " << arr[i]<< arr[j] <<endl;

    return 0;
}
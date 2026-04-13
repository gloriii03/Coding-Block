#include <iostream>
using namespace std;

void printSecondMax(int arr[], int size) 
{
    int max1 = -1; 
    int max2 = -1;

    for (int i = 0; i < size; i++) 
    {
        if (arr[i] > max1) 
        {
            max2 = max1;    
            max1 = arr[i];  
        }
        else if (arr[i] > max2 && arr[i] != max1) 
        {
            max2 = arr[i];
        }
    }

    if (max2 == -1) 
    {
        cout << "No second largest value." << endl;
    } else {
        cout << "The second largest value is: " << max2 << endl;
    }
}

int main() {
    int num[] = {10, 20, 4, 35, 35, 28};
    int n = 6;

    printSecondMax(num, n);

    return 0;
}


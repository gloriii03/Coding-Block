#include <iostream>
using namespace std;

int main()
{
    int arr[] = {23, 798, 12, 90, 5, 67};
    
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    int max = arr[0];
    
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    
    cout << "The maximum value is: " << max;
    return 0;
}
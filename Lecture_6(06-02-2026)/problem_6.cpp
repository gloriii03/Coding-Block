#include <iostream>
using namespace std;

int main()
{
    int arr[] = {23, 798, 12, 90, 5, 67};
    
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    int min = arr[0];
    
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    
    cout << "The minimum value is: " << min;
    return 0;
}
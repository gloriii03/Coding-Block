// #include <iostream>
// #include <string>
// using namespace std;

// class solution
// {
//     public:
//     int myAtoi(string str)
//     {
//         int n = str.length();
//         long result = 0;
//         int sign = 1;
//         int i = 0;

//         while(i<n && str[i]==' ')
//         {
//             i++;
//         }
//         if(i<n && (str[i]=='+' || str[i]=='-'))
//         {
//             if(str[i]=='-')
//             {
//                 sign = -1;
//             }
//             i++;
//         }
//         while (i < n && str[i] >= '0' && str[i] <= '9') 
//         {
//             result = result * 10 + (str[i] - '0');

//             if (result * sign >= INT_MAX) return INT_MAX;
//             if (result * sign <= INT_MIN) return INT_MIN;

//             i++;
//         }

//         return (int)(result * sign); 
//     }
// };




















#include <iostream>
#include <string>
#include <climits>
using namespace std;

int myAtoi(string str)
{
    int i = 0, n = str.length();
    int sign = 1;
    long result = 0;

    // Skip leading spaces
    while (i < n && str[i] == ' ')
    {
        i++;
    }

    // Check sign
    if (i < n && (str[i] == '+' || str[i] == '-'))
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    // Convert digits
    while (i < n && str[i] >= '0' && str[i] <= '9')
    {
        int digit = str[i] - '0';

        // Overflow check
        if (result > (INT_MAX - digit) / 10)
        {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = result * 10 + digit;
        i++;
    }

    return result * sign;
}

int main()
{
    string str;

    cout << "Enter string: ";
    cin >> str;   

    int num = myAtoi(str);

    cout << "Converted integer: " << num << endl;

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void reverse(vector<int>& nums, int start,int end) 
    {
        while(start<end)
        {
            int temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            start++;
            end--;
        }
    }

    void rotate(vector<int>& nums, int k)
    {
        int n = nums.size();
        k = k % n; 
        reverse(nums, 0, n - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, n - 1);
    }
};








// //


// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         vector <int> temp(nums.size());
//         for(int i=0;i<nums.size();i++)
//         {
//             temp[(i+k)%nums.size()]=nums[i];
//         }
//         nums=temp;
//     }
// };


// //



// void rotate(vector<int>& nums, int k) 
// {
//     int n = nums.size();
//     k %= n; 
    
//     while(k--) {
//         int last = nums[n-1];
//         for(int i = n - 1; i > 0; i--) 
//         {
//             nums[i] = nums[i-1];
//         }
//         nums[0] = last;
//     }
// }
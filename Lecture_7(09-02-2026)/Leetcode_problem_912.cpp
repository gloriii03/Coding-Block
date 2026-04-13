#include<iostream>
#include<vector>
using namespace std;


// //bubblle sort
// class Solution {
// public:
//     vector<int> sortArray(vector<int>& nums) {
//         int n = nums.size();
//         for (int i = 0; i < n - 1; i++) {
//             for (int j = 0; j < n - i - 1; j++) {
//                 if (nums[j] > nums[j + 1]) {
//                    int swap= nums[j];
//                     nums[j]=nums[j+1];
//                     nums[j+1]=swap;
//                 }
//             }
//         }
//         return nums;
//     }
// };


// //insertion sort
// class Solution {
// public:
//     vector<int> sortArray(vector<int>& nums) {
//         int n = nums.size();
//         for (int i = 1; i < n; i++) {
//             int key = nums[i];
//             int j = i - 1;

//             while (j >= 0 && nums[j] > key) {
//                 nums[j + 1] = nums[j];
//                 j--;
//             }
//             nums[j + 1] = key;
//         }
//         return nums;
//     }
// };



#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums, int left, int mid, int right) {
        vector<int> temp;
        int i = left, j = mid + 1;

        while (i <= mid && j <= right) {
            if (nums[i] <= nums[j]) 
            temp.push_back(nums[i++]);
            else 
            temp.push_back(nums[j++]);
        }

        while (i <= mid) 
        temp.push_back(nums[i++]);
        while (j <= right) 
        temp.push_back(nums[j++]);

        for (int k = 0; k < temp.size(); k++) {
            nums[left + k] = temp[k];
        }
    }

    void mergeSort(vector<int>& nums, int left, int right) {
        if (left >= right) return; 

        int mid = left + (right - left) / 2;
        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);
        merge(nums, left, mid, right);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};
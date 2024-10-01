#include<bits/stdc++.h>
using namespace std;

int printInd(vector<int>& nums, int key, int low, int high) {
    if (low > high) {
        return -1;
    }
    int mid =  (low+high)/2;
    if (nums[mid] == key) {
        return mid;
    } else if (nums[mid] < key) {
        return printInd(nums, key, mid+1, high);
    } else {
        return printInd(nums, key, low, mid-1);
    }
}

int main () {
    vector<int> nums = {5, 4, 3, 2, 1};
    sort(nums.begin(), nums.end());
    int key = 2;
    cout << printInd(nums, key, 0, nums.size()) << endl;
}
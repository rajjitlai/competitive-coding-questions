#include<bits/stdc++.h>
using namespace std;

bool CheckAP(vector<int> &nums) {
    int n = nums.size();
    if (n == 1) {
        return true;
    }
    int d = nums[1] - nums[0];
    for (int i = 1; i<n; i++) {
        if (nums[i] - nums[i-1] != d) {
            return false;
        }
    }
    return true;
}

int main () {
    int n;
    cout << "enter number of elements" << endl;
    cin >> n ;
    vector<int> nums(n, 0);
    cout << "enter the elements" << endl;
    for (int i = 0; i<n; i++) {
        cout << "enter element " << i+1 << " : " << endl;
        cin >> nums[i]; 
    }
    if (CheckAP(nums)) {
        cout << "the given series is an AP" << endl;
    } else {
        cout << "the given series is not an AP" << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

bool checkPIN(string pin) {
    int n = pin.size();
    if (n == 4 || n == 6) {
        bool flag = true;
        for (int i = 0; i<n; i++) {
            char ch = pin[i];
            if (ch == '0'
            || ch == '1'
            || ch == '2'
            || ch == '3'
            || ch == '4'
            || ch == '5'
            || ch == '6'
            || ch == '7'
            || ch == '8'
            || ch == '9'
            ) {
                continue;
            } else {
                return false;
            }
        }
        return true;
    } else {
        return false;
    }
}

int main () {
    string pin = "a2345";
   
    if (checkPIN(pin)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}
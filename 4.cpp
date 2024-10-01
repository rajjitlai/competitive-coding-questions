#include<bits/stdc++.h>
using namespace std;

int power(int x, int n) {
    if (n== 0) {
        return 1;
    }
    if ( n== 1) {
        return x;
    }
    if (n<0) {
        return (1.0/power(x, -1*n));
    }
    if (n%2 == 0) {
        return x * power(x, n/2);
    } else {
        return x * power(x, n-1);
    }
}

int main () {
    int x = 3;
    int n = -2;
    cout << power(x, n) << endl;
}
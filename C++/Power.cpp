#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, sum=0;

    cout << "Enter a number: ";
    cin >> n;

    for (int i=1; i<n; i++) {
        sum = sum + pow(i, n);
    }
    cout<< sum;
}



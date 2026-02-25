#include <iostream>

using namespace std;

int main() {

    int n, k;

    cin >> n;
    cin >> k;

    int count = 0;

    for (int i =0; i<n; i++){
        int d;
        cin >> d;

        if (d > k) {
            count += 1;
        }
    }

    cout << count;
}
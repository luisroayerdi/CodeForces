#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, k;

    cin >> n;
    cin >> k;

    int count = 0;

    //vector to store the partcipants scores
    vector <int> vec;


    for (int i =0; i<n; i++){
        int d;
        cin >> d;
        vec.push_back(d);
    }

    for (int i =0; i<n; i++){
        if (vec[i] >= vec[k-1] and vec[i]>0) {
            count += 1;
        }
    }

    cout << count;

}
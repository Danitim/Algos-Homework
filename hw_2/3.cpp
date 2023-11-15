#include <iostream>
#include <vector>
using namespace std;

int findIndex(vector<int>& a, int x) {
    int l = 0, r = a.size() - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (a[mid] == x) {
            return mid;
        }
        
        if (a[mid] < x) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return l;
}


int main() {
    int n, x;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; ++i) {
        cin >> a[i];
    }
    cin >> x;

    cout << findIndex(a, x) << endl;
    return 0;
}
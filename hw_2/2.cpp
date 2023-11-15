#include <iostream>
#include <vector>
using namespace std;

bool findPrice(vector<int> a, int price) {
    int l = 0, r = a.size() - 1;

    if (r == 0 || price < a[l] || price > a[r]) {
        return false;
    }

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (a[mid] == price) {
            return true;
        }
        if (a[mid] < price) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return false;
}

int main() {
    int n, price;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; ++i) {
        cin >> a[i];
    }
    cin >> price;

    cout << findPrice(a, price) << endl;
    return 0;
}
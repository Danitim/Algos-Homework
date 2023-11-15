#include <iostream>
#include <vector>

using namespace std;


int main() {
    int n, index = 0;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i=0; i<n; ++i) {
        cin >> a[i];
        if (a[i] != 0) {
            b[index] = a[i];
            index++;
        }
    }

    for (int i=0; i<n; ++i)  {
        if (a[i] == 0) {
            b[index] = a[i];
            index++;
        }
    }
    
    for (int i=0; i<n; ++i)
        cout << b[i] << " ";

    return 0;
}
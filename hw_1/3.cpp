#include <iostream>
#include <vector>

using namespace std;

void moveEvenFront(vector<int>& array) {
    int n = array.size(), i = 0, j = 0;
    while (i < n) {
        if (array[i] % 2 == 0) {
            swap(array[i], array[j]);
            j++;
        }
        i++;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; ++i)
        cin >> a[i];
    
    moveEvenFront(a);
    
    for (int i=0; i<n; ++i)
        cout << a[i] << " ";
    return 0;
}
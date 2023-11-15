#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& array, int value) {
    int n = array.size(), i = 0;
    while (i < n) {
        if (array[i] == value) {
            array[i] = array[n-1];
            n--;
        } else i++;
    }
    array.resize(n);
    return n;
}

int main() {
    int n, elem;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; ++i)
        cin >> a[i];
    cin >> elem;
    
    int count = removeElement(a, elem);
    cout << count << endl;
    return 0;
}
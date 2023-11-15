#include <iostream>
#include <stack>
#include <string>
#include <algorithm> 
using namespace std;

string deleteRepeatingLetters(string s) {
    stack<char> st;
    string result = "";

    for (char c : s) {
        if (!st.empty() && st.top() == c) {
            st.pop();
        } else {
            st.push(c);
        }
    }

    while (!st.empty()) {
        char c = st.top();
        st.pop();
        result += c; 
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string s;
    cin >> s;
    cout << deleteRepeatingLetters(s) << endl;
    return 0;
}
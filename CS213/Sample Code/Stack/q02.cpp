#include <iostream>
using namespace std;
#include <stack>
#define LOG(x) cout << x << endl;

// Question: Given string str, we need to print the reverse of individual words.
// Example Input : Hello World
// Example Output : olleH dlroW

string reverse_word(string s) {
    string ans;
    stack<char> rev;

    for (char c : s) {
        if (c == ' ') {
            while (!rev.empty()) {
                ans.push_back(rev.top());
                rev.pop();
            }
            ans.push_back(c);
        } else {
            rev.push(c);
        }
    }

    while (!rev.empty()) {
        ans.push_back(rev.top());
        rev.pop();
    }

    return ans;
}

int main() {
    string s;
    getline(cin, s);

    string ans = reverse_word(s);

    cout << ans << endl;
}

#include <iostream>
using namespace std;
#include <stack>
#define LOG(x) cout << x << endl;

// Question: Given a string, reverse it using a stack.
// Example Input: s = "Hello"
// Example Output: s = "olleH"

string reverse(string s)
{
    string ans;
    stack<char> rev;

    for (char c : s)
    {
        rev.push(c);
    }

    while (!rev.empty())
    {
        ans.push_back(rev.top());
        rev.pop();
    }

    return ans;
}

int main() {
    string s;
    cin >> s;

    string ans = reverse(s);
    cout << ans << endl;

    return 0;
}

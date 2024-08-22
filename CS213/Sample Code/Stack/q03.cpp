#include <iostream>
using namespace std;
#include <stack>
#define LOG(x) cout << x << endl;

// Question: Given a stack, the task is to delete the middle element of it without using any additional data structures.
// Example Input: Stack[] = [1, 2, 3, 4, 5]
// Example Output: Stack[] = [1, 2, 4, 5]
// Example Input: Stack[] = [1, 2, 3, 4, 5, 6]
// Example Output: Stack[] = [1, 2, 4, 5, 6]

void delete_mid(stack<int> &s) {
    vector<int> v;

    while (!s.empty()) {
        v.push_back(s.top());
        s.pop();
    }

    int n = v.size();

    int mid_index = (n - 1) / 2;

    for (int i = n - 1; i >= 0; i--) {
        if (i != mid_index) {
            s.push(v[i]);
        }
    }
}

int main() {

    stack<int> s;
    s.push(1);
    s.push(3);
    s.push(7);

    delete_mid(s);

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}

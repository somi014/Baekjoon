#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int value;
    stack<int> s;

    for (int i = 0; i < n; ++i)
    {
        string command;
        cin >> command;

        if (command == "push")
        {
            int v;
            cin >> v;
            s.push(v);
        }
        else if (command == "pop")
        {
            if (s.empty())
            {
                cout << -1 << '\n';
                continue;
            }
            cout << s.top() << '\n';
            s.pop();
        }
        else if (command == "size")
        {
            cout << s.size() << '\n';
        }
        else if (command == "empty")
        {
            cout << (s.empty() ? 1 : 0) << '\n';
        }
        else if (command == "top")
        {
            value = s.empty() ? -1 : s.top();
            cout << value << '\n';
        }
    }

    return 0;
}

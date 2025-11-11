#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int value;
    queue<int> q;

    for (int i = 0; i < n; ++i)
    {
        string command;
        cin >> command;

        if (command == "push")
        {
            int v;
            cin >> v;
            q.push(v);
        }
        else if (command == "pop")
        {
            if (q.empty())
                cout << -1 << '\n';
            else
            {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if (command == "size")
        {
            cout << q.size() << '\n';
        }
        else if (command == "empty")
        {
            cout << (q.empty() ? 1 : 0) << '\n';
        }
        else if (command == "front")
        {
            cout << (q.empty() ? -1 : q.front()) << '\n';
        }
        else if (command == "back")
        {
            cout << (q.empty() ? -1 : q.back()) << '\n';
        }
    }

    return 0;
}

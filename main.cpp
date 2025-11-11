#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string vps;

    for (int i = 0; i < n; i++)
    {
        cin >> vps;
        int count = 0;
        if (vps[0] == ')')
        {
            cout << "NO\n";
            continue;
        }
        for (char c : vps)
        {
            if (c == '(')
                ++count;
            else if (c == ')')
                --count;
            if (count < 0)
            {
                break;
            }
        }
        cout << (count == 0 ? "YES\n" : "NO\n");
    }

    return 0;
}

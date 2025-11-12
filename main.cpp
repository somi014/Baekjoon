#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> circle(n);
    for (int i = 0; i < n; ++i)
        circle[i] = i + 1;

    int idx = 0;
    cout << '<';
    while (!circle.empty())
    {
        idx = (idx + k - 1) % circle.size();
        cout << circle[idx];
        circle.erase(circle.begin() + idx);
        if (!circle.empty())
            cout << ", ";
    }
    cout << ">\n";
    return 0;
}

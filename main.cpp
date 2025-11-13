#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if (!(cin >> N))
        return 0;

    deque<pair<int, int>> a;
    for (int i = 1; i <= N; ++i)
    {
        int mv;
        cin >> mv;
        a.emplace_back(i, mv);
    }

    while (!a.empty())
    {
        int index = a.front().first;
        int move = a.front().second;
        a.pop_front();
        cout << index << ' ';

        if (0 < move)
        {
            for (int i = 0; i < move - 1; i++)
            {
                a.push_back(a.front());
                a.pop_front();
            }
        }
        else
        {
            move = -move;
            for (int i = 0; i < move; i++)
            {
                a.push_front(a.back());
                a.pop_back();
            }
        }
    }
    cout << '\n';
    return 0;
}

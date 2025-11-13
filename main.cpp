#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if (!(cin >> N))
        return 0;

    list<pair<int, int>> a;
    for (int i = 1; i <= N; ++i)
    {
        int mv;
        cin >> mv;
        a.emplace_back(i, mv);
    }

    auto it = a.begin();
    vector<int> order;
    order.reserve(N);

    while (!a.empty())
    {
        int idx = it->first;
        int mv = it->second;
        order.push_back(idx);

        auto erase_it = it;

        if (a.size() == 1)
        {
            a.erase(erase_it);
            break;
        }

        if (mv > 0)
        {
            auto next_it = erase_it;
            ++next_it;
            if (next_it == a.end())
                next_it = a.begin();
            a.erase(erase_it);

            it = next_it;

            for (int k = 1; k < mv; ++k)
            {
                ++it;
                if (it == a.end())
                    it = a.begin();
            }
        }
        else
        {
            int step = -mv;
            auto prev_it = (erase_it == a.begin()) ? prev(a.end()) : prev(erase_it);
            a.erase(erase_it);
            it = prev_it;

            for (int k = 1; k < step; ++k)
            {
                if (it == a.begin())
                    it = prev(a.end());
                else
                    --it;
            }
        }
    }

    for (int i = 0; i < (int)order.size(); ++i)
    {
        if (i)
            cout << ' ';
        cout << order[i];
    }
    cout << '\n';
    return 0;
}

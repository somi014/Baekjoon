#include <iostream>
#include <string>
#include <map>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int K;
        cin >> K;

        map<int, int> Q;
        for (int j = 0; j < K; j++)
        {
            char cmd;
            int x;

            cin >> cmd >> x;
            if (cmd == 'I')
            {
                Q[x]++;
            }
            else if (cmd == 'D')
            {
                if (Q.empty())
                    continue;

                if (x == 1)
                {
                    auto it = --Q.end();
                    if (it->second == 1)
                        Q.erase(it);
                    else
                        it->second--;
                }
                else
                {
                    auto it = Q.begin();
                    if (it->second == 1)
                        Q.erase(it);
                    else
                        it->second--;
                }
            }
        }
        if (Q.empty())
            cout << "EMPTY\n";
        else
            cout << (--Q.end())->first << ' ' << Q.begin()->first << '\n';
    }

    return 0;
}
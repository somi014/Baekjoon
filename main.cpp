#include <iostream>
#include <string>
#include <queue>
#include <iomanip>
#include <cmath>
using namespace std;

struct Compare
{
    bool operator()(int a, int b) const
    {
        if (abs(a) == abs(b))
            return a > b;       // 절댓값 같으면 원래 값이 작은 게 먼저
        return abs(a) > abs(b); // 절댓값 기준 오름차순
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    priority_queue<int, vector<int>, Compare> pq;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;

        if (num == 0)
        {
            cout << (pq.empty() ? 0 : pq.top()) << "\n";
            if (!pq.empty())
                pq.pop();
        }
        else
        {
            pq.push(num);
        }
    }

    return 0;
}
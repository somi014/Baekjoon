#include <iostream>
#include <string>
#include <queue>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    priority_queue<int, vector<int>, less<int>> pq;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        pq.push(num);

        if (num == 0)
        {
            cout << pq.top() << "\n";
            pq.pop();
        }
    }

    return 0;
}
#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> adjacent[100001];

    for (int i = 0; i < N - 1; i++)
    {
        int a, b;
        cin >> a >> b;

        adjacent[a].push_back(b);
        adjacent[b].push_back(a);
    }

    queue<int> q;
    int parent[100001];
    bool visited[100001] = {false};

    q.push(1);
    visited[1] = true;
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        for (int nxt : adjacent[cur])
        {
            if (!visited[nxt])
            {
                visited[nxt] = true;
                parent[nxt] = cur;
                q.push(nxt);
            }
        }
    }

    for (int i = 2; i <= N; i++)
    {
        cout << parent[i] << '\n';
    }
    return 0;
}
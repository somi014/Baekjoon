#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    map<string, int> names;
    for (int i = 0; i < N; i++)
    {
        string input;
        cin >> input;
        names[input] = i;
    }

    int answer = 0;
    for (int i = 0; i < M; i++)
    {
        string query;
        cin >> query;
        if (names.find(query) != names.end())
        {
            answer++;
        }
    }

    cout << answer << '\n';
    return 0;
}
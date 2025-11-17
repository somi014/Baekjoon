#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<string> names(N);
    unordered_map<string, int> indexMap(N);
    for (int i = 0; i < N; i++)
    {
        cin >> names[i];
        indexMap[names[i]] = i;
    }

    for (int i = 0; i < M; i++)
    {
        string input;
        cin >> input;
        if (input[0] >= '0' && input[0] <= '9') // 숫자일 경우
        {
            int idx = stoi(input) - 1;
            cout << names[idx] << '\n';
        }
        else // 이름일 경우
        {
            cout << indexMap[input] + 1 << '\n';
        }
    }

    return 0;
}
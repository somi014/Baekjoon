#include <iostream>
#include <string>
#include <map>
#include <set>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    map<int, set<int>> problems; // 난이도별 문제 번호 기록(같은 난이도의 여러 문제)
    map<int, int> problem_level; // 문제 번호별 난이도 기록  (문제 삭제 시 키 찾기용)
    for (int i = 0; i < N; i++)
    {
        int P;
        int L;
        cin >> P >> L;

        problems[L].insert(P);
        problem_level[P] = L;
    }

    int M;
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        string c;
        cin >> c;

        if (c == "add")
        {
            int P;
            int L;
            cin >> P >> L;
            problems[L].insert(P);
            problem_level[P] = L;
        }
        else if (c == "solved")
        {
            int P;
            cin >> P;
            int L = problem_level[P];
            problems[L].erase(P);
            problem_level.erase(P);
            if (problems[L].empty())
            {
                problems.erase(L);
            }
        }
        else if (c == "recommend")
        {
            int P;
            cin >> P;
            if (P == 1)
            {
                auto it = prev(problems.end());
                int level = *it->second.rbegin();
                cout << level << '\n';
            }
            else
            {
                auto it = problems.begin();
                int level = *it->second.begin();
                cout << level << '\n';
            }
        }
    }

    return 0;
}
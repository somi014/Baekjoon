#include <iostream>

using namespace std;

bool visit[51];

int dfs(string& S, int idx) 
{
    int cnt = 0;

    for (int i = idx; i < S.size(); i++) 
    {
        if (S[i] == '(' && !visit[i]) 
        {
            visit[i] = true;
            int num = S[i - 1] - '0';           //괄호 앞 = 반복 횟수
            cnt--;                              //반복 횟수는 개수에서 제외
            cnt += num * dfs(S, i + 1);         //반복 횟수 * 압축 푼 문자열
        }
        else if (S[i] == ')' && !visit[i]) 
        {
            visit[i] = true;
            return cnt;
        }
        else if (!visit[i]) 
        {
            visit[i] = true;
            cnt++;
        }
    }

    return cnt;
}

int main() 
{
    string s;

    cin >> s;

    cout << dfs(s, 0) << endl;
    return 0;
}
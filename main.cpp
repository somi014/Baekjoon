#include <iostream>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    queue<int> stk;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        stk.push(num);
    }

    stack<int> copy;
    vector<char> result;
    int index = 1;
    while (stk.empty() == false)
    {
        if (stk.front() >= index)
        {
            int temp = index;
            for (int j = temp; j <= temp; j++)
            {
                copy.push(j);
                result.push_back('+');
                index++;
            }
        }

        if (copy.top() == stk.front())
        {
            result.push_back('-');
            copy.pop();
            stk.pop();
        }
        else if (copy.top() > stk.front())
        {
            cout << "NO" << "\n";
            return 0;
        }
    }

    for (char c : result)
    {
        cout << c << "\n";
    }
    return 0;
}
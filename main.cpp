#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    stack<char> st;
    long long total = 0;

    for (int i = 0; i < (int)s.size(); ++i)
    {
        if (s[i] == '(')
        {
            st.push('(');
        }
        else
        { 
            st.pop();
            if (i > 0 && s[i - 1] == '(')
            {
                total += st.size();
            }
            else
            {
                // 막대 끝
                total += 1;
            }
        }
    }

    cout << total << '\n';
    return 0;
}
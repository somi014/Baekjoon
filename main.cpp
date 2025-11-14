#include <iostream>
#include <vector>
#include <stack>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if (!(cin >> N))
        return 0;

    string postfix;
    cin >> postfix;

    vector<double> val(26, 0.0);
    for (int i = 0; i < N; ++i)
    {
        cin >> val[i];
    }

    stack<double> st;

    for (char c : postfix)
    {
        if ('A' <= c && c <= 'Z')
        {
            st.push(val[c - 'A']);
        }
        else
        {
            double a = st.top();
            st.pop();
            double b = st.top();
            st.pop();

            switch (c)
            {
            case '+':
                st.push(b + a);
                break;
            case '-':
                st.push(b - a);
                break;
            case '*':
                st.push(b * a);
                break;
            case '/':
                st.push(b / a);
                break;
            }
        }
    }

    cout << fixed << setprecision(2) << st.top() << '\n';
    return 0;
}

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    queue<int> numbers;
    for (int i = 0; i < n; i++)
    {
        numbers.push(i + 1);
    }

    while (numbers.size() > 1)
    {
        numbers.pop();
        int first = numbers.front();
        numbers.pop();
        numbers.push(first);
    }
    cout << numbers.front() << '\n';
    return 0;
}

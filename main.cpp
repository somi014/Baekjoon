#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        numbers[i] = i + 1;
    }
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        reverse(numbers.begin() + (a - 1), numbers.begin() + b);
    }

    
    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << ' ';
    }
    return 0;
}

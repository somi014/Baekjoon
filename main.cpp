#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;

    double max = 0;
    vector<double> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
        if (max < numbers[i])
        {
            max = numbers[i];
        }
    }

    double total = 0;
    for (int i = 0; i < n; i++)
    {
        double tmp;
        tmp = numbers[i] * 100.0 / max;
        numbers[i] = tmp;
        total += numbers[i];
    }
    cout << fixed << setprecision(6) << (double)(total / n) << '\n';

    return 0;
}

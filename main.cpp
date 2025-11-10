#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{
    int n = 42;
    set<int> numbers;
    for (int i = 0; i < 10; ++i)
    {
        int input;
        cin >> input;
        numbers.insert(input % n);
    }
    cout << numbers.size() << endl;

    return 0;
}

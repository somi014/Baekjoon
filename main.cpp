#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<bool> student(31, false);
    int number;

    for (int i = 1; i <= 28; ++i)
    {
        cin >> number;
        student[number] = true;
    }

    for (int i = 1; i <= 30; ++i)
    {
        int number;

        if (student[i] == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}

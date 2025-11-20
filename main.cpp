#include <iostream>
#include <string>
#include <map>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<string, int> treeList;
    int total = 0;

    string tree;
    while (getline(cin, tree))
    {
        if (tree.empty())
            continue;
        treeList[tree]++;
        total++;
    }

    for (auto &c : treeList)
    {
        double ratio = (c.second * 100.0) / total;
        cout << fixed << setprecision(4) << c.first << ' ' << ratio << '\n';
    }
    
    return 0;
}
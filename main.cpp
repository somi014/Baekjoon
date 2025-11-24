#include <iostream>
#include <string>
#include <map>
#include <set>
#include <iomanip>
#include <cmath>
using namespace std;

int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

long long toMinutes(const string &date, const string &time)
{
    int y = stoi(date.substr(0, 4));
    int M = stoi(date.substr(5, 2));
    int d = stoi(date.substr(8, 2));
    int h = stoi(time.substr(0, 2));
    int m = stoi(time.substr(3, 2));

    long long days = 0;
    for (int i = 1; i < M; ++i)
        days += month[i];
    days += (d - 1); // 0-based 일수

    return days * 24 * 60 + h * 60 + m;
}

long long StringToTime(const string &limit,
                       const string &date, const string &time,
                       const string &endDate, const string &endTime)
{
    int D = stoi(limit.substr(0, 3));
    int H = stoi(limit.substr(4, 2));
    int Min = stoi(limit.substr(7, 2));

    long long limitMin = 1LL * D * 24 * 60 + 1LL * H * 60 + Min;

    long long startMin = toMinutes(date, time);
    long long endMin = toMinutes(endDate, endTime);

    long long used = endMin - startMin;  // 사용한 전체 시간(분)
    long long overdue = used - limitMin; // 초과 시간(분)

    return overdue; // 초과 분 (0 이하이면 연체 아님)
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    string L;
    int F;
    cin >> N >> L >> F;

    map<string, long long> feeList;
    map<pair<string, string>, string> rent;
    for (int i = 0; i < N; i++)
    {
        string T, D, P, M;
        cin >> T >> D >> P >> M;

        auto it = rent.find({M, P});
        if (it != rent.end())
        {
            string startTime = it->second;
            long long overTime = StringToTime(L, startTime.substr(0, 10), startTime.substr(11, 5),
                                              T, D);

            if (overTime > 0)
            {
                long long fee = overTime * F;
                feeList[M] += fee;
            }
            rent.erase(it);
        }
        else
            rent[{M, P}] = T + " " + D;
    }

    if (feeList.empty())
        cout << -1 << "\n";
    else
    {
        for (const auto &entry : feeList)
        {
            cout << entry.first << " " << entry.second << "\n";
        }
    }

    return 0;
}
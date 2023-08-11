#include <iostream>
#include <algorithm>

using namespace std;

int answer = 0;

int N = 0;				//주어진 기둥 개수
int L = 0;				//기둥의 왼쪽 면 위치
int H = 0;				//기둥의 높이

int arr[1001];			//각 기둥의 높이
int max_L = 0;			//가장 높은 기둥 위치
int max_H = 0;			//가장 높은 기둥 높이

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> L >> H;
		arr[L] = H;

		if (max_H <= arr[L])
		{
			max_L = L;
			max_H = arr[L];
		}
	}

	//왼쪽 면 넓이
	int left = 0;
	for (int i = 0; i < max_L; i++)
	{
		left = max(left, arr[i]);
		answer += left;				//더 높은 기둥이 나올 때까지  
	}

	//오른쪽 면 넓이
	int right = 0;
	for (int i = 1000; i > max_L; i--)
	{
		right = max(right, arr[i]);
		answer += right;
	}

	cout << answer + max_H;

	return 0;
}
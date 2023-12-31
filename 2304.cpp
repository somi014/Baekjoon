#include <iostream>
#include <algorithm>

using namespace std;

int answer = 0;

int N = 0;				//�־��� ��� ����
int L = 0;				//����� ���� �� ��ġ
int H = 0;				//����� ����

int arr[1001];			//�� ����� ����
int max_L = 0;			//���� ���� ��� ��ġ
int max_H = 0;			//���� ���� ��� ����

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

	//���� �� ����
	int left = 0;
	for (int i = 0; i < max_L; i++)
	{
		left = max(left, arr[i]);
		answer += left;				//�� ���� ����� ���� ������  
	}

	//������ �� ����
	int right = 0;
	for (int i = 1000; i > max_L; i--)
	{
		right = max(right, arr[i]);
		answer += right;
	}

	cout << answer + max_H;

	return 0;
}
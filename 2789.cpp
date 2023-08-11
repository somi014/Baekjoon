//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//
//	int* arr = new int[N];
//	for (int i = 0; i < N; i++)
//	{
//		cin >> arr[i];
//	}
//
//	int max = 0;
//	int temp = 0;
//	for (int i = 0; i < N - 2; i++)
//	{
//		for (int j = i + 1; j < N - 1; j++)
//		{
//			for (int h = j + 1; h < N; h++)
//			{
//				temp = arr[i] + arr[j] + arr[h];
//				if (temp > max && temp <= M)
//				{
//					max = temp;
//				}
//			}
//		}
//	}
//	cout << max;
//
//	delete[] arr;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//int main(void)
//{
//	int N, n, count = 0;
//	cin >> N;
//
//	if (N % 5 == 0)
//	{
//		count = N / 5;
//	}
//	else
//	{
//		count = N / 5;
//		while (true)
//		{
//			if ((N - (count * 5)) % 3 == 0)
//			{
//				count += (N - (count * 5)) / 3;
//				break;
//			}
//			count--;
//
//			if (count < 0)
//			{
//				count = -1;
//				break;
//			}
//		}
//	}
//
//	cout << count;
//	return 0;
//}
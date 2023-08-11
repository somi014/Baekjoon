//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int solution(int bridge_length, int weight, vector<int> truck_weights) {
//	int answer = 0;
//
//	queue<int> lastWeight;
//	
//	int curCount = 0;			//다리 위에 올라간 트럭 수
//	int curWeight = 0;			//다리 위 트럭 총 무게
//	int i = 0;
//
//	bool full = false;
//	while (!full)
//	{
//		if (curCount == truck_weights.size())
//		{
//			answer += bridge_length;
//			full = true;
//			break;
//		}
//		answer++;
//
//		curWeight = truck_weights[i];
//
//		if (curCount < bridge_length)
//		{
//			if (truck_weights[i + 1] + curWeight <= weight)
//			{
//				curWeight += truck_weights[i + 1];
//				curCount++;
//			}
//			else
//			{
//				answer += curCount + bridge_length;
//			}
//		}
//		
//
//	}
//
//	return answer;
//}
//
//int main()
//{
//	vector<int> truck_weights_arr = vector<int>({ 7, 4, 5, 6 });
//	vector<int> truck_weights_arr2 = vector<int>({ 10, 10, 10, 10, 10, 10 ,10,10,10,10 });
//	vector<int> truck_weights_arr3 = vector<int>({ 10 });
//
//	int result = solution(2, 10, truck_weights_arr);
//	cout << result << endl;
//
//	cout << endl;
//	int result2 = solution(100, 100, truck_weights_arr2);
//	cout << result2 << endl;
//
//	cout << endl;
//	int result3 = solution(100, 100, truck_weights_arr3);
//	cout << result3 << endl;
//
//	return 0;
//}
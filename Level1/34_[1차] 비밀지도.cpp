#include <string>
#include <vector>
#include <bitset>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for(int i=0; i<n; i++)
	{
		int arr = arr1[i] | arr2[i];
		int targetBit = 1;
		string str = "";
		for(int j=0; j<n; j++)
		{
			str = ((arr & targetBit)>0 ? "#" : " ") + str;
			targetBit = targetBit << 1;
		}
        answer.emplace_back(str);
	}	
    
    return answer;
}

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int> > commands) {
    vector<int> answer;
    for(int p=0; p<commands.size(); ++p)
    {
    	vector<int> temp;
    	int i = commands[p][0];
    	int j = commands[p][1];
    	int k = commands[p][2];
    	for(int q=i-1; q<j; ++q)
    	{
    		temp.push_back(array[q]);
		}
		sort(temp.begin(), temp.end());
		answer.push_back(temp[k-1]);
	}
    return answer;
}

int main(void)
{
	// TEST
	// [1, 5, 2, 6, 3, 7, 4] [[2,5,3],[4,4,1],[1,7,3]]
	vector<int> array;
	array.push_back(1); array.push_back(5); array.push_back(2);
	array.push_back(6); array.push_back(3); array.push_back(7);
	array.push_back(4);
	vector<int> test1; test1.push_back(2); test1.push_back(5); test1.push_back(3); 
	vector<int> test2; test2.push_back(4); test2.push_back(4); test2.push_back(1);
	vector<int> test3; test3.push_back(1); test3.push_back(7); test3.push_back(3);
	vector<vector<int> > commands; 
	commands.push_back(test1); commands.push_back(test2); commands.push_back(test3);
	
	vector<int> answer = solution(array, commands);
	for(int i=0; i<answer.size(); ++i) cout << answer[i] << ' ';
	return 0;	
} 

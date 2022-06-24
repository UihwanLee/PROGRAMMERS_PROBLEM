#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> temp;
	for(int i=0; i<numbers.size(); ++i) {
		temp.push_back(numbers[i].str());
	} 
    return answer;
}

int main(void)
{
	// TEST
	// [6, 10, 2] 

	return 0;	
} 

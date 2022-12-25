#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <sstream>
#include <map>
#include <unordered_map>

using namespace std;


int main()
{
	string s = "banana";
	vector<int> answer;
    unordered_map<string, int> um;
    for(int i=0; i<s.length(); i++){
        auto iter = um.find(s[i]);
        if(iter != um.end())) {
            answer.emplace_back(i-iter->second);
            iter->second = i;
        }
        else {
            um.insert(pair<string, int>(s[i], i));
            answer.emplace_back(-1);
        }
    }
    
    for(int i=0; i<answer.size(); i++){
    	cout << answer[i] << " ";
	}
	
	return 0;
}

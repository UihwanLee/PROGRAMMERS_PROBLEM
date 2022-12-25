#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    unordered_map<char, int> um;
    for(int i=0; i<s.length(); i++){
        auto iter = um.find(s[i]);
        if(iter != um.end()) {
            answer.emplace_back(i-iter->second);
            iter->second = i;
        }
        else {
            um.insert(pair<char, int>(s[i], i));
            answer.emplace_back(-1);
        }
    }
    return answer;
}

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    
    for(const auto s : strlist)
    {
        answer.emplace_back(s.length());
    }
    
    return answer;
}

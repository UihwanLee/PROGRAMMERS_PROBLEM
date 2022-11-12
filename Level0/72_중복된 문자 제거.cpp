#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    vector<char> v;
    for(const auto e : my_string)
    {
        if(find(v.begin(), v.end(), e) != v.end()) continue;
        else
        {
            v.emplace_back(e);
            answer += e;
        }
        
    }
    return answer;
}

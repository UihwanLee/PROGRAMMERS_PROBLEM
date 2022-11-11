#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 0;
    answer = 2;
    for(const auto s : dic)
    {
        bool check = true;
        for(const auto c : spell)
        {
            if(s.find(c)==string::npos) check = false;
        }
        if(check) answer = 1;
    }
    return answer;
}

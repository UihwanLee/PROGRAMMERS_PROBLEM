#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int order) {
    int answer = 0;
    string ss = to_string(order);
    for(const auto c : ss)
    {
        string s = ""; s+=c;
        if(stoi(s)==0) continue;
        if(stoi(s) % 3 == 0 || s.find("3") != string::npos) answer++;
    }
    return answer;
}

#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string ss = "";
    int tmp = (s[0]=='-') ? 1 : 0;
    for(int i=tmp; i<s.size(); i++) ss += s[i];
    answer = (s[0]=='-') ? stoi(ss)*(-1) : stoi(ss);
    return answer;
}

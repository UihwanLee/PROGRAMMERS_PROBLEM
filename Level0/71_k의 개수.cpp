#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    for(int n=i; n<=j; n++)
    {
        string ss = to_string(n);
        for(const auto c : ss)
        {
            string s = "";
            s += c;
            if(s.find(to_string(k))!=string::npos) answer++;
        }
    }
    return answer;
}

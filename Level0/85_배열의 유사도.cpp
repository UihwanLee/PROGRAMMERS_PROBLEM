#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    for(const auto c1 : s1)
    {
        for(const auto c2 : s2)
        {
            if(c1==c2) answer++;
        }
    }
    return answer;
}

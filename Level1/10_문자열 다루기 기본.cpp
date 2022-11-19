#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    if(s.length()!=4 && s.length()!=6) answer = false;
    for(const auto e : s)
    {
        if(!isdigit(e)) answer = false;
    }
    return answer;
}

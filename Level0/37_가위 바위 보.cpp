#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    for(const auto e : rsp)
    {
        answer += (e - '0'==0) ? ("5") : ((e - '0'==2) ? ("0") : ("2"));
    }
    return answer;
}

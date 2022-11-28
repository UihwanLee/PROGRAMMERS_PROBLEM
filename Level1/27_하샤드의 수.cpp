#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    string ss = to_string(x); int SUM = 0;
    for(const auto n : ss) SUM += n - '0';
    answer = (x%SUM==0) ? true : false;
    return answer;
}

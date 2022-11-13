#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    string numlist = to_string(n);
    for(const auto k : numlist) answer += k - '0';
    return answer;
}

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(const auto e : my_string)
    {
        char c = ((int)e < 97) ? (char)((int)e+32) : e;
        answer += c;
    }
    sort(answer.begin(), answer.end());
    return answer;
}

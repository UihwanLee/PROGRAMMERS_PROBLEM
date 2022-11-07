#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    vector<char> v;
    for(const auto e : my_string) v.emplace_back(e);
    reverse(v.begin(), v.end());
    for(const auto e : v) answer += e;
    return answer;
}

#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    vector<string> alpa = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j"};
    for(const auto e : to_string(age))
    {
        answer += alpa[e-'0'];
    }
    return answer;
}

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    for(const auto e : my_string)
    {
        if(letter.find(e) == string::npos) answer += e;
    }
    return answer;
}

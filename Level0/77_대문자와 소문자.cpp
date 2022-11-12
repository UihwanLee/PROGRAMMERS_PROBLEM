#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    // a= 97 A=65
    for(const auto e : my_string)
    {
        answer += ((int)e>=97) ? (char)((int)e-32) : (char)((int)e+32);
    }
    return answer;
}

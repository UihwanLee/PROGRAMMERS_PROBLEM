#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    string s = to_string(n);
    for(const auto e : s)
    {
        answer += e - '0';
    }

    return answer;
}

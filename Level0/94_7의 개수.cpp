#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    for(const auto e : array)
    {
        string ss = to_string(e);
        for(const auto c : ss)
        {
            string s = ""; s+= c;
            if(s.find('7') != string::npos) answer++;
        }
    }
    return answer;
}

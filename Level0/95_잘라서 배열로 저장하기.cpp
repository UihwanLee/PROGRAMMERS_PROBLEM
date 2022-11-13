#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    string s = "";
    for(int i=0; i<my_str.length(); i++)
    {
        s += my_str[i];
        if((i+1)%n==0)
        {
            answer.emplace_back(s);
            s = "";
        }
        else if(i+1 == my_str.length()) answer.emplace_back(s);
    }
    return answer;
}

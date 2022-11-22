#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int index = 0;
    for(const auto c : s)
    {
        int num = (int)c;
        if(!((num>=65 && num<=90) || (num>=97 && num<=122))) 
        {
            answer += c;
            if(c==' ') index=0;
            continue;
        }
        char tmp;
        if(num<97)
        {
            tmp = (index%2==0) ? c : char(num+32);
        }
        else
        {
            tmp = (index%2==0) ? char(num-32) : c;
        }
        answer += tmp;
        index++;
    }
    return answer;
}

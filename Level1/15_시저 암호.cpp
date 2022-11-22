#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    bool check = false;
    for(const auto c : s)
    {
        int num = (int)c;
        if(!((num>=65 && num<=90) || (num>=97 && num<=122))) 
        {
            answer += c;
            continue;
        }
        int check = (num<97);
        if(check)
        {
            int tmp = (num+n>90) ? num+n-90 : 0;
            num = (tmp==0) ? num+n : 64+tmp;
        }
        else
        {
            int tmp = (num+n>122) ? num+n-122 : 0;
            num = (tmp==0) ? num+n : 96+tmp;
        }
        answer += (char)num;
    }
    return answer;
}

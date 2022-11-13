#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    int num;
    for(const auto s : quiz)
    {
        stringstream ss(s);
        ss >> num;
        
        char ch=' '; int tmp=0;
        while(ss)
        {
            if(ch=='+') num += tmp;
            if(ch=='-') num -= tmp;
            if(ch=='=') 
            {
                string a = (num==tmp) ? "O" : "X";
                answer.emplace_back(a);
            }
            ss >> ch >> tmp;
        }
    }
    return answer;
}

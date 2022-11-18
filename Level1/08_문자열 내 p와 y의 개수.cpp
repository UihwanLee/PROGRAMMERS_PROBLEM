#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p=0, y=0;
    for(const auto c : s)
    {
        if(c=='p' || c=='P') p++;
        if(c=='y' || c=='Y') y++;
    }
    
    answer = (p==0 && y==0) ? true : (p==y) ? true : false;
    return answer;
}

#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> v;
    vector<string> stack;
    
    stringstream ss(s);
    string temp;
    while(getline(ss, temp, ' ')) v.emplace_back(temp);
    
    for(int i=0; i<v.size(); i++)
    {
        stack.emplace_back(v[i]);
        if(v[i]=="Z")
        {
            stack.pop_back();
            if(stack.size()>=1) stack.pop_back();
        }

    }
    
    for(const auto e : stack)
    {
        answer += stoi(e);
    }
    return answer;
}

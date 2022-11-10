#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string s;
    vector<string> v;
    
    for(const auto e : my_string)
    {
        s += (int(e)<65) ? e : ' ';
    }
    
    stringstream ss(s);
    string temp;
    while(getline(ss, temp, ' ')) v.emplace_back(temp);
    
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]!="") answer += stoi(v[i]);
    }
    
    return answer;
}

#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    vector<string> poly;
    vector<string> ans;
    int x=0, num=0; 
    
    stringstream ss(polynomial);
    string temp;
    while(getline(ss, temp, ' ')) poly.emplace_back(temp);
    
    for(int i=0; i<poly.size(); i++)
    {
        if(poly[i]=="+") continue;
        int idx = poly[i].find("x");
        if(idx!=string::npos)
        {
            poly[i].replace(idx, 1, "");
            x += (poly[i]=="") ? 1 : stoi(poly[i]);
        }
        else
        {
            num += stoi(poly[i]);
        }
    }
    answer += (x==0) ? "" : (x==1) ? "x" : (to_string(x) + "x");
    answer += (x==0 || num==0) ? "" : " + ";
    answer += (num==0) ? "" : to_string(num);
    
    return answer;


#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    for(int i=0; i<seoul.size(); i++)
    {
        if(seoul[i].find("Kim")!=string::npos)
        {
            answer = "�輭���� " + to_string(i) + "�� �ִ�";
            break;
        }
    }
    return answer;
}

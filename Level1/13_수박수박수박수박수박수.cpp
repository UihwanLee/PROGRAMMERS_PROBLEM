#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    vector<string> s = {"¼ö", "¹Ú"};
    for(int i=0; i<n; i++)
    {
        answer += s[i%2];
    }
    return answer;
}

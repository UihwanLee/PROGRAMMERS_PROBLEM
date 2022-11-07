#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    vector<string> v = { "a", "e", "i", "o", "u" };
    int idx;
    
    for(char &s : my_string)
    {
        for(int i=0; i<v.size(); i++)
            {
                while(1)
                {
                    idx = my_string.find(v[i]);
                    if(idx == string::npos) break;
                    my_string.replace(idx, v[i].length(), "");
                }
            }
    }
    
    answer = my_string;
    
    return answer;
}

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> um;
    for(const auto e : completion){
        if(um.find(e)!=um.end()){
            um[e]++;
        }
        um.insert(make_pair(e, 1));
    }
    
    for(const auto e : participant){
        if(um.find(e)!=um.end()) {
            um[e]--;
            if(um[e]<0){
                answer = e;
                break;
            }
        } else{
            answer = e;
            break;
        }
    }
    return answer;
}

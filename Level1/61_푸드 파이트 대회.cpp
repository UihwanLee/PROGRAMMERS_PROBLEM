#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string pattern = "";
    vector<int> count;
    for(int i=1; i<food.size(); i++){
        int temp = 0;
        if(food[i]>=2) temp = food[i]/2;
        for(int j=0; j<temp; j++){
            pattern += to_string(i);
        }
    }
    
    answer = pattern;
    reverse(pattern.begin(), pattern.end());
    answer += "0" + pattern;
    return answer;
}

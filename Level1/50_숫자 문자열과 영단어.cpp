#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string s) {
    int answer = 0;
    int i;
    vector<string> nums = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    while(true){
        int idx;
        for(i=0; i<nums.size(); i++){
            idx = s.find(nums[i]);
            if(idx == string::npos) break;
            s.replace(idx, s.length(), to_string(i));
        }
        
        if(idx == string::npos) break;
    }
    //answer = stoi(s);
    return answer;
}

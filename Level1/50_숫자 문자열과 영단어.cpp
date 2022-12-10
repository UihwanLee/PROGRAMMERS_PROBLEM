#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string s) {
    int answer = 0;
    int i;
    vector<string> nums = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    int idx;
    for(i=0; i<nums.size(); i++){
        while((idx = s.find(nums[i])) != string::npos){
            s.replace(idx, nums[i].length(), to_string(i));
        }
    }
    answer = stoi(s);
    return answer;
}

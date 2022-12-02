#include <string>
#include <vector>
#include <algorithm>
#define PICK 2

using namespace std;

vector<int> comb(PICK);
vector<int> answer;

void Solution(vector<int> nums, int index, int depth){
    if(depth == PICK){
        int sum = 0;
        for(int i=0; i<comb.size(); i++){
            sum += comb[i];
        }
        
        if(answer.empty() || find(answer.begin(), answer.end(), sum)==answer.end())
            answer.emplace_back(sum);
    } else {
        for(int i=index; i < nums.size(); i++){
            comb[depth] = nums[i];
            Solution(nums, i+1, depth+1);
        }
    }
}

vector<int> solution(vector<int> numbers) {
    vector<int> comb(PICK);
    Solution(numbers, 0, 0);
    sort(answer.begin(), answer.end());
    return answer;
}

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    
    for(auto interval : intervals) {
        for(int i=interval[0]; i<=interval[interval.size()-1]; i++) {
            answer.emplace_back(arr[i]);
        }
    }
    
    return answer;
}

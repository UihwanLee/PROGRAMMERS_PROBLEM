#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int start = 0, end = num_list.size()-1;
    int temp;
    while(start<end)
    {
        temp = num_list[start];
        num_list[start] = num_list[end];
        num_list[end] = temp;
        
        start++;
        end--;
    }
    answer = num_list;
    return answer;
}

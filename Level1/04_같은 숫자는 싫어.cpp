#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    int index = 0;
    answer.emplace_back(arr[0]);
    for(const auto n : arr)
    {
        if(answer[index]!=n)
        {
            answer.emplace_back(n);
            index++;
        }
    }

    return answer;
}

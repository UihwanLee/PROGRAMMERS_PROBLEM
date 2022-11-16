#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    vector<int> v; int index=0;
    sort(nums.begin(), nums.end());
    v.emplace_back(nums[0]);
    for(const auto n : nums)
    {
    	if(v[index]!=n)
        {
            v.emplace_back(n);
            index++;
        }
	}
    
	answer = (v.size() > (nums.size()/2)) ? nums.size()/2 : v.size();
    return answer;
}

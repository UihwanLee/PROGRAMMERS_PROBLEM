#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    bool check; 
    // 등차 an = a + (n-1)d
    // 등비 an = a * d^(n-1)
    int a = common[0], n = common.size()+1, d;
    check = (common[2]-common[1]==common[1]-a) ? true : false;
    if(check)
    {
        d = common[1]-a;
        answer = a + (n-1)*d;
    }
    else
    {
        d = common[1]/a;
        answer = a * pow(d, n-1);
    }
    return answer;
}

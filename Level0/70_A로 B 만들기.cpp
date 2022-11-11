#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string before, string after) {
    int answer = 0;
    bool check = true;
    sort(before.begin(), before.end());
    sort(after.begin(), after.end());

    for(int i=0; i<before.length(); i++)
    {
        if(before[i]!=after[i]) check = false;
    }

    answer = (check) ? 1 : 0;
    return answer;
}

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int count=0;
    while(count < n)
    {
        answer++;
        if(answer%3!=0 && to_string(answer).find('3')==string::npos) count++;
    }
    return answer;
}

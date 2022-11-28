#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    if(num==1) answer = 0;
    long long tmp = (long long)num;
    while(true)
    {
        if(tmp==1 || answer>=500) break;
        
        if(tmp%2==0) tmp = tmp/2;
        else tmp = tmp*3+1;
        answer++;
    }
    if(answer>=500) answer = -1;
    return answer;
}

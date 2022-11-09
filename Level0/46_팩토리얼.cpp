#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int i=0, f=1;
    do
    {
        i++;
        f *= i;
    }while(f<=n);
    answer = i-1;
    return answer;
}

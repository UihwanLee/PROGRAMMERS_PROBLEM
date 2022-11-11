#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int T=2, N=min(a,b);
    while(T<=N)
    {
        if(a==1 || b==1) break;
        
        if(a%T==0 && b%T==0)
        {
            a=a/T; b=b/T;
            if(a==1 || b==1) break;
        }
        else
        {
            T++;
        }
    }
    while(1)
    {
        if(b==1) break;
        if(b%2!=0 && b%5!=0) break;
        if(b%2==0) b=b/2;
        if(b%5==0) b=b/5;
    }
    answer = (b==1) ? 1 : 2;
    return answer;
}

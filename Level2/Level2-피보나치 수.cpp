#include <string>
#include <vector>

using namespace std;

int memo[100001]= {};
int fibo(int n)
{
    if(memo[n]!=0) return memo[n];
    if(n==1||n==2) return memo[n]=1;
    else return memo[n]=(fibo(n-1)+fibo(n-2))%1234567;
}

int solution(int n) {
    int answer = 0;
    answer = (fibo(n-1) % 1234567 + fibo(n-2) % 1234567) % 1234567;
    return answer;
}

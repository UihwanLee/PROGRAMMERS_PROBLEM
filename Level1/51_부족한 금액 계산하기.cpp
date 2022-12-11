using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    for(int i=1; i<=count; i++){
        answer += i * price;
    }
    answer = (answer<=money) ? 0 : answer-money;
    return answer;
}

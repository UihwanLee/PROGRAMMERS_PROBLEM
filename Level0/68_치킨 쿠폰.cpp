#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = -1;
    int cupon = 0;
    do
    {
        // 1081 -> cupon=108, chick=109 -> cupon=10, chick=19 -> cupon=1, chick=10 -> cupon=2, chcick=1
        cupon += chicken/10;
        chicken = chicken/10 + chicken%10;
    }while(chicken>=10);
    answer = cupon;
    return answer;
}

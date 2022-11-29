#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int cnt_p1=0, cnt_p2=0, cnt_p3=0, cnt_max=0;
    vector<int> p1 = {1, 2, 3, 4, 5};
    vector<int> p2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> p3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    for(int i=0; i<answers.size(); i++){
        if(answers[i] == p1[i%p1.size()]) cnt_p1++;
        if(answers[i] == p2[i%p2.size()]) cnt_p2++;
        if(answers[i] == p3[i%p3.size()]) cnt_p3++;
    }
    
    cnt_max = (cnt_p1>=cnt_p2 && cnt_p1>=cnt_p3) ? cnt_p1 : (cnt_p2>=cnt_p1 && cnt_p2>=cnt_p3) ?  cnt_p2 : cnt_p3;
    if(cnt_max==cnt_p1) answer.emplace_back(1);
    if(cnt_max==cnt_p2) answer.emplace_back(2);
    if(cnt_max==cnt_p3) answer.emplace_back(3);
    return answer;
}

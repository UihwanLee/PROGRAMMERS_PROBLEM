#include <string>
#include <vector>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "RCJA";
    int R=0, T=0, C=0, F=0, J=0, M=0, A=0, N=0;
    for(int i=0; i<survey.size(); i++){
        string test = survey[i];
        int choice = choices[i];
        
        // i) R T 유형 검사
        if(test[0]=='R') (choice>=4) ? T+=choice%4 : R+=4-choice;
        else if(test[0]=='T') (choice>=4) ? R+=choice%4 : T+=4-choice;
        
        // ii) C F 유형 검사
        if(test[0]=='C') (choice>=4) ? F+=choice%4 : C+=4-choice;
        else if(test[0]=='F') (choice>=4) ? C+=choice%4 : F+=4-choice;
        
        // iii) J M 유형 검사
        if(test[0]=='J') (choice>=4) ? M+=choice%4 : J+=4-choice;
        else if(test[0]=='M') (choice>=4) ? J+=choice%4 : M+=4-choice;
        
        // iv) A N 유형 검사
        if(test[0]=='A') (choice>=4) ? N+=choice%4 : A+=4-choice;
        else if(test[0]=='N') (choice>=4) ? A+=choice%4 : N+=4-choice;
    }
    // 각 성격 유형 점수가 같으면, 두 성격 유형 중 사전 순으로 빠른 성격 유형 -> 성격 유형
    if(R<T) answer.replace(0, 1, "T");
    if(C<F) answer.replace(1, 1, "F");
    if(J<M) answer.replace(2, 1, "M");
    if(A<N) answer.replace(3, 1, "N");
    return answer;
}

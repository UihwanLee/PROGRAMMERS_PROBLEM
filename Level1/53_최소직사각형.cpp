#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int a=0, b=0;
    
    for(int i=0; i<sizes.size(); i++){
        for(int j=0; j<2; j++){
            if(sizes[i][0]<sizes[i][1]){
                int temp = sizes[i][0];
                sizes[i][0] = sizes[i][1];
                sizes[i][1] = temp;
            }
            if(sizes[i][0]>a) a = sizes[i][0];
            if(sizes[i][1]>b) b = sizes[i][1];
        }
    }
    answer = a * b;
    return answer;
}

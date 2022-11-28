#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    
    vector<int> score;
	int index = -1;
	string tmp = "";
	
	for(const auto c : dartResult)
	{
		if(isdigit(c)) 
		{
			tmp += c;
		}
		else
		{
			if(tmp!="") 
			{
				index++;
				score.emplace_back(stoi(tmp));
				tmp = "";
			}
			
			if(c=='S') score[index] = score[index];
			if(c=='D') score[index] = pow(score[index], 2);
			if(c=='T') score[index] = pow(score[index], 3);
			
			
			if(c=='*')
			{
				if(index==0)
				{
					score[index] = score[index]*2;
				}
				else
				{
					score[index] = score[index]*2;
					score[index-1] = score[index-1]*2;
				}
			}
			
			
			if(c=='#')
			{
				score[index] = score[index] * (-1);
			}
		}
	} 
	
	for(int i=0; i<score.size(); i++) answer += score[i];
    
    return answer;
}

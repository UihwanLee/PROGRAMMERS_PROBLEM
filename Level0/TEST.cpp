#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <sstream>

using namespace std;

int main()
{
	vector<string> babbling = { "ayaye", "uuuma", "ye", "yemawoo", "ayaa"};
	int answer = 0;
    int idx;
    vector<string> v = {"aya", "ye", "woo", "ma"};
    
    for(int i=0; i<babbling.size(); i++)
    {
        for(int j=0; j<v.size(); j++)
        {
            while(1)
            {
                idx = babbling[i].find(v[j]);
                if(idx==string::npos) 
				{
					break;
				}
				babbling[i].replace(idx, v[j].length(), "#");
            }
        }
    }


    bool check;
    for(const auto s : babbling)
    {
        check = true;
        for(const auto c : s)
        {
            if(c!='#') check=false;
        }
        if(check) answer++;
    }
	cout << answer;

    return 0;
}

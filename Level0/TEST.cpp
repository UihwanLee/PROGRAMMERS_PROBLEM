#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	int answer = 0;
    bool check = true;
    string before = "olleh", after="hello"; 
    sort(before.begin(), before.end());
    sort(after.begin(), after.end());
    
    for(int i=0; before.length(); i++)
    {
        if(before[i]!=after[i]) check = false;
    }

    answer = (check) ? 1 : 0;
    
    cout << answer;
    
    return 0;
}

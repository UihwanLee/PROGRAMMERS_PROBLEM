#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	int i=1, j=13, k=1;
	int answer = 0;
    for(int n=i; n<=j; n++)
    {
        if(to_string(n).find(to_string(k))!=string::npos) 
		{
			cout << n << endl;
			answer++;
		}
    }
    cout << answer;
    
    return 0;
}

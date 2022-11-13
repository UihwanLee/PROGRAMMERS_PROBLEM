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
	string my_string = "4 + 5 - 2";
	int answer = 0; 
	
	stringstream ss(my_string);
	ss >> answer;
	
	char ch; int tmp=0;
	while(ss)
	{
		if(ch==)
		ss >> ch >> tmp;
	}


    return 0;
}

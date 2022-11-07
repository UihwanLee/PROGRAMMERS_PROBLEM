#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string letter) {
    string answer = "";
    vector<string> mos = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    vector<string> mos_letter;
    
    stringstream ss(letter);
    string temp;
    while(getline(ss, temp, ' ')) mos_letter.emplace_back(temp);
    
    
    for(const auto e : mos_letter)
    {
        for(int i=0; i<mos.size(); i++)
        {
            if(e==mos[i]) answer += char(i+97);
        }
    }
    
    return answer;
}

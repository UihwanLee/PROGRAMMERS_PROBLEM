#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string letter = ".... . .-.. .-.. ---";
    string answer = "";
    vector<string> mos = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
 
    for(int i=0; i<mos.size(); i++)
    {
        while(1)
        {
            int idx = letter.find(mos[i]);
            if(idx == string::npos) break;
            string str; str += char(i+97);
            letter.replace(idx, mos[i].length(), str);
        }
    }

    
    answer = letter;
    cout << answer;
    
    return 0; 
}

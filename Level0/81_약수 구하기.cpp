#include <string>
#include <vector>

using namespace std;

int Partition(vector<int> list, int start, int end)
{
    int temp, pivot = list[end];
    int index =  start;
    
    for(int i=start; i<end; i++)
    {
        if(list[i]<pivot)
        {
            temp = list[i];
            list[i] = list[index];
            list[index] = temp;
            index++;
        }
    }
    
    temp = list[index];
    list[index] = list[end];
    list[end] = temp;
    
    return index;
}

void QuickSort(vector<int> list, int start, int end)
{
    if(start<end)
    {
        int p = Partition(list, start, end);
        
        QuickSort(list, start, p-1);
        QuickSort(list, p+1, end);
    }
}

vector<int> solution(int n) {
    vector<int> answer;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0) answer.emplace_back(i);
    }
    QuickSort(answer, 0, answer.size()-1);
    return answer;
}

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> sorted_emergency = emergency;
    
    
    sort(sorted_emergency.begin(), sorted_emergency.end(), greater<int>());
    
    for (int i = 0; i < emergency.size(); i++)
    {
        auto it = find(sorted_emergency.begin(), sorted_emergency.end(),emergency[i]);
        int rank = distance(sorted_emergency.begin(), it) + 1;
        answer.push_back(rank);
    }
    
    return answer;
}

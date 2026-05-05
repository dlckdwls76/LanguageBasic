#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list)
{
    vector<int> answer(2, 0);
    
    for(int num : num_list)
    {
        if (num % 2 == 0) {
            answer[0]++;
        } else {
            answer[1]++;
        }
    }
    
    return answer;
}

int main() {
    // 테스트 케이스 1
    vector<int> num_list1 = {1, 2, 3, 4, 5};
    vector<int> result1 = solution(num_list1);
    cout << "1 : [" << result1[0] << ", " << result1[1] << "]\n";

    // 테스트 케이스 2
    vector<int> num_list2 = {1, 3, 5, 7};
    vector<int> result2 = solution(num_list2);
    cout << "2: [" << result2[0] << ", " << result2[1] << "]\n";

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2)
{
    vector<int> answer;
    
    for (int i = num1; i <= num2; i++)
    {
        answer.push_back(numbers[i]);
    }
    
    return answer;
}

int main(void)
{
    // 테스트를 위한 원본 배열과 자를 인덱스 설정
    vector<int> numbers = {10, 20, 30, 40, 50}; 
    int num1 = 1;
    int num2 = 3;

    // solution 함수 호출하여 결과 받기
    vector<int> result = solution(numbers, num1, num2);

    cout << "array cut : ";
    // 결과 배열(result)에 있는 숫자들을 하나씩 꺼내서 출력
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
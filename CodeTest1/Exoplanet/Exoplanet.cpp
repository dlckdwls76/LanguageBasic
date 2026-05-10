#include <iostream>
#include <string>

using namespace std;


string solution(int age)
{
    string answer = "";
    
    string alpha ="abcdefghij";
    
    string str_age = to_string(age);
    
    for (int i = 0; i < str_age.size(); i++)
    {
        int num = str_age[i] - '0';
        
        answer += alpha[num];
    }
    
    return answer;
}
int main(void) {
    // 테스트 해보기! (프로그래머스 입출력 예시 적용)
    int test1 = 23;
    int test2 = 51;
    int test3 = 100;

    cout << "--- 외계인 나이 변환 테스트 ---" << endl;
    cout << test1 << "age -> " << solution(test1) << " (answer: cd)" << endl; 
    cout << test2 << "age -> " << solution(test2) << " (answer: fb)" << endl; 
    cout << test3 << "age -> " << solution(test3) << " (answer: baa)" << endl; 

    return 0;
}


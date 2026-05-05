#include <iostream>
#include <string>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    
    for (char ch : my_string) {
        for (int i = 0; i < n; i++) {
            answer += ch;
        }
    }
    
    return answer;
}

int main() {
    // 테스트 케이스 실행
    string input_str = "hello";
    int repeat_n = 3;
    
    string result = solution(input_str, repeat_n);
    
    cout << "input string : " << input_str << ",for : " << repeat_n << endl;
    cout << "return : " << result << endl;
    
    // 기대 결과와 비교
    if (result == "hhheeellllllooo") {
        cout << "test clear" << endl;
    } else {
        cout << "test fail..." << endl;
    }
    
    return 0;
}
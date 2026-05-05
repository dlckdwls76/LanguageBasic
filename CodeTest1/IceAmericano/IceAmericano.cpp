/*머쓱이는 추운 날에도 아이스 아메리카노만 마십니다. 
 *아이스 아메리카노는 한잔에 5,500원입니다. 
 *머쓱이가 가지고 있는 돈 money가 매개변수로 주어질 때, 
 *머쓱이가 최대로 마실 수 있는 아메리카노의 잔 수와 남는 돈을 순서대로 담은 배열을 
 *return 하도록 solution 함수를 완성해보세요.

제한사항
0 < money ≤ 1,000,000

입출력 예
money	result
5,500	[1, 0]
15,000	[2, 4000]

입출력 예 설명

입출력 예 #1
5,500원은 아이스 아메리카노 한 잔을 살 수 있고 잔돈은 0원입니다.
입출력 예 #2
15,000원은 아이스 아메리카노 두 잔을 살 수 있고 잔돈은 4,000원입니다.

step1. 몫과 나머지를 저장하는 배열생성
step2. money/5,500을 했을때 몫과 나머지를 저장


*/

#include <iostream>
#include <vector>

using namespace std;

// 테스트를 위한 함수 구현
vector<int> solution(int money) {
    vector<int> answer;
    
    const int PRICE = 5500; // 가격을 변수로 두면 관리가 편해요.
    
    int count = money / PRICE;    // 몫: 마실 수 있는 잔 수
    int change = money % PRICE;   // 나머지: 남은 돈
    
    answer.push_back(count);
    answer.push_back(change);
    
    return answer;
}

int main() {
    // 테스트 케이스 예시
    int testMoney = 15000;
    vector<int> result = solution(testMoney);
    
    // 결과 출력
    cout << "입력 돈: " << testMoney << endl;
    cout << "잔 수: " << result[0] << ", 잔돈: " << result[1] << endl;
    
    return 0;
}
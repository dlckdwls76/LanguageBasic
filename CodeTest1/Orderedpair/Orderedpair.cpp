#include <iostream>
#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0) { // i가 n의 약수라면
            answer++; //순서쌍 하나( i, n/i) 추가
        }
    }
    return answer;
}

int main()
{
    cout << solution(10) << endl;
    
}
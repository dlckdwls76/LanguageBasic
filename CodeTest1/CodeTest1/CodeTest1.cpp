

#include <iostream>

using namespace std;

int solution(int price) {
    int answer = 0;
    
    if (price >= 500000) {
        answer = price * 0.8;
    } 
    else if (price >= 300000) {
        answer = price * 0.9;
    } 
    else if (price >= 100000) {
        answer = price * 0.95;
    } 
    else {
        answer = price;
    }
    
    return answer;
}

int main()
{
    cout << solution(5000) << endl;
    cout << solution(100000) << endl;
    cout << solution(200000) << endl;
    
    
}
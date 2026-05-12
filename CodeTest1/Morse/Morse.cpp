#include <iostream>  // 입출력을 위해 추가
#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

map<string, char> mp;
string arr[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",
                ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
                "...","-","..-","...-",".--","-..-","-.--","--.."};


string solution(string letter)
{
    string answer = "";
    string str="";
    stringstream ss(letter);
    char c='a';
    
    for(int i=0; i<26; i++)
        mp[arr[i]]=c+i;
    
    while(ss >> str){
        answer+=mp[str];
    }
    
    return answer;
}

// 
int main()
{
    // 테스트해 볼 모스 부호 (예: "hello")
    string test_morse = ".... . .-.. .-.. ---"; 
    
    // solution 함수 실행
    string result = solution(test_morse);
    
    // 결과 출력
    cout << "result : " << result << endl;
    
    return 0;
}
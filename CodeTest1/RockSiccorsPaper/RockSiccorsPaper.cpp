#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    for (int i = 0; i < rsp.length(); i++)
    {
        
        if (rsp[i] == '2') //가위라면 바위
        {
            answer += '0';
            
        }        
    else if (rsp[i] == '0') //바위라면 보
    {
        answer += '5';
        
    }
    else if (rsp[i] == '5') //보라면 가뷔
    {
        answer += '2';
        
    }
}
    
    return answer;
}
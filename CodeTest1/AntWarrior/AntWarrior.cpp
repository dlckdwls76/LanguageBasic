#include <string>
#include <vector>

using namespace std;

int solution(int hp)
{
int answer = 0;
    
    answer +=(hp/5);
    hp%=5; //hp = hp % 5;
    answer +=(hp/3);
    hp%=3;
    
    answer +=hp; //answer = answer + hp;
}

int main(int argc, char* argv[])
{
    
    return 0;
}

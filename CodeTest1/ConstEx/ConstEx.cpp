#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    // ==========================================
    // [1. 선언] & [2. 초기화]
    // ==========================================
    // const 변수는 선언과 동시에 반드시 초기화해야 합니다.
    // (PI는 실수를 담기 위해 double로 수정했습니다)
    const double PI = 3.14;
    const int A = 10;
    const int B = 20;


    // ==========================================
    // [3. 변경]
    // ==========================================
    // 기본적으로 아래와 같은 일반적인 대입은 '컴파일 에러'를 발생시킵니다.
    // PI = 3.14159; (X)
    // A = 15;       (X)

    // 억지로 값을 변경하려면 const_cast와 포인터를 사용해 const 잠금을 해제해야 합니다.
    double* ptrPI = const_cast<double*>(&PI);
    *ptrPI = 3.14159; // 강제 변경!

    int* ptrA = const_cast<int*>(&A);
    *ptrA = 15;       // 강제 변경!

    int* ptrB = const_cast<int*>(&B);
    *ptrB = 25;       // 강제 변경!


    // ==========================================
    // [4. 출력]
    // ==========================================
    cout << "--- 1. 일반 변수처럼 출력 시도 ---" << endl;
    cout << "PI: " << PI << endl;
    cout << "A: " << A << endl;
    cout << "B: " << B << endl;
    // ⚠️ 주의: 컴파일러의 '최적화' 때문에 A를 출력해도 15가 아닌 원래 값 10이 나올 수 있습니다.
    // 컴파일러가 "어차피 const니까 안 변했겠지!" 하고 처음 값(10)을 그냥 박아버리기 때문입니다.

    cout << "\n--- 2. 포인터로 메모리 직접 출력 ---" << endl;
    cout << "*ptrPI: " << *ptrPI << endl;
    cout << "*ptrA: " << *ptrA << endl;
    cout << "*ptrB: " << *ptrB << endl;
    // 여기서는 우리가 강제로 변경한 3.14159, 15, 25가 정확히 출력됩니다.

    return 0;
}

#include <iostream>
using namespace std;

#define MAX_VAL 1100;

class A
{
public:
    int Val = 0;

public:
    // 맴버함수의 상수화( 내부 변수들에 값을 바꿀 수 없다 )
    void MyFunc(int inK) const
    {
    }


};

void MyFunc(int inK)
{
    const int X = inK; // 런타임 상수
    constexpr int Y = 50; // const인데 좀 더 엄격한 규정. => 런타임 상수로는 못쓴다.
}

int main()
{
    // 리터럴(literals) 상수
    A objA;
    objA.MyFunc(100);
    int A = MAX_VAL;

    // 변수를 상수화 시키고 싶다.

    // const의 특징 //

    // 1) const변수는 선언 + 초기화를 해줘야 한다.
    const int B = 10; // 컴파일 타임 상수
    // 2) 일반 변수는 자료형 앞,뒤 어디에 오든 똑같다.
    int const C = 10;

  
    char szString[] = "Hello"; // 문자열 리터럴
    char szString2[] = "Bye";

    const char* ptr = szString; // 처음에는 "Hello"를 가리킴
    ptr = szString2; // "Bye"를 가리킴 
    //ptr[0] = 'Q'; // 값 변경 불가능 X
    
    char* const ptr2 = szString; // 처음에만 "Hello"를 가리킴
    //ptr2 = szString2; // 가리킬 수 없음 X
    ptr2[0] = 'Q'; //값 변경 가능 O "Qello"가됨



   
}


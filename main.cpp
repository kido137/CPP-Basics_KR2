#include <iostream>

using namespace std;
// 함수

// Factorial
// 수학에서, 자연수의 계승 또는 팩토리얼은 그 수보다 작거나 같은 모든 양의 정수의 곱이다.
// n이 하나의 자연수일 때, 1에서 n까지의 모든 자연수의 곱을 n에 상대하여 이르는 말이다.


int Factorial(int _iNum)
{
	int iValue = 1;

	for (int j = 0; j < _iNum - 1; ++j)
	{

		iValue *= (j + 2);
	}
	return iValue;
}

// 모듈화

// 스택 메모리 영역
// 함수가 리턴될떄 연산장치(CPU)레지스터 메모리 에 임시 저장된다.


// 재귀함수
// 가독성, 구현의 용이
// 단점, 속도가 느리다.


// 함수 안에서 자기 자신을 호출하는 것을 재귀 함수라고 한다.
// 새로운 스택 메모리 영역을 생성해서 작업한다.
// 스택 오버플로워 재귀함수를 잘못쓰면 생기는 대표적인 오류이다.(스택 메모리 영역을 다 사용하여 공간이 모자르면 생긴다.)


// 재귀함수 팩토리얼
int Factorial_Re(int _iNum)
{
	if (1 == _iNum)
	{
		return 1;
	}

	return _iNum * Factorial_Re(_iNum - 1);
}

// 피보나치 수열
// 1 1 2 3 5 8 13 21 34 55.....
int Fibonacci(int _iNum)
{
	if (1 == _iNum || 2 == _iNum)
	{
		return 1;
	}

	int iPrev1 = 1;
	int iPrev2 = 1;
	int iValue = 0;

	for (int i = 0; i < _iNum - 2; ++i)
	{
		iValue = iPrev1 + iPrev2;
		iPrev1 = iPrev2;
		iPrev2 = iValue;
	}
	return iValue;
}
// 꼬리재귀

// 재귀함수 피보나치 수열
int Fibonacci_Re(int _iNum)
{
	if (1 == _iNum || 2 == _iNum)
	{
		return 1;
	}
	return Fibonacci_Re(_iNum - 1) + Fibonacci_Re(_iNum - 2);
}


int main()
{
	int iValue = Factorial(4);

	cout << iValue << endl;

	iValue = Factorial(10);

	cout << iValue << endl;

	// 지역변수(함수 안에 선언되어있는 함수)

	iValue = Factorial_Re(8);

	cout << iValue << endl;

	iValue = Fibonacci(10);

	cout << iValue << endl;

	iValue = Fibonacci_Re(8);

	cout << iValue << endl;





	// 배열
	// 배열은 메모리가 연속적인 구조이다.

	int iArray[10] = { }; // { } 공백은 그 자리에 0 이 들어있다.

	iArray[4] = 10;
	// 배열의 인덱스는 0부터 시작한다. 5 번쨰에 10을 넣는다. 최대 접근할수 있는 인덱스는 9 까지이다.

	// 배열이 수를 침범을 해버리면 다른 변수의 값이 바뀔수 있다.

	return 0;
}
#include <iostream>

using namespace std;
// �Լ�

// Factorial
// ���п���, �ڿ����� ��� �Ǵ� ���丮���� �� ������ �۰ų� ���� ��� ���� ������ ���̴�.
// n�� �ϳ��� �ڿ����� ��, 1���� n������ ��� �ڿ����� ���� n�� ����Ͽ� �̸��� ���̴�.


int Factorial(int _iNum)
{
	int iValue = 1;

	for (int j = 0; j < _iNum - 1; ++j)
	{

		iValue *= (j + 2);
	}
	return iValue;
}

// ���ȭ

// ���� �޸� ����
// �Լ��� ���ϵɋ� ������ġ(CPU)�������� �޸� �� �ӽ� ����ȴ�.


// ����Լ�
// ������, ������ ����
// ����, �ӵ��� ������.


// �Լ� �ȿ��� �ڱ� �ڽ��� ȣ���ϴ� ���� ��� �Լ���� �Ѵ�.
// ���ο� ���� �޸� ������ �����ؼ� �۾��Ѵ�.
// ���� �����÷ο� ����Լ��� �߸����� ����� ��ǥ���� �����̴�.(���� �޸� ������ �� ����Ͽ� ������ ���ڸ��� �����.)


// ����Լ� ���丮��
int Factorial_Re(int _iNum)
{
	if (1 == _iNum)
	{
		return 1;
	}

	return _iNum * Factorial_Re(_iNum - 1);
}

// �Ǻ���ġ ����
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
// �������

// ����Լ� �Ǻ���ġ ����
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

	// ��������(�Լ� �ȿ� ����Ǿ��ִ� �Լ�)

	iValue = Factorial_Re(8);

	cout << iValue << endl;

	iValue = Fibonacci(10);

	cout << iValue << endl;

	iValue = Fibonacci_Re(8);

	cout << iValue << endl;





	// �迭
	// �迭�� �޸𸮰� �������� �����̴�.

	int iArray[10] = { }; // { } ������ �� �ڸ��� 0 �� ����ִ�.

	iArray[4] = 10;
	// �迭�� �ε����� 0���� �����Ѵ�. 5 ������ 10�� �ִ´�. �ִ� �����Ҽ� �ִ� �ε����� 9 �����̴�.

	// �迭�� ���� ħ���� �ع����� �ٸ� ������ ���� �ٲ�� �ִ�.

	return 0;
}
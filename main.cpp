#include <iostream>

int main()
{
	int a{ 1 };	// a�� 100������ �ִٰ� ����

	int* p{ &a }; // a�� ����Ŵ

	std::cout << p << std::endl;	// p = 100����
	std::cout << p + 1 << std::endl; // p + 1 = 100���� + 4

	// ������ ������ + 1 = p + sizeof(int)

	std::cout << p + 2 << std::endl; // p + 2 = 100���� + 8

	// ������ ������ + 2 = p + sizeof(int) + sizeof(int)

	std::cout << p - 1 << std::endl; // p - 1 = 100���� - 4

	// p++;, p--; ���� ���µ� �翬�� �����ϴ�


	char myCharacter{ 'a' };

	char* pt = { &myCharacter };
	
	std::cout << pt + 1 << std::endl;	// 100���� + 1
	std::cout << pt + 2 << std::endl;   // 100���� + 2
}

// �׷���
// std::cout << p * 1 << std::endl;
// std::cout << p / 1 << std::endl;
// ���� ���� ���µ��� �ȵȴ�.


// ������ ������ ������ ���ϱ�, ���� ���길 �����ϴ�.


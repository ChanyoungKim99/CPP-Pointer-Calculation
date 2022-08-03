#include <iostream>

int main()
{
	int a{ 1 };	// a가 100번지에 있다고 가정

	int* p{ &a }; // a를 가리킴

	std::cout << p << std::endl;	// p = 100번지
	std::cout << p + 1 << std::endl; // p + 1 = 100번지 + 4

	// 포인터 연산의 + 1 = p + sizeof(int)

	std::cout << p + 2 << std::endl; // p + 2 = 100번지 + 8

	// 포인터 연산의 + 2 = p + sizeof(int) + sizeof(int)

	std::cout << p - 1 << std::endl; // p - 1 = 100번지 - 4

	// p++;, p--; 같은 형태도 당연히 가능하다


	char myCharacter{ 'a' };

	char* pt = { &myCharacter };
	
	std::cout << pt + 1 << std::endl;	// 100번지 + 1
	std::cout << pt + 2 << std::endl;   // 100번지 + 2
}

// 그러나
// std::cout << p * 1 << std::endl;
// std::cout << p / 1 << std::endl;
// 위와 같은 형태들은 안된다.


// 포인터 연산은 오로지 더하기, 빼기 연산만 가능하다.


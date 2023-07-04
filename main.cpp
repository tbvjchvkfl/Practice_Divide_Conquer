#include<iostream>


// 1번 문제
void Question1(int input, char start, char temp, char end);

// 2번 문제
void Question2(int input, char start, char temp, char end);

// 3번 문제
void Question3(int input, char start, char temp, char end, int &count);
void Move(int input, char start, char end, int& count);




int main()
{
	//1, 2번 문제 용 입/출력
	std::cout << "하노이의 탑 게임" << std::endl;
	std::cout << "원반의 개수를 입력하세요" << std::endl;
	
	int n{};
	std::cin >> n;

	//// 1번 문제
	//Question1(n, 'a', 'b', 'c');

	//// 2번 문제
	//Question2(n, 'A', 'B', 'C');

	// 3번 문제
	int count = 0;
	Question3(n, 'A', 'B', 'C', count);
		
	

	
}

// 1번 문제
void Question1(int input, char start, char temp, char end)
{
	if (input == 1)
	{
		std::cout << start << "에서" << end << "로 이동했습니다." << std::endl;
	}
	
	Question1(input, start, end, temp);
	std::cout << start << "에서" << end << "로 이동했습니다." << std::endl;
	Question1(input, temp, start, end);
}

// 2번 문제
void Question2(int input, char start, char temp, char end)
{
	if (input == 1)
	{
		std::cout << "원반" << input << "을(를)" << start << "에서" << end << "로 이동했습니다." << std::endl;
		return;
	}
	Question2(input - 1, start, end, temp);
	std::cout << "원반" << input << "을(를)" << start << "에서" << end << "로 이동했습니다." << std::endl;
	Question2(input - 1, temp, start, end);
}

// 3번 문제
// 이동했다라는 것을 표현하는 출력을 함수로 묶는다.
// 임의의 변수를 생성하여 함수가 실행될 때마다 해당 변수의 값을 더해준다.
// 해당 변수의 값을 출력한다.
void Question3(int input, char start, char temp, char end, int &count)
{
	if (input == 1)
	{
		
		Move(input, start, end, count);
		return;
	}

	Question3(input - 1, start, end, temp,count);
	Move(input, start, end, count);
	Question3(input - 1, temp, start, end,count);
}

void Move(int input, char start, char end, int& count)
{
	count++;
	std::cout << "원반" << input << "을(를)" << start << "에서" << end << "로 이동했습니다." << count << std::endl;
}
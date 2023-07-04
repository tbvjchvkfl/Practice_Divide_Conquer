#include<iostream>


// 1�� ����
void Question1(int input, char start, char temp, char end);

// 2�� ����
void Question2(int input, char start, char temp, char end);

// 3�� ����
void Question3(int input, char start, char temp, char end, int &count);
void Move(int input, char start, char end, int& count);




int main()
{
	//1, 2�� ���� �� ��/���
	std::cout << "�ϳ����� ž ����" << std::endl;
	std::cout << "������ ������ �Է��ϼ���" << std::endl;
	
	int n{};
	std::cin >> n;

	//// 1�� ����
	//Question1(n, 'a', 'b', 'c');

	//// 2�� ����
	//Question2(n, 'A', 'B', 'C');

	// 3�� ����
	int count = 0;
	Question3(n, 'A', 'B', 'C', count);
		
	

	
}

// 1�� ����
void Question1(int input, char start, char temp, char end)
{
	if (input == 1)
	{
		std::cout << start << "����" << end << "�� �̵��߽��ϴ�." << std::endl;
	}
	
	Question1(input, start, end, temp);
	std::cout << start << "����" << end << "�� �̵��߽��ϴ�." << std::endl;
	Question1(input, temp, start, end);
}

// 2�� ����
void Question2(int input, char start, char temp, char end)
{
	if (input == 1)
	{
		std::cout << "����" << input << "��(��)" << start << "����" << end << "�� �̵��߽��ϴ�." << std::endl;
		return;
	}
	Question2(input - 1, start, end, temp);
	std::cout << "����" << input << "��(��)" << start << "����" << end << "�� �̵��߽��ϴ�." << std::endl;
	Question2(input - 1, temp, start, end);
}

// 3�� ����
// �̵��ߴٶ�� ���� ǥ���ϴ� ����� �Լ��� ���´�.
// ������ ������ �����Ͽ� �Լ��� ����� ������ �ش� ������ ���� �����ش�.
// �ش� ������ ���� ����Ѵ�.
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
	std::cout << "����" << input << "��(��)" << start << "����" << end << "�� �̵��߽��ϴ�." << count << std::endl;
}
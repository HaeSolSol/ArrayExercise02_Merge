#include <iostream>

int main()
{
	char input1[255]{}, input2[255]{}, output[511]{};
	int changePoint;

	std::cout << "input : ";
	std::cin >> input1 >> input2;

	for (int i = 0; i < 255; ++i)
	{
		if (input1[i] != '\0')
		{
			output[i] = input1[i];
			continue;
		}
		else
		{
			changePoint = i;
			break;
		}
	}

	for (int i = 0; i < 255; ++i)
	{
		if (input2[i] != '\0')
		{
			output[changePoint + i] = input2[i];
			continue;
		}
		else
		{
			break;
		}
	}

	std::cout << "output : " << output << std::endl;
}
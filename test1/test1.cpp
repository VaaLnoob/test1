// test1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

//Ввод сендвича
std::string writeString()
{
	std::cout << "Введите сендвич: ";
	std::string sendwich;
	getline(std::cin, sendwich);
	return sendwich;
}

int main()
{
	std::setlocale(LC_ALL, "rus");
errorLengthLayerThree:
errorSintThree:
errorSint:
errorLengthLayer:
errorLength:
errorSintOne:

	std::string sendwich = writeString();
	int arrayString = sendwich.length();
	/* Условия:
	* 1) Сендвич не должен иметь длину меньше чем - 3
	* 2) Начинка не может быть похожа на слой и наоборот
	* 3) Слои сендвича должны быть идентичными
	* 
	* 
	*/
	if (arrayString > 3)
	{
		for (int array = 0; array <= arrayString; array++)
		{
			if (sendwich[array] == sendwich[--arrayString])
			{
				if (sendwich[arrayString / 2] != sendwich[0])
				{
					if (arrayString == 3)
					{
						if (sendwich[(arrayString / 2) + 1] != sendwich[0])
						{
							std::cout << "Ваш сендвич: " << sendwich << std::endl;
							break;
						}
						else
						{
							std::cout << "Начинка не может быть похожа на слой!!!" << std::endl;
							goto errorSintOne;
						}
					}
				}
				else
				{
					std::cout << "Начинка не может быть похожа на слой!!!" << std::endl;
					goto errorSint;
				}
			}
			else
			{
				std::cout << "Первый и последний слой не равны!!!" << std::endl;
				goto errorLengthLayer;
			}
		}
	}
	else if(arrayString == 3)
	{
		if (sendwich[0] != sendwich[1])
		{
			if (sendwich[0] == sendwich[2])
			{
				std::cout << "Ваш сендвич: " << sendwich << std::endl;
			}
			else
			{
				std::cout << "Первый и последний слой не равны!!!" << std::endl;
				goto errorLengthLayerThree;
			}
		}
		else
		{
			std::cout << "Начинка не может быть похожа на слой!!!" << std::endl;
			goto errorSintThree;
		}
	}
	else
	{
		std::cout << "Ваш сендвич слишком короткий, длина не меньше - 3!!!" << std::endl;
		goto errorLength;
	}
	return 0;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

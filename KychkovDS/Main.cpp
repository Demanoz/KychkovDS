#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));




	  

	
	
	return 0;
}

/*	int choose = 0, randomNumber = 0, hp = 0, number = 0;
	int maxHp = 25, maxHpHard = 25, chance = 30;

while (true)
	{
		system("cls");
		std::cout << "\n\n\n\t\t Игра \"Угадай число\"\n\n\n";
		std::cout << "1 - Начать игру\n";
		std::cout << "2 - Настройки\n";
		std::cout << "0 - Выход\n\n";
		std::cout << "Выберите число: ";
		std::cin >> choose;

		if (choose == 1)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\t Выберите уровень сложности \n\n\n";
				std::cout << "1 - Лёгкий (1 - 500)\n";
				std::cout << "2 - Сложный (1 - 5000)\n";
				std::cout << "0 - Выход в главное меню\n\n";
				std::cout << "Выберите число: ";
				std::cin >> choose;

				if (choose == 1)
				{ 
					randomNumber = rand() % 500 + 1;
					hp = maxHp;

					while (true)
					{
						system("cls");
						std::cout << "Кол-во жизей: " << hp << "\n";
						std::cout << "Введите число от 1 до 500: ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << "Вы угадали! Подздравляем!\n";

							system("pause");
							break;
						}
						else if (number < 1 || number > 500)
						{
							std::cout << "Вы вышли за лимиты\n";
							Sleep(1000);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы проиграли! \n";
								std::cout << "Загаданное число было: " << randomNumber << "\n\n";
								system("pause");
								break;
							}
							std::cout << "\nНе верно\n";
							std::cout << "Кол-во жизней: " << hp << "\n";
							std::cout << "Взять подсказку за одну жизнь?\n";
							std::cout << "1 - Да\nЛюбое число - Нет\nВвод: ";
							std::cin >> choose;
							
							if (choose == 1)
							{
								hp--;
								if (hp <= 0)
								{
									std::cout << "Вы проиграли! \n";
									std::cout << "Загаданное число было: " << randomNumber << "\n\n";
									system("pause");
									break;
								}
								if (number < randomNumber)
								{
									std::cout << "Ваше число меньше числа компьютера\n";
								}
								else
								{
									std::cout << "Ваше число Больше числа компьютера\n";
								}
								Sleep(1500);
							}
							else
							{
								std::cout << "Отказ от подсказки";
								Sleep(500);
							}
						}	
					}
				}
				else if (choose == 2)
				{
					randomNumber = rand() % 5000 + 1;
					hp = maxHpHard;


					while (true)
					{
						system("cls");
						std::cout << "Кол-во жизей: " << hp << "\n";
						std::cout << "Введите число от 1 до 5000: ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << "Вы угадали! Подздравляем!\n";

							system("pause");
							break;
						}
						else if (number < 1 || number > 5000)
						{
							std::cout << "Вы вышли за лимиты\n";
							Sleep(1000);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы проиграли! \n";
								std::cout << "Загаданное число было: " << randomNumber << "\n\n";
								system("pause");
								break;
							}
							std::cout << "\nНе верно\n";
							std::cout << "Кол-во жизней: " << hp << "\n";
							std::cout << "Взять подсказку за одну жизнь?\n";
							std::cout << "1 - Да\nЛюбое число - Нет\nВвод: ";
							std::cin >> choose;

							if (choose == 1)
							{


								if (rand () % 101 <=  chance)
								{
									std::cout << "Бесплатная подсказка\n";
									Sleep(1000);
								}
								else
								{
									hp--;
									if (hp <= 0)
									{
										std::cout << "Вы проиграли! \n";
										std::cout << "Загаданное число было: " << randomNumber << "\n\n";
										system("pause");
										break;
									}
								}
								if (number < randomNumber)
								{
									std::cout << "Ваше число меньше числа компьютера\n";
								}
								else
								{
									std::cout << "Ваше число Больше числа компьютера\n";
								}
								Sleep(1500);
							}
							else
							{
								std::cout << "Отказ от подсказки";
								Sleep(500);
							}
						}
					}
				}
				else if (choose == 0)
				{

					break;
				}
				else
				{
					std::cout << "\nНекореектный ввод\n";
					Sleep(1500);
				}
			}
		}
		else if (choose == 2)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\t Игра \"Настройки игры\"\n\n\n";
				std::cout << "1 - Изменить кол-во жизней для лёгкой игры\n";
				std::cout << "2 - Изменить кол-во жизней для тяжёлой игры\n";
				std::cout << "3 - Изменить шанс беслптаной подсказки\n\n";
				std::cout << "0 - Выход\n\n";
				std::cout << "Выберите число: ";
				std::cin >> choose;

				if (choose == 1)
				{
					while (true)
					{
						std::cout << "Введите кол-во жизней для лёгкой игры: ";
						std::cin >> choose; 
						if (choose < 1 || choose > 100)
						{
							std::cout << "Допустимое значение от 1 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно!\n";
							maxHp = choose;
							Sleep(1500);
							break;
						}
					}
				}
				else if (choose == 2)
				{
					while (true)
					{
						std::cout << "Введите кол-во жизней для сложной игры: ";
						std::cin >> choose;
						if (choose < 1 || choose > 100)
						{
							std::cout << "Допустимое значение от 1 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно!\n";
							maxHpHard = choose;
							Sleep(1500);
							break;
						}
					}
				}
				else if (choose == 3)
				{
					while (true)
					{
						std::cout << "Введите шанс бесплатной подсказки для сложной игры: ";
						std::cin >> choose;
						if (choose < 0 || choose > 100)
						{
							std::cout << "Допустимое значение от 0 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно!\n";
							chance = choose;
							Sleep(1500);
							break;
						}
					}
				}
				else if (choose == 0)
				{
					std::cout << "Некорректный ввод\n";
					Sleep(1000);
				}
				else
				{

				}

			}
		}
		else if (choose == 0)
		{
			system("cls");
			std::cout << "\n\n\n\t\t Спасибо за игру! \n\n\n";
			break;
		}
		else
		{
			std::cout << "\nНекореектный ввод\n";
			Sleep(1500);
		}
	}*/

/*
double a = 4.3;
float b = 4.3f;

if (a == b)
{
	std::cout << "Seva";
}


int c{ 3 }; 

if (a == 0)
{
	std::cout << "Hello\n"; 
}
else if (a != 0)
{
	std::cout << 2;
}
else if (a != 10)
{
	std::cout << 2;
}
else
{
	std::cout << 1;
}

std::cin >> a >> b;
std::cout << a << " " << b;
*/

/*int a = 0;
int b = 0;
char c = 0;

std::cout << "Введите первое число ";
std::cin >> a;
std::cout << "Введите знак (-,+,/,*) ";
std::cin >> c;
std::cout << "Введите второе число ";
std::cin >> b;

if (c == '+')
{
	std::cout << a + b;
}  
else if (c == '-')
{
	std::cout << a - b;
}
else if (c == '*')
{
	std::cout << a * b;
}
else if (c == '/')
{
	if (b != 0)
	{
		std::cout << "Частное: " << a / b <<"/n";
	}
	else
	{
		std::cout << "На ноль делить нельзя";
	}
}
else
{
	std::cout << "Что-то пошло не так ";
}*/

/*double a = 0, b = 0, c = 0, d = 0, x1 = 0, x2 = 0;

std::cout << "Решение полного квадратного уравнения\n\n";
std::cout << "ax^2 + bx + c = 0\n\n";
std::cout << "Введите А: ";
std::cin >> a;
std::cout << "Введите B: ";
std::cin >> b;
std::cout << "Введите C: ";
std::cin >> c;

std::cout << "\n" << a << "x^2 + " << b << "x + " << c << " = 0\n\n";

d = std::pow(b, 2) - 4 * a * c;

std::cout << "\nДискриминант: " << b << "\n\n";

if (d < 0)
{
	std::cout << "Нет корней\n";
}
else if (d == 0)
{
	x1 = -b / (2*a);
	std::cout << "Один корень :" << x1 << "\n\n";
}
else
{
	x1 = (-b + std::sqrt(d)) / (2 * a);
	x1 = (-b - std::sqrt(d)) / (2 * a);
	std::cout << "Один корень :" << x1 << "\n";
	std::cout << "Второй корень :" << x2 << "\n\n";
}*/
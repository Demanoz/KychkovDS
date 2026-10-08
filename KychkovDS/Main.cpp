#include <iostream>
#include <Windows.h>


int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	double apple = 100, orange = 80, abr = 130, pear = 150;
	double tomat = 200, onion = 50, cucumber = 55;
	double garlic = 70, petr = 101; 
	int choose = 0, Sum = 0, choose_kategory, kolvo = 0;

	while (true)
	{
		system("cls");
		std::cout << "\n\n\n\t\t Магазин \"Соки Севы\"\n\n\n";
		std::cout << "\n\t Выберите категорию\n\n";
		std::cout << "1. Фруктовые напитки\n";
		std::cout << "2. Овощные напитки\n";
		std::cout << "3. Чаи\n";
		std::cout << "0. Выход\n\n";
		std::cout << "Сумма к оплате: " << Sum << "\n";
		std::cout << "Выберите число: ";
		std::cin >> choose;

			if (choose == 1)
				while(true)
				{
			{
				system("cls");
				std::cout << "\n\n\n\t\t Фруктовые напитки \n\n\n";
				std::cout << "1 - Яблочный  100р\n";
				std::cout << "2 - Апельсиновый  80р\n";
				std::cout << "3 - Абрикосовый  130р\n";
				std::cout << "4 - Грушевый  150р\n";
				std::cout << "0 - Выход\n\n";
				std::cout << "Сумма к оплате: " << Sum << "\n";
				std::cout << "Выберите число: ";
				std::cin >> choose_kategory;

				if (choose_kategory == 1)
				{
					std::cout << "Выберите количество товара: ";
					std::cin >> kolvo;
					Sum = Sum + (apple * kolvo);
				}
				else if (choose_kategory == 2)
				{
					std::cout << "Выберите количество товара: ";
					std::cin >> kolvo;
					Sum = Sum + (orange * kolvo);
				}
				else if (choose_kategory == 3)
				{
					std::cout << "Выберите количество товара: ";
					std::cin >> kolvo;
					Sum = Sum + (abr * kolvo);
				}
				else if (choose_kategory == 4)
				{
					std::cout << "Выберите количество товара: ";
					std::cin >> kolvo;
					Sum = Sum + (pear * kolvo);
				}
				else if (choose_kategory == 0)
				{
					break;
				}
				else
				{
					std::cout << "Некорректный ввод, введите повторно: ";
					std::cin >> choose_kategory;
				}
			}
		}

			if (choose == 2)
				while (true)
				{
			{
				system("cls");
				std::cout << "\n\n\n\t\t Овощные напитки \n\n\n";
				std::cout << "1 - Томатный  200р\n";
				std::cout << "2 - Луковый  50р\n";
				std::cout << "3 - Огуречный  55р\n";
				std::cout << "0 - Выход\n\n";
				std::cout << "Сумма к оплате: " << Sum << "\n";
				std::cout << "Выберите число: ";
				std::cin >> choose_kategory;

				if (choose_kategory == 1)
				{
					std::cout << "Выберите количество товара: ";
					std::cin >> kolvo;
					Sum = Sum + (tomat * kolvo);
				}
				else if (choose_kategory == 2)
				{
					std::cout << "Выберите количество товара: ";
					std::cin >> kolvo;
					Sum = Sum + (onion * kolvo);
				}
				else if (choose_kategory == 3)
				{
					std::cout << "Выберите количество товара: ";
					std::cin >> kolvo;
					Sum = Sum + (cucumber * kolvo);
				}
				else if (choose_kategory == 0)
				{
					break;
				}
				else
				{
					std::cout << "Некорректный ввод";
					std::cin >> choose_kategory;
				}
			}
		}


			if (choose == 3)
				while (true)
				{
					{
						system("cls");
						std::cout << "\n\n\n\t\t Чаи \n\n\n";
						std::cout << "1 - Чесночный  70р\n";
						std::cout << "2 - Петрушевый 101р\n";
						std::cout << "0 - Выход\n\n";
						std::cout << "Сумма к оплате: " << Sum << "\n";
						std::cout << "Выберите число: ";
						std::cin >> choose_kategory;

						if (choose_kategory == 1)
						{
							std::cout << "Выберите количество товара: ";
							std::cin >> kolvo;
							Sum = Sum + (onion * kolvo);
						}
						else if (choose_kategory == 2)
						{
							std::cout << "Выберите количество товара: ";
							std::cin >> kolvo;
							Sum = Sum + (petr * kolvo);
						}
						else if (choose_kategory == 0)
						{
							break;
						}
						else
						{
							std::cout << "Некорректный ввод";
							std::cin >> choose_kategory;
						}
					}
				}

			if (choose == 0)
			{
				std::cout << "Спасибо за посещение нашего магазина!";
				Sleep(1500);
				system("cls");
				break;
			}
	}


	
		

	return 0;
}




/*
тип_возврата Имя_Функции (агрументы_функции, ...)
{
	тело_функции
}
*/ 

/*void PrintHellow()
{
	int a = 0;
	std::cout << "Hellow\n";
}

void PrintNum(int number)
{
	number += 100;
	if (number > 0)
	{
		return;
	}

	std::cout << number << "\n";
}

int Sum(int one, int two)
{
	return 1123;
}*/

/*double plus(double a, double b)
{
	return a + b;
}

double minys(double a, double b)
{
	return a - b;
}

double ymnog(double a, double b)
{
	return a * b;
}

double delit(double a, double b)
{
	return a / b;
}
*/

/*double MyPow(double num1, double num2)
{	
	double result = num1;
	for (double i = 1; i < num2; i++)
	{
		result = result * num1;
	}
	return result;
}*/

/*void PrintArr(int name[], int lenght)
{
	for (int i = 0; i < lenght; i++)
	{
		std::cout << name[i] << "";
	}
}

void SetArr(int name[], int lenght)
{
	for (int i = 0; i < lenght; i++)
	{
		name[i] = rand() % 6;
	}
}*/

/*int Sum(int one, int two)
{
	return one + two;
}

double Sum(double one, double two)
{
	return one + two;
}

double Sum(double one, int two)
{
	return one + two;
}*/

/*int FillArray(int name[], int lenght)
{
	for (int i = 0; i < lenght; i++)
	{
		name[i] = rand() % 8;
	}
}

double FillArray(double name[], int lenght)
{
	for (int i = 0; i < lenght; i++)
	{
		name[i] = rand() % 8;
	}
}

char FillArray(char name[], int lenght)
{
	for (int i = 0; i < lenght; i++)
	{
		name[i] = rand() % 8;
	}
}

void ShowArray(int name[], int lenght)
{
	for (int i = 0; i < lenght; i++)
	{
		std::cout << name[i] << " ";
	}
}*/

/*void PrintArray(double arr[], int size);
void PrintArray(char arr[], int size);

template <typename T1>
T1 Dimitry(T1 one, T1 two)
{
	return one - two;
}



int Fak(int num, int two)
{
	if (num 0 and two > 0)
	{
		return 0;
	}
	if (num == 0)
	{
		return 1;
	}
	return num * Fak(num - 1);
}*/

/*int ymn(int one, int two)
{
	if (two == 0)
	{
		return 0;
	}
	return one + ymn(one, two - 1);
}*/

/*	Dimitry(3.4, 4.6);
	Dimitry(3, 4);*/

/*	const int size = 5; 
	int arr[size]{};
	SetArr(arr, size);
	PrintArr(arr, size);*/

/*	double num1 = 0;
	double num2 = 0;

	std::cout << "Введите число которое вы хотите возвести в степень: ";
	std::cin >> num1;
	std::cout << "Введите степень: ";
	std::cin >> num2;
	std::cout << "Результат: " << MyPow(num1, num2);*/

/*	int a = Sum(5, 10);

	std::cout << Sum(5, Sum(5, a);*/

/*	double a = 0;
	double b = 0;
	char c = 0;

	std::cout << "Введите первое число ";
	std::cin >> a;
	std::cout << "Введите знак (-,+,/,*) ";
	std::cin >> c;
	std::cout << "Введите второе число ";
	std::cin >> b;

	if (c == '+')
	{
		std::cout << "Сумма: " << plus(a, b);
	}
	else if (c == '-')
	{
		std::cout << "Разность: " << minys(a, b);
	}
	else if (c == '*')
	{
		std::cout << "Произведение: " << ymnog(a, b);
	}
	else if (c == '/')
	{
		if (b != 0)
		{
			std::cout << "Частное: ", delit(a, b), "/n";
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

/*	const int row = 3, col = 4;

	int arr[row][col];
	int sum = 0;

	for (int i = 0; i < row; i++)
	{
		sum = 0;
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;
			sum += arr[i][j];
			std::cout << arr[i][j] << " ";
		}
		std::cout << "|\t" << sum << "\n";
	}*/

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
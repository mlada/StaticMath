//MathLibrary.h
#include <string>
 #include <list>

#pragma once
namespace MathLibrary
{
	
	class Arithmetic
	{
	public:
		// произведение ненулевых компонентов массива v, индексы которых хранятся в массиве ind
		static int Func1(std::list<int> a, std::list<int> b);

		// Функция получает одномерный массив целых переменных. Вычисляет и 
		// возвращает минимальный по значению элемент этого массива и номер его
		// индекса.
		static std::string Func2(std::list<int> a);

		// Функция получает одномерный массив вещественных переменных.
		// В полученном массиве функция переставляет значения компонентов массива в обратном порядке.
		static std::string Func3(std::list<double> a);
	};
}

//MathLibrary.cpp
#include "MathLibrary.h"
#include <string>
#include <list>

namespace MathLibrary
{
	int Arithmetic::Func1(std::list<int> a, std::list<int> b)
	{
		int sizeA = a.size();
		int sizeB = b.size();
		int res = 1;
		for (int i = 0; i < sizeA; ++i)
		{
			if (!a.empty() && a.front() != 0)
			{
				for (int j = 0; j < sizeB; ++j)
				{
					if (!b.empty() && b.front() == i) {
						res *= a.front();
						b.pop_front();
					}
				}
				a.pop_front();
			}
		}
		return res;
	}

	std::string Arithmetic::Func2(std::list<int> a)
	{
		int sizeA = a.size();
		int val = a.front();
		int index = 0; 
		for (int i = 0; i < sizeA; ++i)
		{
			if (a.front() <= val) {
				val = a.front();
				index = i;
			}
			a.pop_front();
		}
		return std::to_string(val) + "; " + std::to_string(index);
	}

	std::string Arithmetic::Func3(std::list<double> a)
	{
		int sizeA = a.size();
		std::string b = "";
 		for (int i = 0; i < sizeA; ++i)
		{
			b += std::to_string(a.back()) + ";";
			a.pop_back();
		}
		return b;
	}

}
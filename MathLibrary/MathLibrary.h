//MathLibrary.h
#include <string>
 #include <list>

#pragma once
namespace MathLibrary
{
	
	class Arithmetic
	{
	public:
		// ������������ ��������� ����������� ������� v, ������� ������� �������� � ������� ind
		static int Func1(std::list<int> a, std::list<int> b);

		// ������� �������� ���������� ������ ����� ����������. ��������� � 
		// ���������� ����������� �� �������� ������� ����� ������� � ����� ���
		// �������.
		static std::string Func2(std::list<int> a);

		// ������� �������� ���������� ������ ������������ ����������.
		// � ���������� ������� ������� ������������ �������� ����������� ������� � �������� �������.
		static std::string Func3(std::list<double> a);
	};
}

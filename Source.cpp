#include <iostream>
#include <array>
#include <algorithm>
#include <conio.h>

using namespace std;

const size_t CakupanArray = 16;

void CetakArray(std::array<int, CakupanArray>& Angka) {
	std::cout << "Array : ";
	for (int &A : Angka)
	{
		std::cout << A << " ";
	}
	std::cout << std::endl;
}

void CetakArray(std::array<char, CakupanArray>& Angka) {
	std::cout << "Array : ";

	for (char &A : Angka)
	{
		std::cout << A << " ";
	}
	std::cout << std::endl;
}

int main() {
	std::array<int, CakupanArray>Angka = { 4,2,5,7,2,4,5,5,7,2,4,3,1,9,7,3 };
	std::array<char, CakupanArray> Huruf = { 'R','I','Z','K','Y',' ','K','H','A','P','I','D','S','Y','A','H' };

	CetakArray(Angka);
	CetakArray(Huruf);

	std::cout << std::endl;

	std::sort(Angka.begin(), Angka.end());
	CetakArray(Angka);

	std::sort(Huruf.begin(), Huruf.end());
	CetakArray(Huruf);

	_getch();
	return 0;
}
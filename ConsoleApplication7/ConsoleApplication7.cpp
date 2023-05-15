// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
class Road {
public:
	double length;  int width;   FILE* fIn;
	Road(int newWidth, double newLength);
	void print();
};

Road::Road(int newWidth, double newLength) {
	length = newLength;
	width = newWidth;
}
void Road::print() {
	fIn = fopen("input.txt", "r");
	fscanf(fIn, "%lf %d", &length, &width);
	fclose(fIn);
}

using namespace std;
int main() {
	Road a(2, 100.0);
	a.print();
	cout << "Constructor's values : " << "\n";
	cout << "Road width is " << a.width << "\n";
	cout << "Road length is " << a.length << "\n";
	a.length = 300.0;
	a.width = 3;
	cout << "Main's values : " << "\n";
	cout << "Road width is " << a.width << "\n";
	cout << "Road length is " << a.length;
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

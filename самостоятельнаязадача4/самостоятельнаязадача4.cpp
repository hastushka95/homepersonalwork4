// самостоятельнаязадача4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;

#include <iostream>

int main()
{
	float way1, way2, weight, rashod, waymax, raznisarashod, way3, rashod2;
	int vbaka = 300;
	cout << "enter 1 way in km \n";
	cin >> way1;
	cout << " eneter way2 in km \n";
	cin >> way2;
	cout << "weight of gruz\n";
	cin >> weight;
	if (weight > 2000) {
		cout << " its weight not possible \n";
	}
	if (weight <= 500) {
		rashod = 1;
		waymax = vbaka / rashod;
		cout << " max way\n" << waymax<<"\n";
	}
	if (weight >= 501 && weight <= 1000) {
		rashod = 4;
		waymax = vbaka / rashod;
		cout << "way max\n" << waymax<<"\n";
	}
	if (weight >= 1001 && weight <= 1500) {
		rashod = 7;
		waymax = vbaka / rashod;
		cout << "waymax \n" << waymax<<"\n";
	}
	if (weight >= 1501 && weight <= 2000) {
		rashod = 9;
		waymax = vbaka / rashod;
		cout << "waymax\n " << waymax<<"\n";
	}
	cout << "calculate rashod topliva for going point b\n";
	if (waymax < way1) {
		cout << " its not enough for full way\n";
	}
	if (waymax >= way1) {
		cout << "its enough for going to point b\n";
			raznisarashod= waymax-way1;
			cout << "more km over for fly\n" << raznisarashod << "\n";
}
	cout << " calculate rashod topliva for going point c\n";
	way3 = way2 - raznisarashod;
	cout << " need more for \n" << way3<<"\n";

	if (waymax < way3) {
		cout << "not enought for ending\n";

	}
	if (waymax >= way3){
		rashod2 = way3/ rashod;
		cout << " enough for ending\n"<< "need more put liers: \n"<<rashod2;
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

// Matrix.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class matrix
{
public:
	void show() {
		for (int i = 0; i < s1; i++)
		{
			for (int k = 0; k < s2; k++)
			{
				cout << matrix1[i][k] << " ";
			}
			cout << endl;
		}
	}
	void enter() {
		char sign;
		cout << "Enter size of matrix (a,b): ";
		cin >> s1 >> sign >> s2;
		for (int i = 0; i < s1; i++)
		{
			for (int k = 0; k < s2; k++)
			{
				cout << "Enter number " << i + 1 << k + 1 << " in matrix: ";
				cin >> matrix1[i][k];
			}
		}
	}
	matrix operator* (matrix B) {
		matrix C;
		for (int i = 0; i < s1; i++)
		{
			for (int k = 0; k < B.s2; k++)
			{
				C.matrix1[i][k] = 0;
				for (int l = 0; l < s2; l++)
				{
					C.matrix1[i][k] += (matrix1[i][l] * B.matrix1[l][k]);
				}
			}
		}
		C.s1 = s1;
		C.s2 = s2;
		return C;

	}

private:
	int matrix1[10][10];
	int s1, s2;
};

int main()
{
    /*cout << "Enter size of matrix A(a,b): ";
	int matrixa[10][10];
	int matrixb[10][10];
	int matrixc[10][10];
	int a, b, c, d;
	char sign;
	cin >> a >> sign >> b;
	cout << "Enter size of matrix B(a,b): ";
	cin >> c >> sign >> d;
	if (b != c)
		exit(0);
	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k < b; k++)
		{
			cout << "Enter number " << i + 1 << k + 1 << " in matrix A: ";
			cin >> matrixa[i][k];
		}
	}
	for (int i = 0; i < c; i++)
	{
		for (int k = 0; k < d; k++)
		{
			cout << "Enter number " << i + 1 << k + 1 << " in matrix B: ";
			cin >> matrixb[i][k];
		}
	}

	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k < d; k++)
		{
			matrixc[i][k] = 0;
			for (int l = 0; l < b; l++)
			{
				matrixc[i][k] += (matrixa[i][l] * matrixb[l][k]);
			}
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k < d; k++)
		{
			cout << matrixc[i][k] << " ";
		}
		cout << endl;
	}*/
	matrix a, b;
	a.enter();
	b.enter();
	matrix c;
	c = a * b;
	c.show();
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

#include<iostream>

using namespace std;

class Valor
{
	friend void setValX(Valor &, int);
public:
	Valor()
	{
		x = 10;
	};
	void imprimir() const
	{
		cout << "X = " << x << endl;
	}

private:
	int x;
};

void setValX(Valor &v, int valor)
{
	v.x = valor;
};

int main()
{
	Valor val;
	val.imprimir();

	setValX(val, 40);
	val.imprimir();

	system("pause");

	return 0;
}
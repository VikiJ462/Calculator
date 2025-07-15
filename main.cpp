#include <iostream>
float Soucet(float x, float y)
{
	std::cout << "Ve funkci Soucet(), prijato " << x << " a " << y << "\n";
	return x + y;
}
float Odecet(float x, float y)
{
	std::cout << "Ve funkci Odecet(), prijato " << x << " a " << y << "\n";
	return x - y;
}
float Soucin(float x, float y)
{
	std::cout << "Ve funkci Soucin(), prijato " << x << " a " << y << "\n";
	return x * y;
}
float Podil(float x, float y)
{
	std::cout << "Ve funkci Podil(), prijato " << x << " a " << y << "\n";
	return x / y;
}

int main()
{
	using std::cout;
	using std::cin;


	cout << "Ve funkci main()!\n";
	float a, b, c, d, e, f;
	cout << "Vlozte dve cisla: ";
	cin >> a;
	cin >> b;
	cout << "\nVolani funkce Soucet()\n";
	c = Soucet(a, b);
	cout << "\nVolani funkce Odecet()\n";
	d = Odecet(a, b);
	cout << "\nVolani funkce Soucin()\n";
    e = Soucin(a, b);
    cout << "\nVolani funkce Podil()\n";
    f = Podil(a, b);
	cout << "\nZpet ve funkci main().\n";
	cout << "Soucet je " << c << "\n";
	cout << "Rozdil je " << d << "\n";
    cout << "Soucin je " << e << "\n";
    cout << "Podil je " << f << "\n";
	cout << "\nKonec...\n\n";
	char reakce;
	std::cin >> reakce;
	return 0;
}

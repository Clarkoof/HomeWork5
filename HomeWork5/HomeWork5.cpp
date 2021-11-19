// HomeWork5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Animal
{
public:
	virtual void Voice() const = 0;
	
};

class Dog : public Animal
{
public:
	void Voice() const override
	{
		std::cout << "Dog Woof\n";
	}

};

class Cat : public Animal
{
public:
	void Voice() const override
	{
		std::cout << "Cat Meow\n";
	}

};

class Pig : public Animal
{
public:
	void Voice() const override
	{
		std::cout << "Pig Oink\n";
	}
};

int main()
{
	Animal* Animals[3];
	Animals[0] = new Dog();
	Animals[1] = new Cat();
	Animals[2] = new Pig();
	
	for (Animal* p : Animals)
		p->Voice();
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

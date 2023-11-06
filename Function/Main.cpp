#include<iostream>


int sum(int num1,int num2) {
	return num1 + num2;
}

void hi() {
	std::cout << " Hello world \n";
}

//Функция для вывода массива в консоль
void print_arr(int arr[],const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

void mult_X5(int num) { //num - параметр функции.
	num *= 5;
}

void arr_x5(int arr[]) {
	arr[1] *= 5;
}

void positive_elements(int arr[], const int legth) {
	for (int i = 0; i < legth; i++)
		if (arr[i] > 0)
			std::cout << i << ' ';
	std::cout << std::endl;
}

int factorial(int num) {
	int result = 1;
	for (int i = 2; i <= num; i++)
		result *= i;
	return result;
}

int main() {
	setlocale(LC_ALL, "ru");
	int n;

	//Создание и вызов функций
	hi();


	std::cout << " Введите два числа -> ";
	std::cin >> n >> m;
	std::cout << sum(n,m) << std::endl;

	// Функции работающие с массивами.
	const int size = 5;
	int arr[size]{ 1,4,6,8,5 };
	print_arr(arr, size);

	arr_x5(arr);

	print_arr(arr, size);


	n = 7;
	mult_X5(n);// n - аргумент функции
	std::cout << "n = " << n << std::endl;

	// Параметры - это переменныеб необходимые функции для принятия внешних значений, передаваеммых в функцию в момент ее вызова
	// Аргументы - значения, передаваемые в параметры  функции в момент ее вызова. Таким образом можно сказать , что параметры это лишь копии исходных передаваемых в функцию аргументов.
	// Если в функцию передается массив, то обращение внутри функции к его элементам с целью их изменения повлечет за собой изменение самого массива который был передан.
	// Иными словами массивы не копируются при передаче в функцию. Вместо этого они просто получают новое имя.

	//Задача 1. Индексы положительных эллементов массива.
	std::cout << "Массив \n";
	const int size1 = 5;
	int arr1[size1]{ 10, 0, 5, -7, 15 };
	print_arr(arr1, size1);
	std::cout << " Индексы положительных элементов:\n";
	positive_elements(arr1, size1);
	std::cout << '\n';

	//Задача 2. Факториал.
	std::cout << " Введите число -> ";
	std::cin >> n;
	std::cout << n << " ! = " << factorial(n) << std::endl;





	return 0;
}
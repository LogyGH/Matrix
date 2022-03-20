#include "Functions.h"

int main()
{
	system("chcp 1251 > null");
	int size = 2, power;
	string userInput;

	while (1) {
		time(NULL);

		//Menu
		cout << "1. Ввести матрицю\n2. Згенерувати матрицю\n3. Завантажити матрицю з файлу\n4. Вийти з програми\n\nВаш вибір: ";
		cin >> userInput;
		system("cls");

		//Get matrix size
		if (userInput != "3" && userInput != "4") {
			while (1) {
				cout << "Введіть розмірність матриці: ";
				cin >> size;
				if (size < 2) {
					cout << endl << "ПОМИЛКА! РОЗМІРНІСТЬ ПОВИННА БУТИ НЕ МЕНШЕ 2!";
					_getch();
					system("cls");
				}
				else break;
			}
		}

		if (userInput == "1") {
			//Creating matrices
			Matrix A(size);
			Matrix C(size);

			//Enter matrix A
			cout << "Заповніть матрицю" << endl << endl;
			InputMatrix(A, size);
			cout << endl << "Степінь: ";
			cin >> power;
			system("cls");
			cout << "Матриця А\n\n";
			ShowMatrix(A, size);

			//Raising to the power
			clock_t start = clock();
			C = Power(A, size, power);
			clock_t end = clock();
			long double seconds = (long double)(end - start) / CLOCKS_PER_SEC;
			cout << "\n\n-----------------------------\n----------Результат----------\n-----------------------------\n\n";
			ShowMatrix(C, size);
			cout << endl << endl << "Час виконання піднесення до степеня: " << seconds << " сек.";
		}
		else if (userInput == "2") {
			//Creating matrices
			Matrix A(size);
			Matrix C(size);

			//Generate matrix A
			GenerateMatrix(A, size);
			cout << "Матриця згенерована" << endl << endl;
			cout << "Степінь: ";
			cin >> power;
			system("cls");
			cout << "Матриця А\n\n";
			ShowMatrix(A, size);

			//Raising to the power
			clock_t start = clock();
			C = Power(A, size, power);
			clock_t end = clock();
			long double seconds = (long double)(end - start) / CLOCKS_PER_SEC;
			cout << "\n\n-----------------------------\n----------Результат----------\n-----------------------------\n\n";
			ShowMatrix(C, size);
			cout << endl << endl << "Час виконання піднесення до степеня: " << seconds << " сек.";
		}
		else if (userInput == "3") {
			do {
				//Enter the name of file
				cout << "Введіть назву файлу (без розширення): ";
				string filename;
				cin >> filename;
				filename.insert(filename.length(), ".txt");

				//Get matrix size from file
				size = MatrixSizeFromFile(filename);
				if (size == 0) break;

				//Read matrix from file
				Matrix A(size);
				bool success;
				success = ReadMatrixFromFile(A, filename);
				if (success == false) {
					size = 2;
					break;
				}

				cout << endl << "Степінь: ";
				cin >> power;

				//Raising to the power
				Matrix C(size);
				system("cls");
				cout << "Матриця А\n\n";
				ShowMatrix(A, size);
				clock_t start = clock();
				C = Power(A, size, power);
				clock_t end = clock();
				long double seconds = (long double)(end - start) / CLOCKS_PER_SEC;
				cout << "\n\n-----------------------------\n----------Результат----------\n-----------------------------\n\n";
				ShowMatrix(C, size);
				cout << endl << endl << "Час виконання піднесення до степеня: " << seconds << " сек.";
			} while (false);
		}
		else if (userInput == "4") return 0;
		
		_getch();
		system("cls");
	}	
	return 0;
}
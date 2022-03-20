#include "Functions.h"

//Generating random matrix
void GenerateMatrix(Matrix& someMatrix, int size)
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			someMatrix.matrix[i][j] = 1 + rand() % (9 - 1);
		}
	}
}

//Entering matrix
void InputMatrix(Matrix& someMatrix, int size)
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << "[" << i + 1 << ", " << j + 1 << "]: ";
			cin >> someMatrix.matrix[i][j];
		}
	}
}

//Displaying matrix on the screen
void ShowMatrix(Matrix someMatrix, int size)
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << someMatrix.matrix[i][j] << "   ";
		}
		cout << endl;
	}
}

//Multiplication of two matrices
Matrix Multiplication(Matrix A, Matrix B, int size)
{
	Matrix C(size);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			C.matrix[i][j] = 0;
			for (int k = 0; k < size; k++) {
				C.matrix[i][j] += A.matrix[i][k] * B.matrix[k][j];
			}
		}
	}
	return C;
}

/*
	Exponentiation of the matrix

	Here one was used the following property of the power:
	
		a^b = (a * a)^(b / 2) if power even
	or
		a^b = a * a^(b - 1) if power odd

*/
Matrix Power(Matrix A, int size, int pow)
{
	if (pow == 1) {
		return A;
	}
	if (pow % 2 == 0) {
		return Power(Multiplication(A, A, size), size, pow / 2);
	}
	return Multiplication(A, Power(A, size, (pow - 1)), size);
}

//Getting matrix size from file
int MatrixSizeFromFile(std::string filename)
{
	//Open file
	std::ifstream read(filename);
	int size = 0;
	std::string str;

	//Checking if file was opened
	if (read) {
		//Reading the size matrix
		read >> str;
		if (str == "") {
			cout << "\nПомилка! Файл пустий!";
			return 0;
		}
		if (str.length() > 2) {
			cout << "\nПомилка! Розмірність вказана неправильно!";
			return 0;
		}
		char ch1 = str[0];
		if (!isdigit(ch1)) {
			cout << "\nПомилка! Ви ввели текст або символ всередині файлу на місці розмірності матриці!";
			return 0;
		}
		if (str.length() == 2) {
			char ch2 = str[1];
			if (!isdigit(ch2)) {
				cout << "\nПомилка! Ви ввели текст або символ всередині файлу на місці розмірності матриці!";
				return 0;
			}
		}
		size = stoi(str);
		if (size < 2 || size > 30) {
			cout << "\nПомилка! Розмірність вказана неправильно!";
			return 0;
		}
	}
	else cout << "\nПомилка! Не вдалося знайти файл.";

	//Close file
	read.close();

	return size;
}

//Reading the matrix from file
bool ReadMatrixFromFile(Matrix& A, std::string filename)
{
	//Open file
	std::ifstream read(filename);
	std::string str;

	//Checking if file was opened
	if (read) {
		//Reading the size matrix
		int size;
		read >> size;

		//Reading the matrix
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				read >> str;
				if (str == "") {
					cout << "\nПомилка! Введіть принаймні 1 цифру всередині файлу, окрім розмірності!";
					return false;
				}
				if (str == "-") {
					cout << "\nПомилка! Неправильно введені дані зі знаком мінус всередині файлу!";
					return false;
				}
				if (str == ".") {
					cout << "\nПомилка! Неправильно введені дані з розрядами нецілого числа всередині файлу!";
					return false;
				}
				char* ch = new char[str.length()];
				for (int l = 0; l < str.length(); l++) {
					ch[l] = str[l];
					if (!isdigit(ch[l]) && ch[l] != '-' && ch[l] != '.') {
						if (ch[l] == ',') cout << "\nПомилка! Всередині файлу ціла частина числа повинна відділятись КРАПКОЮ від дробової!";
						else cout << "\nПомилка! Ви ввели текст або символ всередині файлу в одному з елементів матриці!";
						return false;
					}
				}
				A.matrix[i][j] = stold(str);
			}
		}
	}

	//Close file
	read.close();

	return true;
}
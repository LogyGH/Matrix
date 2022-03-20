#include "Functions.h"

//Generating random matrix
void GenerateMatrix(Matrix& someMatrix, int size, int min, int max)
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			someMatrix.matrix[i][j] = min + rand() % (max - min);
		}
	}
	return;
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
			MessageBox::Show("Файл пустий!", "Помилка!");
			return 0;
		}
		if (str.length() > 2) {
			MessageBox::Show("Розмірність вказана неправильно!", "Помилка!");
			return 0;
		}
		char ch1 = str[0];	
		if (!isdigit(ch1)) {
			MessageBox::Show("Ви ввели текст або символ всередині файлу на місці розмірності матриці!", "Помилка!");
			return 0;
		}
		if (str.length() == 2) {
			char ch2 = str[1];
			if (!isdigit(ch2)) {
				MessageBox::Show("Ви ввели текст або символ всередині файлу на місці розмірності матриці!", "Помилка!");
				return 0;
			}
		}
		size = stoi(str);
		if (size < 2 || size > 30) {
			MessageBox::Show("Розмірність вказана неправильно!", "Помилка!");
			return 0;
		}
	}
	else MessageBox::Show("Не вдалося знайти файл.", "Помилка!");

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
					MessageBox::Show("Введіть принаймні 1 цифру всередині файлу, окрім розмірності!", "Помилка!");
					return false;
				}
				if (str == "-") {
					MessageBox::Show("Неправильно введені дані зі знаком мінус всередині файлу!", "Помилка!");
					return false;
				}
				if (str == ".") {
					MessageBox::Show("Неправильно введені дані з розрядами нецілого числа всередині файлу!", "Помилка!");
					return false;
				}
				char* ch = new char[str.length()];
				for (int l = 0; l < str.length(); l++) {
					ch[l] = str[l];
					if (!ISDigit(ch[l]) && ch[l] != '-' && ch[l] != '.') {
						if (ch[l] == ',') MessageBox::Show("Всередині файлу ціла частина числа повинна відділятись КРАПКОЮ від дробової!", "Помилка!");
						else MessageBox::Show("Ви ввели текст або символ всередині файлу в одному з елементів матриці!", "Помилка!");
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

bool ISDigit(char ch)
{
	if (ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9') return true;
	else return false;
}
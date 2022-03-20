#pragma once

#include <iostream>
#include <conio.h>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;

//Matrix initiation
struct Matrix
{
	long double** matrix;
	Matrix(int size) {
		matrix = new long double* [size];
		for (int i = 0; i < size; i++)
		{
			matrix[i] = new long double[size];
		}
	}
};

//Function prototypes (below)

void GenerateMatrix(Matrix& someMatrix, int size);   //Generating random matrix
void InputMatrix(Matrix& someMatrix, int size);      //Entering matrix
void ShowMatrix(Matrix someMatrix, int size);        //Displaying matrix on the screen
Matrix Multiplication(Matrix A, Matrix B, int size); //Multiplication of two matrices
Matrix Power(Matrix A, int size, int pow);           //Exponentiation of the matrix
int MatrixSizeFromFile(std::string filename);		 //Getting matrix size from file
bool ReadMatrixFromFile(Matrix& A, std::string filename);	//Reading the matrix from file
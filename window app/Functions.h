#pragma once
#include <iostream>
#include <ctime>
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>

//Necessary namespaces
using namespace System;
using namespace System::Windows::Forms;

//Matrix initialization
struct Matrix
{
	long double** matrix;
	Matrix() { }
	Matrix(int size) {
		matrix = new long double* [size];
		for (int i = 0; i < size; i++)
		{
			matrix[i] = new long double[size];
		}
	}
};

//Prototypes of functions
void GenerateMatrix(Matrix& someMatrix, int size, int min, int max);  //Generating random matrix
Matrix Multiplication(Matrix A, Matrix B, int size);				  //Multiplying two matrices
Matrix Power(Matrix A, int size, int pow);							  //Raising the matrix to the power
int MatrixSizeFromFile(std::string filename);						  //Getting matrix size from file
bool ReadMatrixFromFile(Matrix& A, std::string filename);			  //Reading the matrix from file
bool ISDigit(char ch);												  //Check whether char is digit
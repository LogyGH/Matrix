#include "MainForm.h"
#include "Functions.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	MatrixPower::MainForm form;
	Application::Run(% form);
}

//Size of the matrix
int MATRIX_SIZE = 0;

System::Void MatrixPower::MainForm::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("���� �������� �������� ������� �� �������� �������.\n\n���������� ������������:\n\t1. ������� ������� ��������� (�� ������������� 2�2);\n\t2. �������� ������� \"��������\";\n\t3. �������� ������� ��� ���������� ��, ���������� �������� �������� �� ����������� ��������;\n\t4. �������� ������ \"=\";\n\t5. ��������� ���� �������� � ������� �.\n\n���� ��������� ����������� ������� � ���������� �����.\n\n�����! � ���˲ ֲ�� ������� ����� ������� ²�Ĳ���� ������� �������, � ������������� � ²�Ͳ �������� �����!", "����������");
	return System::Void();
}

System::Void MatrixPower::MainForm::�������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("�����! ����������� ������� ������� ���� � ���������� ����� (.txt).\n\n���������� ������������ ������� � �����:\n\t1. �������� ����� ������ ��������� ������� �� ������ ���� ������� (����� ������, ������� ������� ���������);\n\t2. ϳ��� ��������� �������� �������� ������� ����� �����;\n\t3. �������� ���� �� �������� ���� � ����� \"F:/.../MatrixPower/MatrixPower\"\n\t4. � �������� ���� � ������� ������ ����� ����� (��� ����������!).\n\t5. �������� ������ \"�����������\".\n\n� �������, ���� �� ������� ����� ��� ���������� ���������, �� �������� ����������� ��� �������. ���� �� ������� ���������� ������� ����, �� ������� ������� ����� ������������� ��������� ������� ���� �����������. ���� �� ������� �������� ����, �� ���� ����� �� ������ �������������.", "������������ ������� � �����");
	return System::Void();
}

System::Void MatrixPower::MainForm::buttonCalculate_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Check whether the matrix was created
	if (MATRIX_SIZE == 0) {
		MessageBox::Show("������� �������!", "�������!");
		return System::Void();
	}
	//Check whether the size of matrix wasn't changed to another
	if (MATRIX_SIZE != Convert::ToInt32(numericUpDownN->Value)) {
		MessageBox::Show("�� ������ ���������! ������� ���� ������� ��� �������� ��������!", "�������!");
		return System::Void();
	}

	//Size and power of matrix
	MATRIX_SIZE = Convert::ToInt32(numericUpDownN->Value);
	int power = Convert::ToInt32(numericUpDownPower->Value);

	if (power == 0) {
		//Creating identity matrix
		Matrix E(MATRIX_SIZE);
		for (int i = 0; i < MATRIX_SIZE; i++) {
			for (int j = 0; j < MATRIX_SIZE; j++) {
				if (i != j) E.matrix[i][j] = 0;
				else E.matrix[i][j] = 1;
			}
		}

		//Matrix output
		ShowB(E, MATRIX_SIZE);
		return System::Void();
	}

	//Creating matrix
	Matrix A(MATRIX_SIZE);
	std::string str;
	for (int i = 0; i < MATRIX_SIZE; i++) {
		for (int j = 0; j < MATRIX_SIZE; j++) {
			if (dataGridViewA->Rows[i]->Cells[j]->Value->ToString() == "") {
				MessageBox::Show("������� �������� ������� ������� ��������� �����!", "�������!");
				return System::Void();
			}
			if (dataGridViewA->Rows[i]->Cells[j]->Value->ToString() == "-") {
				MessageBox::Show("����������� ������ ��� � ������ ����!", "�������!");
				return System::Void();
			}
			if (dataGridViewA->Rows[i]->Cells[j]->Value->ToString() == ",") {
				MessageBox::Show("����������� ������ ��� � ��������� �������� ����� �������� �����!", "�������!");
				return System::Void();
			}
			str = msclr::interop::marshal_as<std::string>(dataGridViewA->Rows[i]->Cells[j]->Value->ToString());
			char* ch = new char[str.length()];
			for (int l = 0; l < str.length(); l++) {
				ch[l] = str[l];
				if (l != 0) {
					if (ch[l] == '-') {
						MessageBox::Show("����������� ������ ��� � ������ ����!", "�������!");
						return System::Void();
					}
				}
				if (!ISDigit(ch[l]) && ch[l] != '-' && ch[l] != ',') {
					if (ch[l] == '.') MessageBox::Show("� ������� ���� ������� ����� ������� ��������� ����� �� �������!", "�������!");
					else MessageBox::Show("�� ����� ����� ��� ������ � ������ � �������� �������!", "�������!");
					return System::Void();
				}
			}
			A.matrix[i][j] = Convert::ToDouble(dataGridViewA->Rows[i]->Cells[j]->Value);
		}
	}

	if (power == 1) {
		//Matrix output
		ShowB(A, MATRIX_SIZE);
	}
	else {
		//Raising the matrix to the power
		Matrix B(MATRIX_SIZE);
		B = Power(A, MATRIX_SIZE, power);

		//Matrix output
		ShowB(B, MATRIX_SIZE);
	}

	return System::Void();
}

System::Void MatrixPower::MainForm::buttonCreate_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Size of matrix
	MATRIX_SIZE = Convert::ToInt32(numericUpDownN->Value);

	//Creating matrix
	Matrix A(MATRIX_SIZE);
	for (int i = 0; i < MATRIX_SIZE; i++) {
		for (int j = 0; j < MATRIX_SIZE; j++) {
			A.matrix[i][j] = 0;
		}
	}

	//Matrix output
	ShowA(A, MATRIX_SIZE);

	return System::Void();
}

System::Void MatrixPower::MainForm::buttonGenerate_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Check whether the matrix was created
	if (MATRIX_SIZE == 0) {
		MessageBox::Show("������� �������!", "�������!");
		return System::Void();
	}
	//Check whether the size of matrix wasn't changed to another
	if (MATRIX_SIZE != Convert::ToInt32(numericUpDownN->Value)) {
		MessageBox::Show("�� ������ ���������! ������� ���� ������� ��� �������� ��������!", "�������!");
		return System::Void();
	}
	
	//Creating matrix
	MATRIX_SIZE = Convert::ToInt32(numericUpDownN->Value);
	Matrix A(MATRIX_SIZE);

	//Getting the minimum and maximum values
	int min, max;
	min = Convert::ToInt32(numericUpDownMin->Value);
	max = Convert::ToInt32(numericUpDownMax->Value);
	//Check whether the minimum value is not more than the maximum
	if (min >= max) {
		MessageBox::Show("̳������� �������� ����� ��� ������� �� �����������!", "�������!");
		return System::Void();
	}
	
	//Generating random matrix
	time(NULL);
	GenerateMatrix(A, MATRIX_SIZE, min, (max + 1));

	//Matrix output
	ShowA(A, MATRIX_SIZE);

	return System::Void();
}

System::Void MatrixPower::MainForm::buttonLoad_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Chek whether filename was entered
	if (textBoxFileName->Text == "") {
		MessageBox::Show("�� ������� ����� �����!", "�������!");
		return System::Void();
	}

	//Get filename
	std::string filename = msclr::interop::marshal_as<std::string>(textBoxFileName->Text);
	filename.insert(filename.length(), ".txt");

	//Get matrix size from file
	int tmp1, tmp2 = MATRIX_SIZE;
	tmp1 = MatrixSizeFromFile(filename);	
	if (tmp1 == 0) return System::Void();
	MATRIX_SIZE = tmp1;
	numericUpDownN->Value = Convert::ToUInt32(tmp1);

	//Read matrix from file
	Matrix A(MATRIX_SIZE);
	bool success;
	success = ReadMatrixFromFile(A, filename);
	if (success == false) {
		MATRIX_SIZE = tmp2;
		if (tmp2 != 0) numericUpDownN->Value = Convert::ToUInt32(tmp2);
		return System::Void();
	}

	//Matrix output
	ShowA(A, MATRIX_SIZE);

	return System::Void();
}

void MatrixPower::MainForm::ShowA(Matrix A, int size)
{
	//Creating the table
	dataGridViewA->RowCount = MATRIX_SIZE;
	dataGridViewA->ColumnCount = MATRIX_SIZE;

	//The name of matrix in left top corner
	dataGridViewA->TopLeftHeaderCell->Value = "������� �";
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			//Output of column numbers
			dataGridViewA->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);

			//Output of row numbers
			dataGridViewA->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

			//Matrix output
			dataGridViewA->Rows[i]->Cells[j]->Value = A.matrix[i][j];
		}
	}

	//Aligning columns and rows
	dataGridViewA->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridViewA->AutoResizeColumns();
	dataGridViewA->AutoResizeRows();
}

void MatrixPower::MainForm::ShowB(Matrix B, int size)
{
	//Creating the table
	dataGridViewB->RowCount = MATRIX_SIZE;
	dataGridViewB->ColumnCount = MATRIX_SIZE;

	//The name of matrix in left top corner
	dataGridViewB->TopLeftHeaderCell->Value = "������� B";
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			//Output of column numbers
			dataGridViewB->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);

			//Output of row numbers
			dataGridViewB->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

			//Matrix output
			dataGridViewB->Rows[i]->Cells[j]->Value = B.matrix[i][j];
		}
	}

	//Aligning columns and rows
	dataGridViewB->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridViewB->AutoResizeColumns();
	dataGridViewB->AutoResizeRows();
}
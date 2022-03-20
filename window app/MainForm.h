#pragma once
#include "Functions.h"

namespace MatrixPower {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridViewA;
	protected:

	protected:

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ інформаціяToolStripMenuItem;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownN;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownPower;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ buttonGenerate;
	private: System::Windows::Forms::Button^ buttonCreate;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ buttonCalculate;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridViewB;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxFileName;
	private: System::Windows::Forms::Button^ buttonLoad;
	private: System::Windows::Forms::ToolStripMenuItem^ завантаженняМатриціЗФайлуToolStripMenuItem;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownMax;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownMin;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->dataGridViewA = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->інформаціяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->завантаженняМатриціЗФайлуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->numericUpDownN = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownPower = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDownMax = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownMin = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->buttonGenerate = (gcnew System::Windows::Forms::Button());
			this->buttonCreate = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonCalculate = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewB = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxFileName = (gcnew System::Windows::Forms::TextBox());
			this->buttonLoad = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewA))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownN))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPower))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMax))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewB))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridViewA
			// 
			this->dataGridViewA->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridViewA->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewA->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewA->Location = System::Drawing::Point(16, 82);
			this->dataGridViewA->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->dataGridViewA->Name = L"dataGridViewA";
			this->dataGridViewA->RowHeadersWidth = 51;
			this->dataGridViewA->RowTemplate->Height = 24;
			this->dataGridViewA->Size = System::Drawing::Size(512, 339);
			this->dataGridViewA->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->інформаціяToolStripMenuItem,
					this->завантаженняМатриціЗФайлуToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(11, 4, 0, 4);
			this->menuStrip1->Size = System::Drawing::Size(1209, 32);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// інформаціяToolStripMenuItem
			// 
			this->інформаціяToolStripMenuItem->Name = L"інформаціяToolStripMenuItem";
			this->інформаціяToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->інформаціяToolStripMenuItem->Text = L"Про програму";
			this->інформаціяToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::інформаціяToolStripMenuItem_Click);
			// 
			// завантаженняМатриціЗФайлуToolStripMenuItem
			// 
			this->завантаженняМатриціЗФайлуToolStripMenuItem->Name = L"завантаженняМатриціЗФайлуToolStripMenuItem";
			this->завантаженняМатриціЗФайлуToolStripMenuItem->Size = System::Drawing::Size(240, 24);
			this->завантаженняМатриціЗФайлуToolStripMenuItem->Text = L"Завантаження матриці з файлу";
			this->завантаженняМатриціЗФайлуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::завантаженняМатриціЗФайлуToolStripMenuItem_Click);
			// 
			// numericUpDownN
			// 
			this->numericUpDownN->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDownN->Location = System::Drawing::Point(246, 430);
			this->numericUpDownN->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownN->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->numericUpDownN->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDownN->Name = L"numericUpDownN";
			this->numericUpDownN->Size = System::Drawing::Size(51, 36);
			this->numericUpDownN->TabIndex = 2;
			this->numericUpDownN->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(2, 425);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(295, 40);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Розмірність матриці:";
			// 
			// numericUpDownPower
			// 
			this->numericUpDownPower->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDownPower->Location = System::Drawing::Point(223, 476);
			this->numericUpDownPower->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownPower->Name = L"numericUpDownPower";
			this->numericUpDownPower->Size = System::Drawing::Size(74, 36);
			this->numericUpDownPower->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(19, 471);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(240, 40);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Степінь матриці:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->numericUpDownMax);
			this->groupBox1->Controls->Add(this->numericUpDownMin);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->buttonGenerate);
			this->groupBox1->Controls->Add(this->buttonCreate);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->dataGridViewA);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->numericUpDownN);
			this->groupBox1->Controls->Add(this->numericUpDownPower);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(15, 42);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(541, 609);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			// 
			// numericUpDownMax
			// 
			this->numericUpDownMax->Font = (gcnew System::Drawing::Font(L"Arial", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDownMax->Location = System::Drawing::Point(91, 565);
			this->numericUpDownMax->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownMax->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99, 0, 0, 0 });
			this->numericUpDownMax->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 98, 0, 0, System::Int32::MinValue });
			this->numericUpDownMax->Name = L"numericUpDownMax";
			this->numericUpDownMax->Size = System::Drawing::Size(63, 33);
			this->numericUpDownMax->TabIndex = 12;
			// 
			// numericUpDownMin
			// 
			this->numericUpDownMin->Font = (gcnew System::Drawing::Font(L"Arial", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDownMin->Location = System::Drawing::Point(91, 522);
			this->numericUpDownMin->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDownMin->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 98, 0, 0, 0 });
			this->numericUpDownMin->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99, 0, 0, System::Int32::MinValue });
			this->numericUpDownMin->Name = L"numericUpDownMin";
			this->numericUpDownMin->Size = System::Drawing::Size(63, 33);
			this->numericUpDownMin->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(14, 558);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(82, 40);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Max:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(19, 517);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 40);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Min:";
			// 
			// buttonGenerate
			// 
			this->buttonGenerate->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonGenerate->Location = System::Drawing::Point(176, 534);
			this->buttonGenerate->Margin = System::Windows::Forms::Padding(4);
			this->buttonGenerate->Name = L"buttonGenerate";
			this->buttonGenerate->Size = System::Drawing::Size(352, 51);
			this->buttonGenerate->TabIndex = 8;
			this->buttonGenerate->Text = L"Згенерувати";
			this->buttonGenerate->UseVisualStyleBackColor = true;
			this->buttonGenerate->Click += gcnew System::EventHandler(this, &MainForm::buttonGenerate_Click);
			// 
			// buttonCreate
			// 
			this->buttonCreate->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCreate->Location = System::Drawing::Point(310, 444);
			this->buttonCreate->Margin = System::Windows::Forms::Padding(4);
			this->buttonCreate->Name = L"buttonCreate";
			this->buttonCreate->Size = System::Drawing::Size(223, 52);
			this->buttonCreate->TabIndex = 7;
			this->buttonCreate->Text = L"Створити";
			this->buttonCreate->UseVisualStyleBackColor = true;
			this->buttonCreate->Click += gcnew System::EventHandler(this, &MainForm::buttonCreate_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(182, 23);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(175, 40);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Матриця А";
			// 
			// buttonCalculate
			// 
			this->buttonCalculate->Font = (gcnew System::Drawing::Font(L"Segoe Script", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCalculate->Location = System::Drawing::Point(564, 240);
			this->buttonCalculate->Margin = System::Windows::Forms::Padding(4);
			this->buttonCalculate->Name = L"buttonCalculate";
			this->buttonCalculate->Size = System::Drawing::Size(83, 70);
			this->buttonCalculate->TabIndex = 7;
			this->buttonCalculate->Text = L"=";
			this->buttonCalculate->UseVisualStyleBackColor = true;
			this->buttonCalculate->Click += gcnew System::EventHandler(this, &MainForm::buttonCalculate_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(196, 23);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(175, 40);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Матриця B";
			// 
			// dataGridViewB
			// 
			this->dataGridViewB->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridViewB->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewB->Location = System::Drawing::Point(15, 82);
			this->dataGridViewB->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->dataGridViewB->Name = L"dataGridViewB";
			this->dataGridViewB->RowHeadersWidth = 51;
			this->dataGridViewB->RowTemplate->Height = 24;
			this->dataGridViewB->Size = System::Drawing::Size(512, 339);
			this->dataGridViewB->TabIndex = 9;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->dataGridViewB);
			this->groupBox2->Location = System::Drawing::Point(655, 42);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(542, 444);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 19.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(695, 486);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(578, 40);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Завантажити матрицю з текстового файлу:";
			// 
			// textBoxFileName
			// 
			this->textBoxFileName->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxFileName->Location = System::Drawing::Point(670, 527);
			this->textBoxFileName->Margin = System::Windows::Forms::Padding(4);
			this->textBoxFileName->Name = L"textBoxFileName";
			this->textBoxFileName->Size = System::Drawing::Size(512, 43);
			this->textBoxFileName->TabIndex = 12;
			// 
			// buttonLoad
			// 
			this->buttonLoad->Font = (gcnew System::Drawing::Font(L"Segoe Print", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonLoad->Location = System::Drawing::Point(790, 577);
			this->buttonLoad->Margin = System::Windows::Forms::Padding(4);
			this->buttonLoad->Name = L"buttonLoad";
			this->buttonLoad->Size = System::Drawing::Size(290, 63);
			this->buttonLoad->TabIndex = 13;
			this->buttonLoad->Text = L"Завантажити";
			this->buttonLoad->UseVisualStyleBackColor = true;
			this->buttonLoad->Click += gcnew System::EventHandler(this, &MainForm::buttonLoad_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1209, 661);
			this->Controls->Add(this->buttonLoad);
			this->Controls->Add(this->textBoxFileName);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->buttonCalculate);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1680, 962);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Піднесення матриці до степеня";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewA))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownN))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPower))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMax))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewB))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void інформаціяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void завантаженняМатриціЗФайлуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCalculate_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCreate_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonGenerate_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonLoad_Click(System::Object^ sender, System::EventArgs^ e);
private: void ShowA(Matrix A, int size);
private: void ShowB(Matrix B, int size);
};
}

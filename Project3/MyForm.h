#pragma once
#include "Func.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;




	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(60, 89);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"2";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(152, 89);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 43);
			this->button2->TabIndex = 1;
			this->button2->Text = L"3";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(244, 89);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 43);
			this->button3->TabIndex = 2;
			this->button3->Text = L"8";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(336, 89);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(86, 43);
			this->button4->TabIndex = 3;
			this->button4->Text = L"9";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(428, 89);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(86, 43);
			this->button5->TabIndex = 4;
			this->button5->Text = L"10";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(520, 89);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(86, 43);
			this->button6->TabIndex = 5;
			this->button6->Text = L"16";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(152, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(399, 45);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"0";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(79, 19);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(49, 45);
			this->textBox2->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(5, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 39);
			this->label2->TabIndex = 9;
			this->label2->Text = L"�� ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(5, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 39);
			this->label3->TabIndex = 10;
			this->label3->Text = L"�";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(152, 154);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(454, 45);
			this->textBox3->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(5, 160);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 39);
			this->label1->TabIndex = 12;
			this->label1->Text = L"�����";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(618, 216);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) 
{
}
//////////////////////////////////////////////////////////////////////////////////////////
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	double temp = Convert::ToDouble(textBox1->Text);
	int ss = Convert::ToInt32(textBox2->Text);
	temp = toSS10(temp, ss);
	char s[80] = { 0 };
	int p;
	system("chcp 1251");
	system("cls");
	p = 2;
	int k = dectox_int((int)temp, p, s);
	s[k++] = ',';
	dectox_double(temp - (int)temp, p, &s[k]);
	textBox3->Text = gcnew System::String(s);

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	double temp = Convert::ToDouble(textBox1->Text);
	int ss = Convert::ToInt32(textBox2->Text);
	temp = toSS10(temp, ss);
	char s[80] = { 0 };
	int p = 3;
	system("chcp 1251");
	system("cls");
	
	int k = dectox_int((int)temp, p, s);
	s[k++] = ',';
	dectox_double(temp - (int)temp, p, &s[k]);
	textBox3->Text = gcnew System::String(s);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	double temp = Convert::ToDouble(textBox1->Text);
	int ss = Convert::ToInt32(textBox2->Text);
	temp = toSS10(temp, ss);
	char s[80] = { 0 };
	int p = 8;
	system("chcp 1251");
	system("cls");

	int k = dectox_int((int)temp, p, s);
	s[k++] = ',';
	dectox_double(temp - (int)temp, p, &s[k]);
	textBox3->Text = gcnew System::String(s);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	double temp = Convert::ToDouble(textBox1->Text);
	int ss = Convert::ToInt32(textBox2->Text);
	temp = toSS10(temp, ss);
	char s[80] = { 0 };
	int p = 9;
	system("chcp 1251");
	system("cls");

	int k = dectox_int((int)temp, p, s);
	s[k++] = ',';
	dectox_double(temp - (int)temp, p, &s[k]);
	textBox3->Text = gcnew System::String(s);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	double temp = Convert::ToDouble(textBox1->Text);
	int ss = Convert::ToInt32(textBox2->Text);
	temp = toSS10(temp, ss);
	char s[80] = { 0 };
	int p = 10;
	system("chcp 1251");
	system("cls");

	int k = dectox_int((int)temp, p, s);
	s[k++] = ',';
	dectox_double(temp - (int)temp, p, &s[k]);
	textBox3->Text = gcnew System::String(s);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
{
	double temp = Convert::ToDouble(textBox1->Text);
	int ss = Convert::ToInt32(textBox2->Text);
	temp = toSS10(temp, ss);
	char s[80] = { 0 };
	int p = 16;
	system("chcp 1251");
	system("cls");

	int k = dectox_int((int)temp, p, s);
	s[k++] = ',';
	dectox_double(temp - (int)temp, p, &s[k]);
	textBox3->Text = gcnew System::String(s);
}
};
}

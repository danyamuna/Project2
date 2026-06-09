#pragma once

#include <msclr/marshal_cppstd.h>
#include <array>
#include <valarray>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std::_Has_ADL_swap_detail;
	using namespace msclr::interop;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ backclear;
	private: System::Windows::Forms::Button^ multi;
	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::Button^ division;
	private: System::Windows::Forms::Button^ sub;
	private: System::Windows::Forms::Button^ sum;
	private: System::Windows::Forms::Button^ num9;
	private: System::Windows::Forms::Button^ num8;
	private: System::Windows::Forms::Button^ num7;
	private: System::Windows::Forms::Button^ num6;
	private: System::Windows::Forms::Button^ num5;
	private: System::Windows::Forms::Button^ num4;
	private: System::Windows::Forms::Button^ num3;
	private: System::Windows::Forms::Button^ num2;
	private: System::Windows::Forms::Button^ num1;
	private: System::Windows::Forms::Button^ point;
	private: System::Windows::Forms::Button^ res;
	private: System::Windows::Forms::Button^ zero;
	private: System::Windows::Forms::Button^ buttonD;
	private: System::Windows::Forms::Button^ buttonA;
	private: System::Windows::Forms::Button^ buttonB;
	private: System::Windows::Forms::Button^ buttonC;

	private: System::Windows::Forms::Button^ buttonE;
	private: System::Windows::Forms::Button^ buttonF;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ buttonhex;
	private: System::Windows::Forms::Button^ button_Binary;
	private: System::Windows::Forms::TextBox^ textBox_Hex;
	private: System::Windows::Forms::TextBox^ textBox_Binary;
	private: System::Windows::Forms::Button^ button_Octal;
	private: System::Windows::Forms::TextBox^ textBox_Octal;
	private: System::Windows::Forms::Button^ button_Decimal;
	private: System::Windows::Forms::TextBox^ textBox_Decimal;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->backclear = (gcnew System::Windows::Forms::Button());
			this->multi = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->division = (gcnew System::Windows::Forms::Button());
			this->sub = (gcnew System::Windows::Forms::Button());
			this->sum = (gcnew System::Windows::Forms::Button());
			this->num9 = (gcnew System::Windows::Forms::Button());
			this->num8 = (gcnew System::Windows::Forms::Button());
			this->num7 = (gcnew System::Windows::Forms::Button());
			this->num6 = (gcnew System::Windows::Forms::Button());
			this->num5 = (gcnew System::Windows::Forms::Button());
			this->num4 = (gcnew System::Windows::Forms::Button());
			this->num3 = (gcnew System::Windows::Forms::Button());
			this->num2 = (gcnew System::Windows::Forms::Button());
			this->num1 = (gcnew System::Windows::Forms::Button());
			this->point = (gcnew System::Windows::Forms::Button());
			this->res = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->buttonD = (gcnew System::Windows::Forms::Button());
			this->buttonA = (gcnew System::Windows::Forms::Button());
			this->buttonB = (gcnew System::Windows::Forms::Button());
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->buttonE = (gcnew System::Windows::Forms::Button());
			this->buttonF = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonhex = (gcnew System::Windows::Forms::Button());
			this->button_Binary = (gcnew System::Windows::Forms::Button());
			this->textBox_Hex = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Binary = (gcnew System::Windows::Forms::TextBox());
			this->button_Octal = (gcnew System::Windows::Forms::Button());
			this->textBox_Octal = (gcnew System::Windows::Forms::TextBox());
			this->button_Decimal = (gcnew System::Windows::Forms::Button());
			this->textBox_Decimal = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(129, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(84, 159);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->UseWaitCursor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(219, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(128, 422);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			this->richTextBox1->UseWaitCursor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(57, 431);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(35, 40);
			this->button2->TabIndex = 46;
			this->button2->Text = L"+/-";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->UseWaitCursor = true;
			// 
			// backclear
			// 
			this->backclear->BackColor = System::Drawing::SystemColors::Control;
			this->backclear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backclear->Location = System::Drawing::Point(179, 202);
			this->backclear->Name = L"backclear";
			this->backclear->Size = System::Drawing::Size(35, 40);
			this->backclear->TabIndex = 45;
			this->backclear->Text = L"⌫";
			this->backclear->UseVisualStyleBackColor = false;
			this->backclear->UseWaitCursor = true;
			this->backclear->Click += gcnew System::EventHandler(this, &MyForm1::backclear_Click);
			// 
			// multi
			// 
			this->multi->BackColor = System::Drawing::SystemColors::Control;
			this->multi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multi->Location = System::Drawing::Point(179, 294);
			this->multi->Name = L"multi";
			this->multi->Size = System::Drawing::Size(35, 40);
			this->multi->TabIndex = 44;
			this->multi->Text = L"*";
			this->multi->UseVisualStyleBackColor = false;
			this->multi->UseWaitCursor = true;
			this->multi->Click += gcnew System::EventHandler(this, &MyForm1::multi_Click);
			this->multi->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::sum_MouseDown);
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::SystemColors::Control;
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear->Location = System::Drawing::Point(138, 202);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(35, 40);
			this->clear->TabIndex = 43;
			this->clear->Text = L"C";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->UseWaitCursor = true;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm1::clear_Click);
			// 
			// division
			// 
			this->division->BackColor = System::Drawing::SystemColors::Control;
			this->division->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->division->Location = System::Drawing::Point(179, 248);
			this->division->Name = L"division";
			this->division->Size = System::Drawing::Size(35, 40);
			this->division->TabIndex = 42;
			this->division->Text = L"÷";
			this->division->UseVisualStyleBackColor = false;
			this->division->UseWaitCursor = true;
			this->division->Click += gcnew System::EventHandler(this, &MyForm1::division_Click);
			this->division->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::sum_MouseDown);
			// 
			// sub
			// 
			this->sub->BackColor = System::Drawing::SystemColors::Control;
			this->sub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sub->Location = System::Drawing::Point(179, 340);
			this->sub->Name = L"sub";
			this->sub->Size = System::Drawing::Size(35, 40);
			this->sub->TabIndex = 41;
			this->sub->Text = L"-";
			this->sub->UseVisualStyleBackColor = false;
			this->sub->UseWaitCursor = true;
			this->sub->Click += gcnew System::EventHandler(this, &MyForm1::sub_Click);
			this->sub->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::sum_MouseDown);
			// 
			// sum
			// 
			this->sum->BackColor = System::Drawing::SystemColors::Control;
			this->sum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sum->Location = System::Drawing::Point(179, 385);
			this->sum->Name = L"sum";
			this->sum->Size = System::Drawing::Size(35, 40);
			this->sum->TabIndex = 40;
			this->sum->Text = L"+";
			this->sum->UseVisualStyleBackColor = false;
			this->sum->UseWaitCursor = true;
			this->sum->Click += gcnew System::EventHandler(this, &MyForm1::sum_Click);
			this->sum->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::sum_MouseDown);
			// 
			// num9
			// 
			this->num9->BackColor = System::Drawing::SystemColors::Control;
			this->num9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num9->Location = System::Drawing::Point(138, 293);
			this->num9->Name = L"num9";
			this->num9->Size = System::Drawing::Size(35, 40);
			this->num9->TabIndex = 39;
			this->num9->Text = L"9";
			this->num9->UseVisualStyleBackColor = false;
			this->num9->UseWaitCursor = true;
			this->num9->Click += gcnew System::EventHandler(this, &MyForm1::Button_Click);
			// 
			// num8
			// 
			this->num8->BackColor = System::Drawing::SystemColors::Control;
			this->num8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num8->Location = System::Drawing::Point(97, 294);
			this->num8->Name = L"num8";
			this->num8->Size = System::Drawing::Size(35, 40);
			this->num8->TabIndex = 38;
			this->num8->Text = L"8";
			this->num8->UseVisualStyleBackColor = false;
			this->num8->UseWaitCursor = true;
			this->num8->Click += gcnew System::EventHandler(this, &MyForm1::Button_Click);
			// 
			// num7
			// 
			this->num7->BackColor = System::Drawing::SystemColors::Control;
			this->num7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num7->Location = System::Drawing::Point(57, 294);
			this->num7->Name = L"num7";
			this->num7->Size = System::Drawing::Size(35, 40);
			this->num7->TabIndex = 37;
			this->num7->Text = L"7";
			this->num7->UseVisualStyleBackColor = false;
			this->num7->UseWaitCursor = true;
			this->num7->Click += gcnew System::EventHandler(this, &MyForm1::Button_Click);
			// 
			// num6
			// 
			this->num6->BackColor = System::Drawing::SystemColors::Control;
			this->num6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num6->Location = System::Drawing::Point(138, 340);
			this->num6->Name = L"num6";
			this->num6->Size = System::Drawing::Size(35, 40);
			this->num6->TabIndex = 36;
			this->num6->Text = L"6";
			this->num6->UseVisualStyleBackColor = false;
			this->num6->UseWaitCursor = true;
			this->num6->Click += gcnew System::EventHandler(this, &MyForm1::Button_Click);
			// 
			// num5
			// 
			this->num5->BackColor = System::Drawing::SystemColors::Control;
			this->num5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num5->Location = System::Drawing::Point(97, 339);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(35, 40);
			this->num5->TabIndex = 35;
			this->num5->Text = L"5";
			this->num5->UseVisualStyleBackColor = false;
			this->num5->UseWaitCursor = true;
			this->num5->Click += gcnew System::EventHandler(this, &MyForm1::Button_Click);
			// 
			// num4
			// 
			this->num4->BackColor = System::Drawing::SystemColors::Control;
			this->num4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num4->Location = System::Drawing::Point(57, 340);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(35, 40);
			this->num4->TabIndex = 34;
			this->num4->Text = L"4";
			this->num4->UseVisualStyleBackColor = false;
			this->num4->UseWaitCursor = true;
			this->num4->Click += gcnew System::EventHandler(this, &MyForm1::Button_Click);
			// 
			// num3
			// 
			this->num3->BackColor = System::Drawing::SystemColors::Control;
			this->num3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num3->Location = System::Drawing::Point(138, 385);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(35, 40);
			this->num3->TabIndex = 33;
			this->num3->Text = L"3";
			this->num3->UseVisualStyleBackColor = false;
			this->num3->UseWaitCursor = true;
			this->num3->Click += gcnew System::EventHandler(this, &MyForm1::Button_Click);
			// 
			// num2
			// 
			this->num2->BackColor = System::Drawing::SystemColors::Control;
			this->num2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num2->Location = System::Drawing::Point(97, 385);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(35, 40);
			this->num2->TabIndex = 32;
			this->num2->Text = L"2";
			this->num2->UseVisualStyleBackColor = false;
			this->num2->UseWaitCursor = true;
			this->num2->Click += gcnew System::EventHandler(this, &MyForm1::Button_Click);
			// 
			// num1
			// 
			this->num1->BackColor = System::Drawing::SystemColors::Control;
			this->num1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->num1->FlatAppearance->BorderSize = 3;
			this->num1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->num1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->num1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num1->Location = System::Drawing::Point(57, 384);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(35, 40);
			this->num1->TabIndex = 31;
			this->num1->Text = L"1";
			this->num1->UseVisualStyleBackColor = false;
			this->num1->UseWaitCursor = true;
			this->num1->Click += gcnew System::EventHandler(this, &MyForm1::Button_Click);
			// 
			// point
			// 
			this->point->BackColor = System::Drawing::SystemColors::Control;
			this->point->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->point->FlatAppearance->BorderSize = 3;
			this->point->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->point->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->point->Location = System::Drawing::Point(138, 431);
			this->point->Name = L"point";
			this->point->Size = System::Drawing::Size(35, 40);
			this->point->TabIndex = 50;
			this->point->Text = L".";
			this->point->UseVisualStyleBackColor = false;
			this->point->UseWaitCursor = true;
			// 
			// res
			// 
			this->res->BackColor = System::Drawing::SystemColors::Control;
			this->res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->res->Location = System::Drawing::Point(178, 430);
			this->res->Name = L"res";
			this->res->Size = System::Drawing::Size(35, 40);
			this->res->TabIndex = 49;
			this->res->Text = L"=";
			this->res->UseVisualStyleBackColor = false;
			this->res->UseWaitCursor = true;
			this->res->Click += gcnew System::EventHandler(this, &MyForm1::res_Click);
			// 
			// zero
			// 
			this->zero->BackColor = System::Drawing::SystemColors::Control;
			this->zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zero->Location = System::Drawing::Point(97, 431);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(35, 40);
			this->zero->TabIndex = 48;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = false;
			this->zero->UseWaitCursor = true;
			this->zero->Click += gcnew System::EventHandler(this, &MyForm1::Button_Click);
			// 
			// buttonD
			// 
			this->buttonD->BackColor = System::Drawing::SystemColors::Control;
			this->buttonD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonD->Location = System::Drawing::Point(16, 340);
			this->buttonD->Name = L"buttonD";
			this->buttonD->Size = System::Drawing::Size(35, 40);
			this->buttonD->TabIndex = 54;
			this->buttonD->Text = L"D";
			this->buttonD->UseVisualStyleBackColor = false;
			this->buttonD->UseWaitCursor = true;
			// 
			// buttonA
			// 
			this->buttonA->BackColor = System::Drawing::SystemColors::Control;
			this->buttonA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonA->Location = System::Drawing::Point(16, 202);
			this->buttonA->Name = L"buttonA";
			this->buttonA->Size = System::Drawing::Size(35, 40);
			this->buttonA->TabIndex = 53;
			this->buttonA->Text = L"A";
			this->buttonA->UseVisualStyleBackColor = false;
			this->buttonA->UseWaitCursor = true;
			this->buttonA->Click += gcnew System::EventHandler(this, &MyForm1::buttonA_Click);
			// 
			// buttonB
			// 
			this->buttonB->BackColor = System::Drawing::SystemColors::Control;
			this->buttonB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonB->Location = System::Drawing::Point(16, 248);
			this->buttonB->Name = L"buttonB";
			this->buttonB->Size = System::Drawing::Size(35, 40);
			this->buttonB->TabIndex = 52;
			this->buttonB->Text = L"B";
			this->buttonB->UseVisualStyleBackColor = false;
			this->buttonB->UseWaitCursor = true;
			// 
			// buttonC
			// 
			this->buttonC->BackColor = System::Drawing::SystemColors::Control;
			this->buttonC->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buttonC->FlatAppearance->BorderSize = 3;
			this->buttonC->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->buttonC->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->buttonC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonC->Location = System::Drawing::Point(16, 294);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(35, 40);
			this->buttonC->TabIndex = 51;
			this->buttonC->Text = L"C";
			this->buttonC->UseVisualStyleBackColor = false;
			this->buttonC->UseWaitCursor = true;
			// 
			// buttonE
			// 
			this->buttonE->BackColor = System::Drawing::SystemColors::Control;
			this->buttonE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonE->Location = System::Drawing::Point(16, 385);
			this->buttonE->Name = L"buttonE";
			this->buttonE->Size = System::Drawing::Size(35, 40);
			this->buttonE->TabIndex = 56;
			this->buttonE->Text = L"E";
			this->buttonE->UseVisualStyleBackColor = false;
			this->buttonE->UseWaitCursor = true;
			// 
			// buttonF
			// 
			this->buttonF->BackColor = System::Drawing::SystemColors::Control;
			this->buttonF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonF->Location = System::Drawing::Point(16, 431);
			this->buttonF->Name = L"buttonF";
			this->buttonF->Size = System::Drawing::Size(35, 40);
			this->buttonF->TabIndex = 55;
			this->buttonF->Text = L"F";
			this->buttonF->UseVisualStyleBackColor = false;
			this->buttonF->UseWaitCursor = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(138, 248);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(35, 40);
			this->button1->TabIndex = 58;
			this->button1->Text = L"CE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->UseWaitCursor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// buttonhex
			// 
			this->buttonhex->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonhex->Location = System::Drawing::Point(3, 12);
			this->buttonhex->Name = L"buttonhex";
			this->buttonhex->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->buttonhex->Size = System::Drawing::Size(46, 36);
			this->buttonhex->TabIndex = 59;
			this->buttonhex->Text = L"HEX";
			this->buttonhex->UseVisualStyleBackColor = true;
			this->buttonhex->UseWaitCursor = true;
			this->buttonhex->Click += gcnew System::EventHandler(this, &MyForm1::buttonhex_Click);
			// 
			// button_Binary
			// 
			this->button_Binary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Binary->Location = System::Drawing::Point(5, 138);
			this->button_Binary->Name = L"button_Binary";
			this->button_Binary->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button_Binary->Size = System::Drawing::Size(46, 36);
			this->button_Binary->TabIndex = 60;
			this->button_Binary->Text = L"BIN";
			this->button_Binary->UseVisualStyleBackColor = true;
			this->button_Binary->UseWaitCursor = true;
			this->button_Binary->Click += gcnew System::EventHandler(this, &MyForm1::button_Binary_Click);
			// 
			// textBox_Hex
			// 
			this->textBox_Hex->BackColor = System::Drawing::SystemColors::Control;
			this->textBox_Hex->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_Hex->Location = System::Drawing::Point(55, 13);
			this->textBox_Hex->Multiline = true;
			this->textBox_Hex->Name = L"textBox_Hex";
			this->textBox_Hex->Size = System::Drawing::Size(68, 35);
			this->textBox_Hex->TabIndex = 61;
			this->textBox_Hex->UseWaitCursor = true;
			// 
			// textBox_Binary
			// 
			this->textBox_Binary->BackColor = System::Drawing::SystemColors::Control;
			this->textBox_Binary->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_Binary->Location = System::Drawing::Point(53, 136);
			this->textBox_Binary->Multiline = true;
			this->textBox_Binary->Name = L"textBox_Binary";
			this->textBox_Binary->Size = System::Drawing::Size(68, 35);
			this->textBox_Binary->TabIndex = 62;
			this->textBox_Binary->UseWaitCursor = true;
			// 
			// button_Octal
			// 
			this->button_Octal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Octal->Location = System::Drawing::Point(5, 54);
			this->button_Octal->Name = L"button_Octal";
			this->button_Octal->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button_Octal->Size = System::Drawing::Size(46, 36);
			this->button_Octal->TabIndex = 63;
			this->button_Octal->Text = L"Octal";
			this->button_Octal->UseVisualStyleBackColor = true;
			this->button_Octal->UseWaitCursor = true;
			this->button_Octal->Click += gcnew System::EventHandler(this, &MyForm1::button_Octal_Click);
			// 
			// textBox_Octal
			// 
			this->textBox_Octal->BackColor = System::Drawing::SystemColors::Control;
			this->textBox_Octal->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_Octal->Location = System::Drawing::Point(55, 54);
			this->textBox_Octal->Multiline = true;
			this->textBox_Octal->Name = L"textBox_Octal";
			this->textBox_Octal->Size = System::Drawing::Size(68, 35);
			this->textBox_Octal->TabIndex = 64;
			this->textBox_Octal->UseWaitCursor = true;
			// 
			// button_Decimal
			// 
			this->button_Decimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Decimal->Location = System::Drawing::Point(5, 96);
			this->button_Decimal->Name = L"button_Decimal";
			this->button_Decimal->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button_Decimal->Size = System::Drawing::Size(48, 36);
			this->button_Decimal->TabIndex = 65;
			this->button_Decimal->Text = L"Dec";
			this->button_Decimal->UseVisualStyleBackColor = true;
			this->button_Decimal->UseWaitCursor = true;
			this->button_Decimal->Click += gcnew System::EventHandler(this, &MyForm1::button_Decimal_Click);
			// 
			// textBox_Decimal
			// 
			this->textBox_Decimal->BackColor = System::Drawing::SystemColors::Control;
			this->textBox_Decimal->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_Decimal->Location = System::Drawing::Point(55, 95);
			this->textBox_Decimal->Multiline = true;
			this->textBox_Decimal->Name = L"textBox_Decimal";
			this->textBox_Decimal->Size = System::Drawing::Size(68, 35);
			this->textBox_Decimal->TabIndex = 66;
			this->textBox_Decimal->UseWaitCursor = true;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Control;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(57, 248);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(35, 40);
			this->button3->TabIndex = 67;
			this->button3->Text = L"(";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->UseWaitCursor = true;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Control;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(97, 247);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(35, 40);
			this->button4->TabIndex = 68;
			this->button4->Text = L")";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->UseWaitCursor = true;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Control;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(57, 202);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(35, 40);
			this->button5->TabIndex = 69;
			this->button5->Text = L"<<";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->UseWaitCursor = true;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Control;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(98, 202);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(35, 40);
			this->button6->TabIndex = 70;
			this->button6->Text = L">>";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->UseWaitCursor = true;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(356, 481);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox_Decimal);
			this->Controls->Add(this->button_Decimal);
			this->Controls->Add(this->textBox_Octal);
			this->Controls->Add(this->button_Octal);
			this->Controls->Add(this->textBox_Binary);
			this->Controls->Add(this->textBox_Hex);
			this->Controls->Add(this->button_Binary);
			this->Controls->Add(this->buttonhex);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->buttonE);
			this->Controls->Add(this->buttonF);
			this->Controls->Add(this->buttonD);
			this->Controls->Add(this->buttonA);
			this->Controls->Add(this->buttonB);
			this->Controls->Add(this->buttonC);
			this->Controls->Add(this->point);
			this->Controls->Add(this->res);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->backclear);
			this->Controls->Add(this->multi);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->division);
			this->Controls->Add(this->sub);
			this->Controls->Add(this->sum);
			this->Controls->Add(this->num9);
			this->Controls->Add(this->num8);
			this->Controls->Add(this->num7);
			this->Controls->Add(this->num6);
			this->Controls->Add(this->num5);
			this->Controls->Add(this->num4);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->UseWaitCursor = true;
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) 
	{
	
		
	}
		   double result = 0.0;
		   bool operationStarted = false;
		   bool operationStartedBinary = false;
		   String^ firstNum = String::Empty;
		   String^ secondNum = String::Empty;
		   public:
			   enum class operationenum {
				   Add, Subtract, Multiply, Divide};

			   operationenum  a;
			   property operationenum operation {
				   operationenum get()
				   {
					   return a;
				   }

				   void set(operationenum v)
				   {
					   a = v;
				   }
			   }


	private: System::Void Button_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ B1 = gcnew Button;
		B1 = safe_cast<Button^>(sender);

		String^ value = B1->Text;


		if (value == "." && textBox1->Text->Contains(".")) return;

		if (textBox1->Text == "0" && value != ".")
			textBox1->Text = String::Empty;

		if (operationStarted == true)
			textBox1->Text = value;
		else {

			textBox1->Text += value;
			
			/*firstNum = textBox1->Text;
			textBox_Decimal->Text += value;
			String^ a = convertDeciToOCtal(Convert::ToInt32(firstNum)).ToString();
			textBox_Octal->Text = a;
			
			String^ bin = ConvertdeciToBin(Convert::ToInt32(firstNum)).ToString("D8");
			textBox_Binary->Text = bin;
			*/
		}

		operationStarted = false;


	}
    
		private: System::Void sum_Click(System::Object^ sender, System::EventArgs^ e) {
			operation = operationenum::Add;

		}
	private: System::Void sub_Click(System::Object^ sender, System::EventArgs^ e) {
		operation = operationenum::Subtract;
	}

	private: System::Void division_Click(System::Object^ sender, System::EventArgs^ e) {
		operation = operationenum::Divide;
	}
	private: System::Void multi_Click(System::Object^ sender, System::EventArgs^ e) {
		operation = operationenum::Multiply;

	}
	private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox1->Text = String::Empty;
		result = 0;
		firstNum = "";
		secondNum = "";
		textBox_Binary->Text = "";
		textBox_Decimal->Text = "";
		textBox_Octal->Text = "";
	}
		   static double Add(double firstNum, double secondNum)
		   {
			   return firstNum + secondNum;
		   }
		   static double Subtract(double firstNum, double secondNum)
		   {
			   return firstNum - secondNum;
		   }
		   static double Multiply(double firstNum, double secondNum)
		   {
			   return firstNum * secondNum;
		   }
		   static double Divide(double firstNum, double secondNum)
		   {
			   return firstNum / secondNum;
		   }
		   public:
		 static double  Calculate(operationenum operation, String^ firstNum, String^ secondNum, TextBox^ operationDisplay)
			   {
				   double result = 0;
				   double num1, num2;

				   if (!Double::TryParse(firstNum, num1) || !Double::TryParse(secondNum, num2))
				   {
					   operationDisplay->Text = "Invalid numeric input";
					   return 0; // or throw a user-friendly exception / show error UI
				   }

				   switch (operation)
				   {
				   case operationenum::Add:
				   {
					   result = Add(num1, num2);
					   break;
				   }
				   case operationenum::Subtract:
				   {
					   result = Subtract(num1, num2);
					   break;
				   }

				   case operationenum::Multiply: {
					   result = Multiply(num1, num2);
					   break;
				   }
				   case operationenum::Divide: {

					   result = Divide(num1, num2);
					   break;
				   }
				   }

					 operationDisplay->Text = Operation_Display_WithResult(firstNum, operation, secondNum, result.ToString());

					 return result;

				   }
			   public: static  String^ Getsymbol(operationenum operation)
				   {

					   switch (operation)
					   {
					   case operationenum::Add:
						   return "+";

					   case operationenum::Subtract:
						   return "-";

					   case operationenum::Multiply:
						   return "*";

					   case operationenum::Divide:
						   return "/";
			
					   default: return String::Empty;
					   }

				   }

			   public: System::Void res_Click(System::Object ^ sender, System::EventArgs ^ e)
			   {

			 if (firstNum != String::Empty)
				   {
					   secondNum = textBox1->Text;
					   result = Calculate(operation, firstNum, secondNum, textBox1);
					   textBox1->Text = Convert::ToString(result);
					   firstNum = Convert::ToString(result);
					   //showhistory2(richTextBox1, operation, secondNum, result);
				   }
				   else
				   {
					   textBox1->Text = "0";
				   }

			   }
	 public: static void Operation_Display(TextBox ^ textBox1, String ^ firstNum, operationenum operation)
			   {
				   String^ displayText = String::Empty;

				   displayText->Concat(firstNum, Getsymbol(operation));

				   textBox1->Text = displayText;


			   }
			   public: static String^ Operation_Display_WithResult(String^ firstNum, operationenum operation, String^ secondNum, String^ result)
			   {
				   String^ displayText = String::Empty;



				   displayText->Concat(firstNum, Getsymbol(operation), secondNum, "=", result);

				   return displayText;
			   }

        private: System::Void sum_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	    firstNum = textBox1->Text;
	    operationStarted = true;
		
		

	    //Operation_Display(textBox1, firstNum, operation);

		
		//richTextBox1->SelectedText = Environment::NewLine;
	    //showhistory(richTextBox1, firstNum);
 
}
	private: System::Void backclear_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length > 0)
		{
			textBox1->Text = textBox1->Text->Substring(0, textBox1->Text->Length - 1);
		}

		if (textBox1->Text == String::Empty)
		{
			textBox1->Text = "0";
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	secondNum = String::Empty;
	textBox1->Text = String::Empty;


}
	   int convertBinarytTOInt(int bin)
	   {
		   
		   int n = 0; int x = 0;
		   int rem = 0;
		   int dec = 0;
		   int temp = Convert::ToDouble(bin);
		   while (temp != 0) {
			   // get remainder of n divided by 10
			   rem = temp % 10;
			   // add the rem * (2 ^ i) to dec
			   dec += rem * Math::Pow(2, n);
			   //divide Binary number by 10.
			   temp /= 10;
			   //incerment n
			   ++n;
		   }

		   return dec;
	   }
	   

	   String^ ConvertBinToHex(String^ binary)
	   {
		   int temp;
		   temp = Convert::ToDouble(binary);
		   char hex[20];
		   int index, i, digit;
		   int hexConstant[] = { 0, 1, 10, 11, 100, 101, 110, 111, 1000,
								1001, 1010, 1011, 1100, 1101, 1110, 1111 };
		   index = 0;

		   while (temp != 0)
		   {
			   digit = temp % 10000;
			   for (i = 0;i < 16;i++)
			   {
				   if (hexConstant[i] == digit)
				   {

					   if (i < 10)
					   {
						   hex[index] = (char)(i + 48);
					   }
					   else
					   {
						   hex[index] = (char)((i - 10) + 65);
					   }
					   index++;
					   break;
				   }
			   }
			   temp /= 10000;
		   }
		   hex[index] ='\0';

		   reverseString(hex);

		  String^ s= Convert::ToString(hex);

		   return s;
		   
	   }
	   int convertBinarytTOctalM2(int binary)
	   {
		   int temp =Convert::ToDouble( binary);
		   int octal = 0;
		   int digit;
		   int i = 0;
		   int place = 1;
		   int octalcon[] = { 0,1,10,11,100,101,110,111 };
		   while (temp != 0)
		   {
			   digit = temp % 1000;

			   for (i = 0;i < 8;i++)

			   {
				   if (octalcon[i] == digit)

				   {
					   /*
							 * Increase the place value of octal
							 * and add the previous octal value
							 */
					   octal = (i * place) + octal;
					   break;
				   }
			   }
			   /* Remove the last three digit of binary */

			   temp /= 1000;
			   /* Increase the place value */
			   place *= 10;
			   

		   }
		    
		   return octal;
	   }

	/// <summary>
	/// Binary octal -ecimal
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	private: System::Void button_Binary_Click(System::Object^ sender, System::EventArgs^ e) {

		num2->Enabled = false;
		num3->Enabled = false;
		num4->Enabled = false;
		num5->Enabled = false;
		num6->Enabled = false;
		num7->Enabled = false;
		num8->Enabled = false;
		num9->Enabled = false;
		buttonA->Enabled = false;
		buttonB->Enabled = false;
		buttonC->Enabled = false;
		buttonD->Enabled = false;
		buttonE->Enabled = false;
		buttonF->Enabled = false;

		if (textBox_Binary->Text != nullptr)
		{
			textBox1->Text = textBox_Binary->Text;
		}
		
	

		if (textBox1->Text == "")
		{
			textBox_Binary->Text = "";
		    firstNum = "";
	    }
		else {
			//operationStartedBinary = true;

			firstNum = textBox1->Text;
			textBox_Binary->Text = firstNum;

			String^ a = convertBinarytTOctalM2(Convert::ToInt32(firstNum)).ToString();
			String^ b = convertBinarytTOInt(Convert::ToInt32(firstNum)).ToString();
			//String^ c = ConvertBinToHex(firstNum);


			if (textBox_Octal->Text == "") {

				textBox_Octal->Text = a;
			}
			else
			{
				textBox_Octal->Text = nullptr;
				textBox_Octal->Text = a;
			}
			if (textBox_Decimal->Text == "") {

				textBox_Decimal->Text = b;
			}
			else
			{
				textBox_Decimal->Text = nullptr;
				textBox_Decimal->Text = b;
			}


		//	operationStartedBinary = false;

		}
	}
		   void firstfunc(String^ firstNum)
		   {
			   String^ a = convertBinarytTOctalM2(Convert::ToInt32(firstNum)).ToString();
			   String^ b = convertBinarytTOInt(Convert::ToInt32(firstNum)).ToString();
			   //String^ c = ConvertBinToHex(firstNum);


			   if (textBox_Octal->Text == "") {

				   textBox_Octal->Text = a;
			   }
			   else
			   {
				   textBox_Octal->Text = nullptr;
				   textBox_Octal->Text = a;
			   }
			   if (textBox_Decimal->Text == "") {

				   textBox_Decimal->Text = b;
			   }
			   else
			   {
				   textBox_Decimal->Text = nullptr;
				   textBox_Decimal->Text = b;
			   }

			   
		   }
		  // Function to reverse a string in place
		  void reverseString(char* str) {
		

			  int left = 0;
			  int right = strlen(str) - 1;

			  // Swap characters from both ends moving towards the center
			  while (left < right) {
				  char temp = str[left];
				  str[left] = str[right];
				  str[right] = temp;
				  left++;
				  right--;
			  }
		  }
		  

/// <summary>
/// Decimal - bin
/// </summary>
/// <param name="sender"></param>
/// <param name="e"></param>
/// <returns></returns>
private: System::Void button_Decimal_Click(System::Object^ sender, System::EventArgs^ e) {
	num2->Enabled = true;
	num3->Enabled = true;
	num4->Enabled = true;
	num5->Enabled = true;
	num6->Enabled = true;
	num7->Enabled = true;
	num8->Enabled = true;
	num9->Enabled = true;
	buttonA->Enabled = true;
	buttonB->Enabled = true;
	buttonC->Enabled = true;
	buttonD->Enabled = true;
	buttonE->Enabled = true;
	buttonF->Enabled = true;
	
	if (textBox1->Text == "") {
		textBox_Decimal->Text = "";
		firstNum = "";
	}
   
	else 
	{
		firstNum = textBox1->Text;
		textBox_Decimal->Text = firstNum;

		bool operationdecimal = true;
		String^ bin2 = ConvertdeciToBin(Convert::ToInt32(firstNum)).ToString("D8");

		String^ octal = convertDeciToOCtal(Convert::ToInt32(firstNum)).ToString();
		if (textBox_Binary->Text == "") {

			textBox_Binary->Text = bin2;
		}
		else
		{
			textBox_Binary->Text = nullptr;
			textBox_Binary->Text = bin2;
		}
		if (textBox_Octal->Text == "") {

			textBox_Octal->Text = octal;
		}
		else
		{
			textBox_Octal->Text = nullptr;
			textBox_Octal->Text = octal;
		}
	}
}
	   int ConvertdeciToBin(int dec)
	   {
		   int n = 0;
		   int i = 1;
		   int bin =0;
		    
		   while (dec > 0) {
			   bin += (dec % 2) * i;
			   dec /= 2;
			   i *= 10;
		   }

		  
		   return bin;
	   }
	   int convertDeciToOCtal(int decimal)
	   {
		   int tempDecimal = decimal;
		   int rem = 0;
		   int octal = 0;
		   int place = 1;
		   while (tempDecimal != 0)
		   {
			   rem = tempDecimal % 8;
			   octal = (rem * place) + octal;
			   tempDecimal /= 8;
			   place *= 10;

		   }
		   return octal;
	   }
   /////hex/////
	   String^ ConvertHexToBin(String^ s)
	   {
		   char bin[65];
		   //char hex[65] = Convert::ToChar(s) ;
		   // Convert to unmanaged char*

	        // Convert to std::string
		   std::string nativeStr = marshal_as<std::string>(s);

		   // Access as char*
		   const char* hex = nativeStr.c_str();


		   int i;
		   for (i = 0; hex[i] != '\0'; i++)
		   {
			   switch (hex[i])
			   {
			   case '0':
				   strcat(bin, "0000");
				   break;
			   case '1':
				   strcat(bin, "0010");break;
			   case '2':
				   strcat(bin, "0010");break;
			   case '3':
				   strcat(bin, "0011");break;

			   case '4':
				   strcat(bin, "0100");break;
			   case '5':
				   strcat(bin, "0101");break;
			   case '6':
				   strcat(bin, "0110");break;
			   case '7':
				   strcat(bin, "0111");break;
			   case '8':
				   strcat(bin, "1000");break;
			   case '9':
				   strcat(bin, "1001");break;
			   case 'a':
			   case 'A':
				   strcat(bin, "1010");break;
			   case 'B':
			   case 'b':
				   strcat(bin, "1011");break;
			   case 'C':
			   case 'c':
				   strcat(bin, "1100");break;
			   case 'D':
			   case 'd':
				   strcat(bin, "1101");break;
			   case 'E':
			   case 'e':
				   strcat(bin, "1110");break;
			   case 'F':
			   case 'f':
				   strcat(bin, "1111");break;
			   default:
				    hex[i];

			   }
		   }
		 return  Convert::ToString(bin);


	   }
	   private: System::Void buttonhex_Click(System::Object^ sender, System::EventArgs^ e) {


		   firstNum = textBox1->Text;
		  
		   String^ a = ConvertHexToBin(firstNum);
		  


		   if (textBox_Binary->Text == "") {

			   textBox_Binary->Text = a;
		   }
		   else
		   {
			   textBox_Binary->Text = nullptr;
			   textBox_Binary->Text = a;
		   }

	   }

			  ////Octal /Dec -BIn
			  bool operationdecimal = false;
			  bool operationoctal = false;
	int OctaTobin(int oct)
	   {
		   int bin = 0;
		   int place = 1;
		   int rem;
		   int temp = oct;
		   int octalval[] = { 0,1,10,11,100,101,110,111 };


		   while (temp > 0)
		   {
			   rem = temp % 10;
			   bin += (octalval[rem] * place);
			   temp /= 10;
			   place *= 1000;
		   }

		   return bin;
	   }
	int OctalToDecimal(int oct)
	{
		int temp = OctaTobin(oct);
		int rem = 0, dec = 0;
		int i = 0;
		while (temp != 0)
		{
			rem = temp % 10;
			dec += rem * pow(2, i);
			i++;
			temp /= 10;
		}
		 return dec;
	}
private: System::Void buttonA_Click(System::Object^ sender, System::EventArgs^ e) {
	// Get the control the Button control is located in. In this case a GroupBox.
	Control^ control = buttonA->Parent;

	// Set the text and backcolor of the parent control.
	control->Text = "My Groupbox";
	control->BackColor = Color::Blue;

	// Get the form that the Button control is contained within.
	Form^ myForm = button1->FindForm();

	// Set the text and color of the form containing the Button.
	myForm->Text = "The Form of My Control";
	myForm->BackColor = Color::Red;

}

private: System::Void button_Octal_Click(System::Object^ sender, System::EventArgs^ e)
{
	operationoctal = true;
	num8->Enabled = false;
	num9->Enabled = false;
	buttonA->Enabled = false;
	buttonB->Enabled = false;
	buttonC->Enabled = false;
	buttonD->Enabled = false;
	buttonE->Enabled = false;
	buttonF->Enabled = false;

	if (textBox1->Text == "") {
		textBox_Octal->Text = "0";
		firstNum = "0";
	}
	if (textBox_Octal->Text != nullptr)
	{
		textBox1->Text = textBox_Octal->Text;
	}
	else {
		
		operationdecimal = false;

		firstNum = textBox1->Text;
		textBox_Octal->Text = textBox1->Text;
		String^ a = OctaTobin(Convert::ToInt32(firstNum)).ToString("D8");
		String^ b = OctalToDecimal(Convert::ToInt32(firstNum)).ToString();
		/*
		button_Octal->BackColor = Color::Green;
		button_Octal->CreateControl();
		button_Octal->Enabled = true;
		operationoctal = true;
		*/
		;

		if (textBox_Binary->Text == "") {

			textBox_Binary->Text = a;

		}
		else
		{
			textBox_Binary->Text = nullptr;
			textBox_Binary->Text = a;

		}
		if (textBox_Decimal->Text == "")
		{
			textBox_Decimal->Text = b;
		}
		else
		{
			textBox_Decimal->Text = nullptr;
			textBox_Decimal->Text = b;

		}
	}
	operationoctal = false;
}



	  
};
}


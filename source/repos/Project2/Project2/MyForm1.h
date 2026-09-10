#pragma once

#include <msclr/marshal_cppstd.h>
#include <array>
#include <valarray>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include "string.h"
#include "array"
#include <wchar.h>
#include <cliext/map>
#include <limits.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>
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
	using namespace cliext;
	using namespace std;

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
	private: System::Windows::Forms::Button^ Left_Brackets;
	private: System::Windows::Forms::Button^ Right_Bracktes;






	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button_Decimal;
	private: System::Windows::Forms::TextBox^ textBox_Decimal;










	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			this->Left_Brackets = (gcnew System::Windows::Forms::Button());
			this->Right_Bracktes = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button_Decimal = (gcnew System::Windows::Forms::Button());
			this->textBox_Decimal = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			this->textBox1->Tag = L"0";
			this->textBox1->UseWaitCursor = true;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm1::textBox1_KeyDown);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox1_KeyPress);
			this->textBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm1::textBox1_KeyUp);
			this->textBox1->ImeModeChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_ImeModeChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->UseWaitCursor = true;
			// 
			// backclear
			// 
			this->backclear->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->backclear, L"backclear");
			this->backclear->Name = L"backclear";
			this->backclear->UseVisualStyleBackColor = false;
			this->backclear->UseWaitCursor = true;
			this->backclear->Click += gcnew System::EventHandler(this, &MyForm1::backclear_Click);
			// 
			// multi
			// 
			this->multi->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->multi, L"multi");
			this->multi->Name = L"multi";
			this->multi->UseVisualStyleBackColor = false;
			this->multi->UseWaitCursor = true;
			this->multi->Click += gcnew System::EventHandler(this, &MyForm1::multi_Click);
			this->multi->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::sum_MouseDown);
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->clear, L"clear");
			this->clear->Name = L"clear";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->UseWaitCursor = true;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm1::clear_Click);
			// 
			// division
			// 
			this->division->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->division, L"division");
			this->division->Name = L"division";
			this->division->UseVisualStyleBackColor = false;
			this->division->UseWaitCursor = true;
			this->division->Click += gcnew System::EventHandler(this, &MyForm1::division_Click);
			this->division->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::sum_MouseDown);
			// 
			// sub
			// 
			this->sub->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->sub, L"sub");
			this->sub->Name = L"sub";
			this->sub->UseVisualStyleBackColor = false;
			this->sub->UseWaitCursor = true;
			this->sub->Click += gcnew System::EventHandler(this, &MyForm1::sub_Click);
			this->sub->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::sum_MouseDown);
			// 
			// sum
			// 
			this->sum->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->sum, L"sum");
			this->sum->Name = L"sum";
			this->sum->UseVisualStyleBackColor = false;
			this->sum->UseWaitCursor = true;
			this->sum->Click += gcnew System::EventHandler(this, &MyForm1::sum_Click);
			this->sum->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::sum_MouseDown);
			// 
			// num9
			// 
			this->num9->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->num9, L"num9");
			this->num9->Name = L"num9";
			this->num9->UseVisualStyleBackColor = false;
			this->num9->UseWaitCursor = true;
			this->num9->Click += gcnew System::EventHandler(this, &MyForm1::Button_Click);
			// 
			// num8
			// 
			this->num8->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->num8, L"num8");
			this->num8->Name = L"num8";
			this->num8->UseVisualStyleBackColor = false;
			this->num8->UseWaitCursor = true;
			this->num8->Click += gcnew System::EventHandler(this, &MyForm1::Button_Click);
			// 
			// num7
			// 
			this->num7->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->num7, L"num7");
			this->num7->Name = L"num7";
			this->num7->UseVisualStyleBackColor = false;
			this->num7->UseWaitCursor = true;
			this->num7->Click += gcnew System::EventHandler(this, &MyForm1::Button_Click);
			// 
			// num6
			// 
			this->num6->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->num6, L"num6");
			this->num6->Name = L"num6";
			this->num6->UseVisualStyleBackColor = false;
			this->num6->UseWaitCursor = true;
			this->num6->Click += gcnew System::EventHandler(this, &MyForm1::Button_Click);
			// 
			// num5
			// 
			this->num5->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->num5, L"num5");
			this->num5->Name = L"num5";
			this->num5->UseVisualStyleBackColor = false;
			this->num5->UseWaitCursor = true;
			this->num5->Click += gcnew System::EventHandler(this, &MyForm1::Button_Click);
			// 
			// num4
			// 
			this->num4->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->num4, L"num4");
			this->num4->Name = L"num4";
			this->num4->UseVisualStyleBackColor = false;
			this->num4->UseWaitCursor = true;
			this->num4->Click += gcnew System::EventHandler(this, &MyForm1::Button_Click);
			// 
			// num3
			// 
			this->num3->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->num3, L"num3");
			this->num3->Name = L"num3";
			this->num3->UseVisualStyleBackColor = false;
			this->num3->UseWaitCursor = true;
			this->num3->Click += gcnew System::EventHandler(this, &MyForm1::Button_Click);
			// 
			// num2
			// 
			this->num2->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->num2, L"num2");
			this->num2->Name = L"num2";
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
			resources->ApplyResources(this->num1, L"num1");
			this->num1->Name = L"num1";
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
			resources->ApplyResources(this->point, L"point");
			this->point->Name = L"point";
			this->point->UseVisualStyleBackColor = false;
			this->point->UseWaitCursor = true;
			// 
			// res
			// 
			this->res->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->res, L"res");
			this->res->Name = L"res";
			this->res->UseVisualStyleBackColor = false;
			this->res->UseWaitCursor = true;
			this->res->Click += gcnew System::EventHandler(this, &MyForm1::res_Click);
			// 
			// zero
			// 
			this->zero->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->zero, L"zero");
			this->zero->Name = L"zero";
			this->zero->UseVisualStyleBackColor = false;
			this->zero->UseWaitCursor = true;
			this->zero->Click += gcnew System::EventHandler(this, &MyForm1::Button_Click);
			// 
			// buttonD
			// 
			this->buttonD->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->buttonD, L"buttonD");
			this->buttonD->Name = L"buttonD";
			this->buttonD->UseVisualStyleBackColor = false;
			this->buttonD->UseWaitCursor = true;
			this->buttonD->Click += gcnew System::EventHandler(this, &MyForm1::Button_Click);
			// 
			// buttonA
			// 
			this->buttonA->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->buttonA, L"buttonA");
			this->buttonA->Name = L"buttonA";
			this->buttonA->UseVisualStyleBackColor = false;
			this->buttonA->UseWaitCursor = true;
			this->buttonA->Click += gcnew System::EventHandler(this, &MyForm1::Button_Click);
			// 
			// buttonB
			// 
			this->buttonB->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->buttonB, L"buttonB");
			this->buttonB->Name = L"buttonB";
			this->buttonB->UseVisualStyleBackColor = false;
			this->buttonB->UseWaitCursor = true;
			this->buttonB->Click += gcnew System::EventHandler(this, &MyForm1::Button_Click);
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
			resources->ApplyResources(this->buttonC, L"buttonC");
			this->buttonC->Name = L"buttonC";
			this->buttonC->UseVisualStyleBackColor = false;
			this->buttonC->UseWaitCursor = true;
			this->buttonC->Click += gcnew System::EventHandler(this, &MyForm1::Button_Click);
			// 
			// buttonE
			// 
			this->buttonE->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->buttonE, L"buttonE");
			this->buttonE->Name = L"buttonE";
			this->buttonE->UseVisualStyleBackColor = false;
			this->buttonE->UseWaitCursor = true;
			this->buttonE->Click += gcnew System::EventHandler(this, &MyForm1::Button_Click);
			// 
			// buttonF
			// 
			this->buttonF->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->buttonF, L"buttonF");
			this->buttonF->Name = L"buttonF";
			this->buttonF->UseVisualStyleBackColor = false;
			this->buttonF->UseWaitCursor = true;
			this->buttonF->Click += gcnew System::EventHandler(this, &MyForm1::button_Binary_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->UseWaitCursor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// buttonhex
			// 
			resources->ApplyResources(this->buttonhex, L"buttonhex");
			this->buttonhex->Name = L"buttonhex";
			this->buttonhex->UseVisualStyleBackColor = true;
			this->buttonhex->UseWaitCursor = true;
			this->buttonhex->Click += gcnew System::EventHandler(this, &MyForm1::buttonhex_Click);
			// 
			// button_Binary
			// 
			this->button_Binary->BackColor = System::Drawing::SystemColors::Control;
			this->button_Binary->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_Binary->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button_Binary->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button_Binary, L"button_Binary");
			this->button_Binary->Name = L"button_Binary";
			this->button_Binary->UseVisualStyleBackColor = false;
			this->button_Binary->UseWaitCursor = true;
			this->button_Binary->Click += gcnew System::EventHandler(this, &MyForm1::button_Binary_Click);
			// 
			// textBox_Hex
			// 
			this->textBox_Hex->BackColor = System::Drawing::SystemColors::Control;
			this->textBox_Hex->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBox_Hex, L"textBox_Hex");
			this->textBox_Hex->Name = L"textBox_Hex";
			this->textBox_Hex->UseWaitCursor = true;
			this->textBox_Hex->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox_Hex_TextChanged);
			this->textBox_Hex->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox_Hex_KeyPress);
			// 
			// textBox_Binary
			// 
			this->textBox_Binary->BackColor = System::Drawing::SystemColors::Control;
			this->textBox_Binary->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBox_Binary, L"textBox_Binary");
			this->textBox_Binary->Name = L"textBox_Binary";
			this->textBox_Binary->UseWaitCursor = true;
			this->textBox_Binary->Click += gcnew System::EventHandler(this, &MyForm1::button_Binary_Click);
			this->textBox_Binary->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox_Binary_TextChanged_1);
			this->textBox_Binary->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm1::textBox_Binary_KeyDown);
			this->textBox_Binary->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox_Binary_KeyPress);
			// 
			// button_Octal
			// 
			resources->ApplyResources(this->button_Octal, L"button_Octal");
			this->button_Octal->Name = L"button_Octal";
			this->button_Octal->UseVisualStyleBackColor = true;
			this->button_Octal->UseWaitCursor = true;
			this->button_Octal->Click += gcnew System::EventHandler(this, &MyForm1::button_Octal_Click);
			// 
			// textBox_Octal
			// 
			this->textBox_Octal->BackColor = System::Drawing::SystemColors::Control;
			this->textBox_Octal->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBox_Octal, L"textBox_Octal");
			this->textBox_Octal->Name = L"textBox_Octal";
			this->textBox_Octal->UseWaitCursor = true;
			this->textBox_Octal->Click += gcnew System::EventHandler(this, &MyForm1::button_Octal_Click);
			this->textBox_Octal->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox_Octal_TextChanged);
			this->textBox_Octal->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm1::textBox_Octal_KeyDown);
			this->textBox_Octal->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox_Octal_KeyPress);
			// 
			// Left_Brackets
			// 
			this->Left_Brackets->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->Left_Brackets, L"Left_Brackets");
			this->Left_Brackets->Name = L"Left_Brackets";
			this->Left_Brackets->UseVisualStyleBackColor = false;
			this->Left_Brackets->UseWaitCursor = true;
			this->Left_Brackets->Click += gcnew System::EventHandler(this, &MyForm1::Left_Brackets_Click);
			// 
			// Right_Bracktes
			// 
			this->Right_Bracktes->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->Right_Bracktes, L"Right_Bracktes");
			this->Right_Bracktes->Name = L"Right_Bracktes";
			this->Right_Bracktes->UseVisualStyleBackColor = false;
			this->Right_Bracktes->UseWaitCursor = true;
			this->Right_Bracktes->Click += gcnew System::EventHandler(this, &MyForm1::Right_Bracktes_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->button5, L"button5");
			this->button5->Name = L"button5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->UseWaitCursor = true;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Control;
			resources->ApplyResources(this->button6, L"button6");
			this->button6->Name = L"button6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->UseWaitCursor = true;
			// 
			// textBox2
			// 
			resources->ApplyResources(this->textBox2, L"textBox2");
			this->textBox2->Name = L"textBox2";
			this->textBox2->UseWaitCursor = true;
			// 
			// button_Decimal
			// 
			resources->ApplyResources(this->button_Decimal, L"button_Decimal");
			this->button_Decimal->Name = L"button_Decimal";
			this->button_Decimal->UseVisualStyleBackColor = true;
			this->button_Decimal->UseWaitCursor = true;
			this->button_Decimal->Click += gcnew System::EventHandler(this, &MyForm1::button_Decimal_Click);
			// 
			// textBox_Decimal
			// 
			this->textBox_Decimal->BackColor = System::Drawing::SystemColors::Control;
			this->textBox_Decimal->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_Decimal->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			resources->ApplyResources(this->textBox_Decimal, L"textBox_Decimal");
			this->textBox_Decimal->Name = L"textBox_Decimal";
			this->textBox_Decimal->UseWaitCursor = true;
			this->textBox_Decimal->Click += gcnew System::EventHandler(this, &MyForm1::button_Decimal_Click);
			this->textBox_Decimal->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox_Decimal_TextChanged);
			this->textBox_Decimal->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm1::textBox_Decimal_KeyDown);
			this->textBox_Decimal->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox_Decimal_KeyPress);
			// 
			// MyForm1
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->textBox_Decimal);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button_Decimal);
			this->Controls->Add(this->button_Binary);
			this->Controls->Add(this->textBox_Binary);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->Right_Bracktes);
			this->Controls->Add(this->Left_Brackets);
			this->Controls->Add(this->textBox_Octal);
			this->Controls->Add(this->button_Octal);
			this->Controls->Add(this->textBox_Hex);
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
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm1";
			this->UseWaitCursor = true;
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e)
	{

		buttonA->Enabled = false;
		buttonB->Enabled = false;
		buttonC->Enabled = false;
		buttonD->Enabled = false;
		buttonE->Enabled = false;
		buttonF->Enabled = false;
	}
		   double result = 0.0;
		   bool operationStarted = false;
		   bool operationStartedBinary = false;
		   bool operationStartedOctal = false;
		   bool operationStartedDecimal = false;
		   bool operationStartedHex = false;
		   String^ firstNum = String::Empty;
		   String^ secondNum = String::Empty;
		   /// <summary>
		   /// /
		   /// </summary>
	public:
		enum class operationenum {
			Add, Subtract, Multiply, Divide, LeftBrackets, RightBrackets
		};

		operationenum  a;
		property operationenum operation{
			operationenum get()
			{
				return a;
			}

			void set(operationenum v)
			{
				a = v;
			}
		}
			/// <summary>
			/// //
			/// </summary>
			enum class operationProgramming
		{
			Decimal, Binary, Octal, Hexadecimal
		};
		operationProgramming  b;
		property operationProgramming operationProgramingIdentfiy{
			operationProgramming get()
			{
				return b;
			}

			void set(operationProgramming v)
			{
				b = v;
			}
		}
			/// <summary>
			/// /
			/// </summary>
			enum class BinaryOperation {
			sumBinary, SubtractBinary, MultiplyBinary, DivideBinary
		};

		BinaryOperation  c;
		property BinaryOperation BinOpe{
			BinaryOperation get()
			{
				return c;
			}

			void set(BinaryOperation v)
			{
				c = v;
			}
		}
			/// </summary>
			enum class OctalOperation {
			sumOctal, SubtractOctal, MultiplyOctal, DivideOctal
		};

		OctalOperation  h;
		property OctalOperation OctOpe{
			OctalOperation get()
			{
				return h;
			}

			void set(OctalOperation v)
			{
				h = v;
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
			else
			{

				textBox1->Text += value;
			}
			
			if (operationProgramingIdentfiy == operationProgramming::Octal)
			{
				Octal(firstNum, textBox1);
			}
			if (operationProgramingIdentfiy == operationProgramming::Binary)
			{
				Binary(firstNum, textBox1);
			}
			if (operationProgramingIdentfiy == operationProgramming::Decimal)
			{
				Decimal(firstNum, textBox1);
			}

			operationStarted = false;



		}

	
		private: System::Void sum_Click(System::Object^ sender, System::EventArgs^ e) {
			
			
			switch (operationProgramingIdentfiy)
		{
			case  operationProgramming::Decimal:
				operation = operationenum::Add;

			case  operationProgramming::Binary:
				BinOpe = BinaryOperation::sumBinary;
			case operationProgramming::Octal:
				OctOpe = OctalOperation::sumOctal;

			}
			showhistory1(textBox2, operation);

		}
	private: System::Void sub_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
		switch (operationProgramingIdentfiy)
		{
		case  operationProgramming::Decimal:
			operation = operationenum::Subtract;

		case  operationProgramming::Binary:
			BinOpe = BinaryOperation::SubtractBinary;
		case operationProgramming::Octal:
			OctOpe = OctalOperation::SubtractOctal;

		}

		showhistory1(textBox2, operation);
	}

	private: System::Void division_Click(System::Object^ sender, System::EventArgs^ e) {
		
		switch (operationProgramingIdentfiy)
		{
		case  operationProgramming::Decimal:
			operation = operationenum::Divide;

		case  operationProgramming::Binary:
			BinOpe = BinaryOperation::DivideBinary;
		case operationProgramming::Octal:
			OctOpe = OctalOperation::DivideOctal;

		}
		showhistory1(textBox2, operation);
	}
	private: System::Void multi_Click(System::Object^ sender, System::EventArgs^ e) {
		
		switch (operationProgramingIdentfiy)
		{
		case  operationProgramming::Decimal:
			operation = operationenum::Multiply;
		case  operationProgramming::Binary:
			BinOpe = BinaryOperation::MultiplyBinary;
		case operationProgramming::Octal:
			OctOpe = OctalOperation::MultiplyOctal;
		}
		showhistory1(textBox2, operation);
	}
	private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox1->Text = String::Empty;
		result = 0;
		firstNum = "0";
		secondNum = "0";
		textBox_Binary->Text = String::Empty;
		textBox_Decimal->Text = String::Empty;
		textBox_Octal->Text = String::Empty;
		textBox2->Text = String::Empty;

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
					   case operationenum::LeftBrackets:
						   return "(";
					   case operationenum::RightBrackets:
						   return ")";
					   default: return String::Empty;
					   }

				   }

	public: System::Void res_Click(System::Object^ sender, System::EventArgs^ e)
	{
		

		if( operationProgramingIdentfiy == operationProgramming::Octal)
		{
			secondNum = textBox1->Text;
			result = CalculateOctal(OctOpe, firstNum, secondNum, textBox1);
			firstNum = Convert::ToString(result);
			textBox1->Text = result.ToString();
			textBox_Octal->Text = Convert::ToString(result);
			Octal(result.ToString(), textBox1);
			showhistory3(textBox2, secondNum);
		}
		
		if(operationProgramingIdentfiy== operationProgramming::Binary)
		{

			secondNum = textBox1->Text;
			result = CalculateBinary(BinOpe, firstNum, secondNum, textBox1);
			textBox1->Text = result.ToString();
			textBox_Binary->Text = Convert::ToString(result);
			firstNum = Convert::ToString(result);
			Binary(result.ToString(), textBox1);
			showhistory3(textBox2,secondNum);
		}
		
		if(firstNum!= String::Empty && operationProgramingIdentfiy ==operationProgramming::Decimal )
		{

			secondNum = textBox1->Text;
			result = Calculate(operation, firstNum, secondNum, textBox1);
			firstNum = Convert::ToString(result);
			textBox1->Text = Convert::ToString(result);
			textBox_Decimal->Text = Convert::ToString(result);
			Decimal(result.ToString(), textBox1);
			showhistory3(textBox2,secondNum);
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
		showhistory0(textBox2, firstNum);
		
		switch (operationProgramingIdentfiy)
		{
		case  operationProgramming::Decimal:
			Operation_Display(textBox1, firstNum, operation);
			
		case  operationProgramming::Binary:
			Operation_DisplayBinary(textBox1, firstNum, BinOpe);
	
		case operationProgramming::Octal:
		{
			Operation_DisplayOctal(textBox1, firstNum, OctOpe);
			
		}
		}
		//showhistory1(textBox2, operation);
		
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
 public: static void Operation_DisplayBinary(TextBox^ textBox1, String^ firstNum, BinaryOperation BinOpe)
 {
	 String^ displayText = String::Empty;

	 displayText->Concat(firstNum, GetsymbolBinary(BinOpe));

	 textBox1->Text = displayText;


 }
public:
			  static double  CalculateBinary(BinaryOperation BinOpe, String^ firstNum, String^ secondNum, TextBox^ operationDisplay)
			  {
				  String^ result = String::Empty ;
				  double num1, num2;
				 
			
				  if (!Double::TryParse(firstNum, num1) || !Double::TryParse(secondNum, num2))
				  {
					  operationDisplay->Text = "Invalid numeric input";
					  return 0; // or throw a user-friendly exception / show error UI
				  }
				
				  switch (BinOpe)
				  {
				  case BinaryOperation::sumBinary:
				  {

					  result = sumBinary(num1,num2);
					  break;
				  }
				  case BinaryOperation::SubtractBinary:
				  {
					  result = SubtractBinary(num1, num2);
					  break;
				  }

				  case BinaryOperation::MultiplyBinary: {
					  result = MultiplyBinary(num1, num2);
					  break;
				  }
				  case BinaryOperation::DivideBinary: {

					  
					  result = DivideBinary(num1, num2).ToString();
					  break;
				  }

				  }

				  operationDisplay->Text = Operation_Display_WithResult2(firstNum, BinOpe, secondNum, result);

				  return Convert::ToDouble(result);

			  }
				 public: static String^ Operation_Display_WithResult2(String^ firstNum, BinaryOperation BinOpe, String^ secondNum, String^ result)
				 {
					 String^ displayText = String::Empty;

					 displayText->Concat(firstNum, GetsymbolBinary(BinOpe), secondNum, "=", result);

					 return displayText;
				 }
					   public: static  String^ GetsymbolBinary(BinaryOperation operation)
					   {

						   switch (operation)
						   {
						   case BinaryOperation::sumBinary:
							   return "+";

						   case BinaryOperation::SubtractBinary:
							   return "-";

						   case BinaryOperation::MultiplyBinary:
							   return "*";

						   case BinaryOperation::DivideBinary:
							   return "/";
						  
						   default: return String::Empty;
						   }

					   }


	public:static String^ sumBinary(double num1, double num2)
	   {
	       
		double c = convertBinarytTOInt(num1);

		double d = convertBinarytTOInt(num2);
		double  result = c + d;
		String ^ g = ConvertDeciToBin(result).ToString("D8");
		
		return g;
	   }
		public:static String^ SubtractBinary(double num1, double num2)
		{
			double c = convertBinarytTOInt(num1);
			double d = convertBinarytTOInt(num2);
			double  result = c - d;
			String^ g = ConvertDeciToBin(result).ToString("D8");
			return g;
		}
		public:static String^ MultiplyBinary(double num1, double num2)
		{
		    int g = binarymulti(num1, num2);
			return g.ToString();
			
		}
		static  int binaryProduct(int binaryOne, int binaryTwo)
	    {
				  int i = 0;
				  int  remainder = 0;

				  int  binaryProd = 0;
				  cli::array<int>^ sum = gcnew cli::array<int>(500);

				  while (binaryOne != 0 || binaryTwo != 0)
				  {
					  for (i = 0;i < sum->Length;i++)
					  {
						  sum[i] = { ((((int)binaryOne % 10) + ((int)binaryTwo % 10) + remainder) % 2) };

						  remainder = ((((int)binaryOne % 10) + ((int)binaryTwo % 10) + remainder) / 2);

						  binaryOne = ((int)binaryOne / 10);

						  binaryTwo = ((int)binaryTwo / 10);

					  }
				  }

				  if (remainder != 0)
				  {
					  sum[i++] = remainder;

				  }
				  --i;
				  while (i >= 0)
				  {
					  binaryProd = (binaryProd * 10) + sum[i--];

				  }
				  return binaryProd;

			  }
		 
		 static int binarymulti(int binary1, int binary2)
		  {
			  int digit, factor = 1;

			  int multiply = 0;
			  while (binary2 != 0)
			  {
				  digit = binary2 % 10;
				  if (digit == 1)
				  {
					  binary1 = binary1 * factor;
					  multiply = binaryProduct(binary1, multiply);
				  }
				  else
					  binary1 = binary1 * factor;

				  binary2 = binary2 / 10;
				  factor = 10;
			  }
			  return multiply;

		  } 
	
		public:static double DivideBinary(int n, int d)
		{
			int r = 0;
			int q = 0;
			int sign = 1;
			bool n_is_min = false;

			// Division by zero
			assert(d != 0);

			if (d == 1)
				return n;

			if (d == INT_MIN)
				return n == INT_MIN ? 1 : 0;

			if (n == INT_MIN)
			{

				// (INT_MIN / -1) == -INT_MIN
				// and that is not representable in 'int'
				// We treat it like a division by zero.

				assert(d != -1);

				n_is_min = true;
				n++; // we'll handle that later.
			}

			if (n > 0 != d > 0)
			{
				sign = -1;
			}
			n = abs(n);
			d = abs(d);

			for (int i = 31; i >= 0; i--)
			{

				r <<= 1;           // left shift r by 1
				r |= (n >> i) & 1; // set bit r(0) = n(i)

				if (r >= d)
				{

					// 'r', made by the first 'i' digits of 'n',
					// is finally bigger than 'd'. Now subtract the divisor
					// from it and set the i-th bit in the quotient to 1.
					r -= d;
					q |= 1 << i;
				}
			}

			// handle the special case where n == INT_MIN
			if (n_is_min && r == d - 1) {

				// The dividend was originally INT_MIN, but we made it be INT_MIN+1
				// in order to convert it to a positive value.
				//
				// Now the reminder is exactly equal to 'd-1', which means that,
				// if 'n' was just larger by 1, it would have been 0, which is exactly
				// our case here.

				r = 0; // reset the reminder, optional in this context
				q++;   // increase the quotient by one
			}

			return q * sign;
		
		}
	   /// <summary>
	   /// convert binary to decimal - \HEX - Octal
	   /// </summary>
	   /// <param name="bin"></param>
	   /// <returns></returns>
	public:static int convertBinarytTOInt(int bin)
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

	private: System::Void button_Binary_Click(System::Object^ sender, System::EventArgs^ e) {
		operationProgramingIdentfiy = operationProgramming::Binary;
		
		if (textBox_Binary->Text != String::Empty)
		{
			textBox1->Text = textBox_Binary->Text;
		}
		else 
		{
			Binary(firstNum, textBox1);
		}
		operationStartedBinary = true;
		operationStartedDecimal = false;
		operationStartedOctal = false;
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
		
	
	

	}

	  public:String^ Binary(String^ firstNum, TextBox^ operationDisplay)
	  {
		  if (operationDisplay == textBox1) {
			  if (operationDisplay->Text == "")
			  {
				  textBox_Binary->Text = "0";
				  firstNum = "0";
			  }
			  else
			  {
				  firstNum = textBox1->Text;
				  textBox_Binary->Text = firstNum;
				  String^ a = convertBinarytTOctalM2(Convert::ToInt32(firstNum)).ToString();
				  String^ b = convertBinarytTOInt(Convert::ToInt32(firstNum)).ToString();
				//  String^ c = bin_to_hex(msclr::interop::marshal_as<std::string>(firstNum));
				 

				  if (textBox_Octal->Text == "") {

					  textBox_Octal->Text = a;
				  }
				  else
				  {
					  textBox_Octal->Text = nullptr;
					  textBox_Octal->Text = a;
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
		  }
		  else
		  {
			  if (textBox_Binary->Text == "")
				  {
					  textBox1->Text = "";
					  firstNum = "";
				  }
				  else
				  {

					  firstNum = textBox_Binary->Text;
					  textBox1->Text = firstNum;
					  String^ a = convertBinarytTOctalM2(Convert::ToInt32(firstNum)).ToString();
					  String^ b = convertBinarytTOInt(Convert::ToInt32(firstNum)).ToString();
					 // String^ c = ConvertBinToHex(Convert::ToDouble(firstNum));
					  //textBox_Hex->Text = c;

					  if (textBox_Octal->Text == "") {

						  textBox_Octal->Text = a;
					  }
					  else
					  {
						  textBox_Octal->Text = nullptr;
						  textBox_Octal->Text = a;
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
			  }
		  
		return firstNum;
	}
		  
	
		String^ bin_to_hex(std::string binary) {
				binary = std::string(binary.length() % 4 ? 4 - binary.length() % 4 : 0, '0') + binary;
				typedef cliext::map<String^, char> hex_dict;
				hex_dict c1;
				c1.insert(hex_dict::make_value("0000", L'0'));
				c1.insert(hex_dict::make_value("0001", L'1'));
				c1.insert(hex_dict::make_value("0010", L'2'));
				c1.insert(hex_dict::make_value("0011", L'3'));
				c1.insert(hex_dict::make_value("0100", L'4'));
				c1.insert(hex_dict::make_value("0101", L'5'));
				c1.insert(hex_dict::make_value("0110", L'6'));
				/*hex_dict.insert("0111", '7');
				hex_dict.insert("1000", '8');
				hex_dict.insert("1001", '9');
				hex_dict.insert("1010", 'A');
				hex_dict.insert("1011", 'B');
				hex_dict.insert("1100", 'C');
				hex_dict.insert("1011", 'D');
				hex_dict.insert("1110", 'E');
				hex_dict.insert("1111", 'F');
				*/
				String^ hexadecimal;
				for (size_t i = 0; i < binary.length(); i += 4) {
					String^ group = marshal_as<String^> (binary.substr(i, 4));
					hexadecimal += c1[group];
				}
				return hexadecimal;
				
			}
/// <summary>
/// Decimal - bin
/// </summary>
/// <param name="sender"></param>
/// <param name="e"></param>
/// <returns></returns>
private: System::Void button_Decimal_Click(System::Object^ sender, System::EventArgs^ e) {
	operationProgramingIdentfiy = operationProgramming::Decimal;
	num2->Enabled = true;
	num3->Enabled = true;
	num4->Enabled = true;
	num5->Enabled = true;
	num6->Enabled = true;
	num7->Enabled = true;
	num8->Enabled = true;
	num9->Enabled = true;
	buttonA->Enabled = false;
	buttonB->Enabled = false;
	buttonC->Enabled = false;
	buttonD->Enabled = false;
	buttonE->Enabled = false;
	buttonF->Enabled = false;
	operationStartedBinary = false;
	operationStartedDecimal = true;
	operationStartedOctal = false;
	if (textBox_Decimal->Text != String::Empty)
	{
		textBox1->Text = textBox_Decimal->Text;
	}
	else
		Decimal(firstNum, textBox1);

}
	public:String^ Decimal(String^ firstNum ,TextBox ^ operationDisplay){
	
		if (operationDisplay == textBox1) {
			if (operationDisplay->Text == String::Empty)
			{
				textBox_Decimal->Text = "0";
				firstNum = "0";
			}

			else
			{
				firstNum = textBox1->Text;
				textBox_Decimal->Text = firstNum;

				String^ Bin = ConvertDeciToBin(Convert::ToInt32(firstNum)).ToString("D8");
				String^ octal = convertDeciToOCtal(Convert::ToInt32(firstNum)).ToString();

				if (textBox_Binary->Text == "") {

					textBox_Binary->Text = Bin;
				}
				else
				{
					textBox_Binary->Text = nullptr;
					textBox_Binary->Text = Bin;
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
		else {
			if (operationDisplay->Text == "")
			{
				textBox1->Text = "0";
				firstNum = "0";
			}
			
				else
				{ 
				firstNum = textBox_Decimal->Text;
				textBox1->Text = firstNum;


				String^ Bin = ConvertDeciToBin(Convert::ToInt32(firstNum)).ToString("D8");
				String^ octal = convertDeciToOCtal(Convert::ToInt32(firstNum)).ToString();

				if (textBox_Binary->Text == "") {

					textBox_Binary->Text = Bin;
				}
				else
				{
					textBox_Binary->Text = nullptr;
					textBox_Binary->Text = Bin;
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
		
		
	return  firstNum;
}
	
		 public:static int ConvertDeciToBin(int dec)
		  {
			  int temp = dec;
			  int bin = 0;
			  int i = 1;
			  
			  while (temp != 0)
			  {
				  
				  bin = bin + ((temp % 2) *i);
				  temp /= 2;
				  i *= 10;
				 
			  }
		      
			  return bin;
		  }


		 
	   std::string decToBinary(int n ) {

		   // String to store the binary representation
		   std::string bin ;

		   while (n != 0) {

			   // Finding (n % 2) using bitwise AND operator
			   // (n & 1) gives the least significant bit (LSB)
			   

				   int bit = n & 1;
				   bin.push_back('0' + bit);

				   // Right shift n by 1 (equivalent to n = n / 2)
				   // This removes the least significant bit (LSB)

				   n = n >> 1;
				   
				  
		   }
           
		   std::reverse(bin.begin(), bin.end());
		   
		
		   return bin;
	   }
	   int convertdecimaltobinmethod3(int decimal)
	   {
		   
		   int bin =0;
		   int index = 0;
		   for (int i = sizeof(int) * 8 - 1; i >= 0; i--) 
		   {
			   bin = (decimal >> i) & 1;
			   //if (i % 4 == 0) { bin = '/0'; }// Group by 4 bits for readability
		   }
		   
		   return bin;
	   }
	   
	   static int convertDeciToOCtal(int decimal)
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
	   /// <summary>
	   /// HEX to BIN
	   /// </summary>
	   /// <param name="s"></param>
	   /// <returns></returns>
	   


	   
	   private: System::Void buttonhex_Click(System::Object^ sender, System::EventArgs^ e) {
		   buttonA->Enabled = true;
		   buttonB->Enabled = true;
		   buttonC->Enabled = true;
		   buttonD->Enabled = true;
		   buttonE->Enabled = true;
		   buttonF->Enabled = true;
		   num8->Enabled = true;
		   num9->Enabled = true;
		   num7->Enabled = true;
		   num6->Enabled = true;
		   num5->Enabled = true;
		   num4->Enabled = true;
		   num3->Enabled = true;
		   num2->Enabled = true;
		   num1->Enabled = true;
		   zero->Enabled = true;
	       
		   if (textBox_Hex!= nullptr)   {
			   textBox1->Text = textBox_Hex->Text;
		   }

		   else
		   {
			   Hex(firstNum, textBox1);
		   }


	   }
	
	public:  String^ Hex(String^ firstNum, TextBox^ operationDisplay)
	{
		if (operationStartedHex == true) {
			if (operationDisplay == textBox1) {
				if (operationDisplay->Text == "")
				{
					textBox_Hex->Text = "0";
					firstNum = "0";
				}
				else
				{
					firstNum = textBox1->Text;
					textBox_Hex->Text = firstNum;
					String^ a = ConvertHexToBinary(firstNum);

					if (textBox_Binary->Text == "")
					{
						textBox_Binary->Text = a;
					}
					else
					{
						textBox_Binary->Text = nullptr;
						textBox_Binary->Text = a;
					}
					if (textBox_Octal->Text == "")
					{
						textBox_Octal->Text = a;
					}
					else
					{
						textBox_Octal->Text = nullptr;
						textBox_Octal->Text = a;
					}
				}
			}
			else
			{
				if (textBox_Hex->Text == "")
				{
					textBox1->Text = "0";
					firstNum = "0";
				}
				else
				{
					firstNum = textBox_Hex->Text;
					textBox1->Text = firstNum;
					String^ a = ConvertHexToBinary(firstNum);

					if (textBox_Binary->Text == "") {
						textBox_Binary->Text = a;
					}
					else
					{
						textBox_Binary->Text = nullptr;
						textBox_Binary->Text = a;
					}

				}
			}
		}
			return firstNum;
		}
		  
		  String^ ConvertHexToBinary(String^ binary)
		  {
			  int temp;
			  temp = Convert::ToInt32(binary);
			  char hex[20];
			  int index, i, digit;
			  int v;
			  // determine required length (number of digits)
			  int t1 = temp;
			  int len = 0;
			  do {
				  ++len;
				  t1 /= 10;
				 
			  } while (t1 != 0);
			  int hexConstant[] = { 0, 1, 10, 11, 100, 101, 110, 111, 1000,
								   1001, 1010, 1011, 1100, 1101, 1110, 1111 };
			  index = 0;
			  cli::array<int>^ numbers = gcnew cli::array<int>(len);
			  while (temp != 0)
			  {
				  digit = temp % 10000;
				  for (i = 0;i < 16;i++)
				  {
					  if (hexConstant[i] == digit)
					  {

						  if (i < 10)
						  {
							  v = (char)(i + 48);
						  }
						  else
						  {
							  v = (char)((i - 10) + 65);
						  }
						  if (index < numbers->Length)
							  numbers[index++] = v;
						  else
							  break; // safety
					  }
				  }
				  temp /= 10000;
			  }
			  

			  // reconstruct numeric result if you need and return it
			  double result = 0.0;
			  double place = 1.0;
			  for (int i = 0; i < index; ++i) {
				  result += numbers[i] * place;
				  place *= 10.0;
			  }

			  return result.ToString();

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
private: System::Void buttonA_Click(System::Object^ sender, System::EventArgs^ e) {
	/*
	// Get the control the Button control is located in. In this case a GroupBox.
	Control^ control = buttonA->Parent;

	// Set the text and backcolor of the parent control.
	control->Text = "My Groupbox";
	control->BackColor = Color::Blue;

	// Get the form that the Button control is contained within.
	Form^ myForm = button1->FindForm();

	// Set the text and color of the form containing the Button.
	myForm->Text = "The Form of My Control";
	myForm->BackColor = Color::Red;*/

}

private: System::Void button_Octal_Click(System::Object^ sender, System::EventArgs^ e)
{
    operationStartedOctal = true;	
	operationProgramingIdentfiy = operationProgramming::Octal;
	
	if (textBox_Octal->Text != String::Empty)
	{
		textBox1->Text = textBox_Octal->Text;
	}
	else 
	{
		Octal(firstNum, textBox1);
	
		
	}
	
	operationStartedBinary = false;
	operationStartedDecimal = false;
	
	num1->Enabled = true;
	num2->Enabled = true;
	num3->Enabled = true;
	num4->Enabled = true;
	num5->Enabled = true;
	num6->Enabled = true;
	num7->Enabled = true;
	num8->Enabled = false;
	num9->Enabled = false;
	buttonA->Enabled = false;
	buttonB->Enabled = false;
	buttonC->Enabled = false;
	buttonD->Enabled = false;
	buttonE->Enabled = false;
	buttonF->Enabled = false;
	
	
	
}

	public: double Octal(String^ firstNum, TextBox^ operationDisplay)
	{
		if (operationStartedOctal == true)
		{

			if (operationDisplay == textBox1) {
				if (operationDisplay->Text == "")
				{
					textBox_Octal->Text = "0";
					firstNum = "0";
				}
				else
				{
					firstNum = textBox1->Text;
					textBox_Octal->Text = firstNum;

					String^ a = Convert_OctaToBin(Convert::ToInt64(firstNum)).ToString("D8");
					String^ b = Convert_OctalToDecimal(Convert::ToInt64(firstNum)).ToString();

					if (textBox_Binary->Text == "")
					{

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
			}
			else
			{
				if (operationDisplay->Text == "")
				{
					textBox1->Text = "0";
					firstNum = "0";
				}
				else
				{
					firstNum = textBox_Octal->Text;
					textBox1->Text = firstNum;

					String^ a = Convert_OctaToBin(Convert::ToInt64(firstNum)).ToString("D8");
					String^ b = Convert_OctalToDecimal(Convert::ToInt64(firstNum)).ToString();

					if (textBox_Binary->Text == "")
					{

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

			}
			
		}
		return 0;
	}
	

		 static  int Convert_OctaToBin(int oct)
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
		static   int Convert_OctalToDecimal(int oct)
		   {
			   int temp = Convert_OctaToBin(oct);
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
public: static double sumOctal(double num1, double num2)
{
	double c = Convert_OctalToDecimal(num1);
	double d = Convert_OctalToDecimal(num2);
	double  result = c + d;
	double g = convertDeciToOCtal(result);
	return g;
}
#define ArraySize 100
	public: static double  SubtractOctal(double num1, double num2)
	{
		int x = 0;int product = 0;
		int bin, bin2;
		int temp = num1; int temp2 = num2;

		// determine required length (number of digits)
		int t1 = temp, t2 = temp2;
		int len = 0;
		do {
			++len;
			t1 /= 10;
			t2 /= 10;
		} while (t1 != 0 || t2 != 0);
		//System::Windows::Forms::MessageBox::Show("Length of result:", "len");
		cli::array<int>^ numbers = gcnew cli::array<int>(sizeof(ArraySize));
		int v = 0;
		while (temp != 0 || temp2 != 0)
		{
			bin = temp % 10;
			bin2 = temp2 % 10;
			
				if (bin < bin2)
				{
					product = bin + 8;
					v = product - bin2;
					temp /= 10;
					temp = temp - 1;

				}

				else
				{
					v = bin - bin2;
					temp /= 10;
				}
				if (x < numbers->Length)
					numbers[x++] = v;
				else
					break;

				
				temp2 /= 10;
			}

		  // reconstruct numeric result if you need and return it
		  double result = 0.0;
		  double place = 1.0;
		  for (int i = 0; i < x; ++i) {
			  result += numbers[i] * place;
			  place *= 10.0;
		  }

		return result;
	}
	 public: static void Operation_DisplayOctal(TextBox^ textBox1, String^ firstNum, OctalOperation OctOpe)
	 {
		 String^ displayText = String::Empty;

		 displayText->Concat(firstNum, GetsymbolOctal(OctOpe));

		 textBox1->Text = displayText;


	 }
public:
	static double  CalculateOctal(OctalOperation OctOpe, String^ firstNum, String^ secondNum, TextBox^ operationDisplay)
	{
		double result = 0;
		double num1, num2;


		if (!Double::TryParse(firstNum, num1) || !Double::TryParse(secondNum, num2))
		{
			operationDisplay->Text = "Invalid numeric input";
			return 0; // or throw a user-friendly exception / show error UI
		}
		
		switch (OctOpe)
		{
		case OctalOperation::sumOctal:
		{

			result = sumOctal(num1, num2);
			break;
		}
		case OctalOperation::SubtractOctal:
		{
			result = SubtractOctal(num1,num2);
			break;
		}

		case OctalOperation::MultiplyOctal: {
			//result = MultiplyOctal(num1, num2);
			break;
		}
		case OctalOperation::DivideOctal: {

			//result = DivideOctal(num1, num2);
			break;
		}

		}

		operationDisplay->Text = Operation_Display_WithResult3(firstNum, OctOpe, secondNum, result.ToString());

		return result;

	}
				 public: static String^ Operation_Display_WithResult3(String^ firstNum, OctalOperation OctOpe, String^ secondNum, String^ result)
				 {
					 String^ displayText = String::Empty;

					 displayText->Concat(firstNum, GetsymbolOctal(OctOpe), secondNum, "=", result);

					 return displayText;
				 }
					   public: static  String^ GetsymbolOctal(OctalOperation operation)
					   {

						   switch (operation)
						   {
						   case OctalOperation::sumOctal:
							   return "+";

							   case OctalOperation::SubtractOctal:
							   return "-";

						   case OctalOperation::MultiplyOctal:
							   return "*";

						   case OctalOperation::DivideOctal:
							   return "/";

						   default: return String::Empty;
						   }

					   }




private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}


private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{

}

private: System::Void textBox1_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) 
{
	
}


private: System::Void textBox_Decimal_Click(System::Object^ sender, System::EventArgs^ e) 
{
	zero->Enabled = true;
	num1->Enabled = true;
	num2->Enabled = true;
	num3->Enabled = true;
	num4->Enabled = true;
	num5->Enabled = true;
	num6->Enabled = true;
	num7->Enabled = true;
	num8->Enabled = true;
	num9->Enabled = true;
	buttonA->Enabled = false;
	buttonB->Enabled = false;
	buttonC->Enabled = false;
	buttonD->Enabled = false;
	buttonE->Enabled = false;
	buttonF->Enabled = false;
	operationStartedBinary = false;
	operationStartedDecimal = true;
}
private: System::Void textBox_Decimal_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
    {
	textBox1->Text = textBox_Decimal->Text;
	if (e->KeyChar > (char)65 || e->KeyChar < (char)90)
	{
		e->Handled = true;
	}
	if (e->KeyChar > 'a' || e->KeyChar < 'z')
	{
		e->Handled = true;
	}
	if (e->KeyChar == '0' || e->KeyChar == '1' || e->KeyChar == '2' || e->KeyChar == '3' || e->KeyChar == '4' || e->KeyChar == '5' 
		|| e->KeyChar == '6' || e->KeyChar == '7'|| e->KeyChar == '8' || e->KeyChar == '9')
	{
		e->Handled = false;
	}
	
	}
	
	
	  static String^ x,^y,^z;
	  bool  operationStartedKeysDecimal = false;
	  bool  operationStartedKeysBinary = false;
	  bool  operationStartedKeysOctal = false;

private: System::Void textBox_Decimal_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (operationProgramingIdentfiy == operationProgramming::Decimal)
	{
		textBox1->Text = textBox_Decimal->Text;
	}
	operationStartedKeysDecimal = true;
	operationStartedKeysBinary = false;
	operationStartedKeysOctal = false;
	
}

private: System::Void textBox_Decimal_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	operationStartedKeysDecimal = true;
	operationStartedKeysBinary = false;
	operationStartedKeysOctal = false;

    firstNum = textBox_Decimal->Text;
	textBox1->Text = textBox_Decimal->Text;
	Decimal(firstNum, textBox_Decimal);


	if (e->KeyCode == Keys::Delete)
	{
		e->Handled = false;
		textBox_Decimal->Text = String::Empty;
		textBox2->Text = String::Empty;

	}
	if (e->KeyCode == Keys::Back)
	{
		e->Handled = false;
		if (textBox_Decimal->Text->Length > 0)
		{
			
			textBox_Decimal->Text = textBox_Decimal->Text->Substring(0, textBox_Decimal->Text->Length - 1);
			textBox_Decimal->Select(textBox_Decimal->Text->Length, 0);
		}

		if (textBox_Decimal->Text == String::Empty)
		{
			textBox_Decimal->Text = String::Empty;
		}

	}

	if (e->KeyCode == Keys::Add)
	{
		Operation_Display(textBox1, firstNum, operation);
		showhistory0(textBox2, firstNum);
		operation = operationenum::Add;
		showhistory1(textBox2, operation);
		x = firstNum;
		textBox_Decimal->Text = "";

	}
	if (e->KeyCode == Keys::Subtract)
	{
		Operation_Display(textBox1, firstNum, operation);
		showhistory0(textBox2, firstNum);
		operation = operationenum::Subtract;
		showhistory1(textBox2, operation);
		x = firstNum;
		textBox_Decimal->Text = "";
	}
	if (e->KeyCode == Keys::Multiply)
	{
		Operation_Display(textBox1, firstNum, operation);
		showhistory0(textBox2, firstNum);
		operation = operationenum::Multiply;
		showhistory1(textBox2, operation);
		x = firstNum;
		textBox_Decimal->Text = "";
	}
	if (e->KeyCode == Keys::Divide)
	{
		Operation_Display(textBox1, firstNum, operation);
		showhistory0(textBox2, firstNum);
		operation = operationenum::Divide;
		showhistory1(textBox2, operation);
		x = firstNum;
		textBox_Decimal->Text = "";
	}
	if (e->KeyCode == Keys::Oemplus)
	{
		    textBox1->Text = "";
			secondNum = textBox_Decimal->Text;
			result = Calculate(operation, x, secondNum, textBox1);
			textBox1->Text = Convert::ToString(result);
			firstNum = Convert::ToString(result);
			textBox_Decimal->Text = Convert::ToString(result);
			showhistory2(textBox2, secondNum);
			Decimal(result.ToString(), textBox1);
		
	}
	
}
private: System::Void textBox_Binary_Click(System::Object^ sender, System::EventArgs^ e) {
	
	zero->Enabled = true;
	num1->Enabled = true;
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
	operationStartedBinary = true;
	operationStartedDecimal = false;


}
private: System::Void textBox_Binary_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
    {
	if (e->KeyChar == '5' || e->KeyChar == '4' || e->KeyChar == '3' || e->KeyChar == '6' || 
		e->KeyChar == '2' || e->KeyChar == '7' || e->KeyChar == '8' || e->KeyChar == '9' )
	{
		e->Handled = true;
	}
	

	if (e->KeyChar > (char)65 || e->KeyChar < (char)90)
	{
		e->Handled = true;
	}
	if (e->KeyChar > 'a' || e->KeyChar < 'z')
	{
		e->Handled = true;
	}
	if (e->KeyChar == '1' || e->KeyChar == '0')
	{
		e->Handled = false;
	
	}
	
	
	}
          
private: System::Void textBox_Binary_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	if (operationProgramingIdentfiy == operationProgramming::Binary)
	{
		textBox1->Text = textBox_Binary->Text;
	}
	
	operationStartedKeysDecimal = false;
	operationStartedKeysBinary = true;
	operationStartedKeysOctal = false;
}
private: System::Void textBox_Binary_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	operationStartedKeysDecimal = false;
	operationStartedKeysBinary = true;
	operationStartedKeysOctal = false;
	
	firstNum = textBox_Binary->Text;
	textBox1->Text = textBox_Binary->Text;
	Binary(firstNum, textBox_Binary);

	if (e->KeyCode == Keys::Delete)
	{
		e->Handled = false;
		textBox_Binary->Text = String::Empty;

	}
	if (e->KeyCode == Keys::Back)
	{
		e->Handled = false;
		if (textBox_Binary->Text->Length > 0)
		{
			textBox_Binary->Text = textBox_Binary->Text->Substring(0, textBox_Binary->Text->Length - 1);
			textBox_Binary->Select(textBox_Binary->Text->Length, 0);
		}

		if (textBox_Binary->Text == String::Empty)
		{
			textBox_Binary->Text = String::Empty;
		}

	}

	if (e->KeyCode == Keys::Add)
	{
		Operation_DisplayBinary(textBox1, firstNum, BinOpe);
		showhistory0(textBox2, firstNum);
		BinOpe = BinaryOperation::sumBinary;
		operation = operationenum::Add;
		showhistory1(textBox2, operation);
		y = firstNum;
		textBox_Binary->Text = "";
		
	}
	if (e->KeyCode == Keys::Subtract)
	{
		Operation_DisplayBinary(textBox1, firstNum, BinOpe);
		showhistory0(textBox2, firstNum);
		BinOpe = BinaryOperation::SubtractBinary;
		operation = operationenum::Subtract;
		showhistory1(textBox2, operation);
		y = firstNum;
		textBox_Binary->Text = "";

	}
	if (e->KeyCode == Keys::Multiply)
	{
		Operation_DisplayBinary(textBox1, firstNum, BinOpe);
		showhistory0(textBox2, firstNum);
		BinOpe = BinaryOperation::MultiplyBinary;
		operation = operationenum::Multiply;
		showhistory1(textBox2, operation);
		y = firstNum;
		textBox_Binary->Text = "";

	}
	if (e->KeyCode == Keys::Divide)
	{
		Operation_DisplayBinary(textBox1, firstNum, BinOpe);
		showhistory0(textBox2, firstNum);
		BinOpe = BinaryOperation::DivideBinary;
		operation = operationenum::Divide;
		showhistory1(textBox2, operation);
		y = firstNum;
		textBox_Binary->Text = "";

	}
	if (e->KeyCode == Keys::Oemplus)
	{
		textBox1->Text = "";
		secondNum = textBox_Binary->Text;
		result = CalculateBinary(BinOpe, y, secondNum, textBox1);
		textBox1->Text = Convert::ToString(result);
		firstNum = Convert::ToString(result);
		textBox_Binary->Text = Convert::ToString(result);
		showhistory2(textBox2, secondNum);
		Binary(result.ToString(), textBox1);
		//}
	}

	

}


private: System::Void textBox_Hex_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar > 'G' || e->KeyChar < 'Z')
	{
		e->Handled = true;
	}
	if (e->KeyChar > 'g' || e->KeyChar < 'z')
	{
		e->Handled = true;
	}
	if (e->KeyChar == 'A')
	{
		e->Handled = false;
	}
	
}
private: System::Void textBox_Hex_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar > 'G' || e->KeyChar < 'Z')
	{
		e->Handled = true;
	}
	if (e->KeyChar > 'g' || e->KeyChar < 'z')
	{
		e->Handled = true;
	}
	if (e->KeyChar == 'A' || e->KeyChar == 'B' || e->KeyChar == 'C' || e->KeyChar == 'D' || e->KeyChar == 'E' || e->KeyChar == 'F')
	{
		e->Handled = false;
	}
	if (e->KeyChar == 'a' || e->KeyChar == 'b' || e->KeyChar == 'c' || e->KeyChar == 'd' || e->KeyChar == 'e' || e->KeyChar == 'f')
	{
		e->Handled = false;

	}
	if (e->KeyChar == '0' || e->KeyChar == '1' || e->KeyChar == '2' || e->KeyChar == '3' || e->KeyChar == '4' || e->KeyChar == '5'
		|| e->KeyChar == '6' || e->KeyChar == '7' || e->KeyChar == '8' || e->KeyChar == '9')
	{
		e->Handled = false;
	}

}


private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) 
{

	if (e->KeyCode == Keys::Delete)
	{
		e->Handled = false;
		textBox1->Text = String::Empty;
		textBox2->Text = String::Empty;

	
	}
	if (e->KeyCode == Keys::Back)
	{
		e->Handled = false;
		if (textBox1->Text->Length > 0)
		{
			textBox1->Text = textBox1->Text->Substring(0, textBox1->Text->Length - 1);
			textBox1->Select(textBox1->Text->Length, 0);
		}

		if (textBox1->Text == String::Empty)
		{
			textBox1->Text = String::Empty;
		}

	}
	
}
private: System::Void textBox_Octal_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (operationProgramingIdentfiy == operationProgramming::Octal)
	{
		textBox1->Text = textBox_Octal->Text;
	}
	operationStartedKeysDecimal = false;
	operationStartedKeysBinary = false;
	operationStartedKeysOctal = true;

}
private: System::Void textBox_Octal_Click(System::Object^ sender, System::EventArgs^ e) {
	zero->Enabled = true;
	num1->Enabled = true;
	num2->Enabled = true;
	num3->Enabled = true;
	num4->Enabled = true;
	num5->Enabled = true;
	num6->Enabled = true;
	num7->Enabled = true;
	num8->Enabled = false;
	num9->Enabled = false;
	buttonA->Enabled = false;
	buttonB->Enabled = false;
	buttonC->Enabled = false;
	buttonD->Enabled = false;
	buttonE->Enabled = false;
	buttonF->Enabled = false;
	operationStartedBinary = false;
	operationStartedDecimal = false;
	operationStartedOctal = true;

}
private: System::Void textBox_Octal_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Delete)
	{
		e->Handled = false;
		textBox_Octal->Text = String::Empty;

	}
	if (e->KeyCode == Keys::Back)
	{
		e->Handled = false;
		if (textBox_Octal->Text->Length > 0)
		{
			textBox_Octal->Text = textBox_Octal->Text->Substring(0, textBox_Octal->Text->Length - 1);
			textBox1->Select(textBox_Octal->Text->Length, 0);
		}

		if (textBox_Octal->Text == String::Empty)
		{
			textBox_Octal->Text = String::Empty;
		}

	}
	operationStartedKeysDecimal = false;
	operationStartedKeysBinary = false;
	operationStartedKeysOctal = true;

	firstNum = textBox_Octal->Text;
	textBox1->Text = textBox_Octal->Text;
	Octal(firstNum, textBox_Octal);

	if (e->KeyCode == Keys::Add)
	{
		Operation_DisplayOctal(textBox1, firstNum, OctOpe);
		showhistory0(textBox2, firstNum);
		OctOpe = OctalOperation::sumOctal;
		operation = operationenum::Add;
		showhistory1(textBox2, operation);
		z = firstNum;
		textBox_Octal->Text = "";

	}
	if (e->KeyCode == Keys::Subtract)
	{
		Operation_DisplayOctal(textBox1, firstNum, OctOpe);
		showhistory0(textBox2, firstNum);
		OctOpe = OctalOperation::SubtractOctal;
		operation = operationenum::Subtract;
		showhistory1(textBox2, operation);
		z= firstNum;
		textBox_Octal->Text = "";

	}
	if (e->KeyCode == Keys::Multiply)
	{
		Operation_DisplayOctal(textBox1, firstNum, OctOpe);
		showhistory0(textBox2, firstNum);
		OctOpe = OctalOperation::MultiplyOctal;
		operation = operationenum::Multiply;
		showhistory1(textBox2, operation);
		z = firstNum;
		textBox_Octal->Text = "";

	}
	if (e->KeyCode == Keys::Divide)
	{
		Operation_DisplayOctal(textBox1, firstNum, OctOpe);
		showhistory0(textBox2, firstNum);
		OctOpe = OctalOperation::DivideOctal;
		operation = operationenum::Divide;
		showhistory1(textBox2, operation);
		z = firstNum;
		textBox_Octal->Text = "";

	}
	if (e->KeyCode == Keys::Oemplus)
	{
		textBox1->Text = "";
		secondNum = textBox_Octal->Text;
		result = CalculateOctal(OctOpe, z, secondNum, textBox1);
		textBox1->Text = Convert::ToString(result);
		firstNum = Convert::ToString(result);
		textBox_Octal->Text = Convert::ToString(result);
		showhistory2(textBox2, secondNum);
		Octal(result.ToString(), textBox1);
		
	}
}
	   private: System::Void textBox_Octal_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		   if (e->KeyChar > (char)65 || e->KeyChar < (char)90)
		   {
			   e->Handled = true;
		   }
		   if (e->KeyChar > 'a' || e->KeyChar < 'z')
		   {
			   e->Handled = true;
		   }
		   if (e->KeyChar == '0' || e->KeyChar == '1' || e->KeyChar == '2' || e->KeyChar == '3' || e->KeyChar == '4' || e->KeyChar == '5' || e->KeyChar == '6' || e->KeyChar == '7')
		   {
			   e->Handled = false;
		   }
		   Octal(firstNum, textBox_Octal);
	   }

	   public:	static void showhistory1(TextBox^ textbox, operationenum operation)
	   {

		   String^ str = String::Empty;
		   //textbox->SelectedText = str->Concat(firstNum) + " ";
		   textbox->SelectedText = Getsymbol(operation);
	   }
	   public:static void showhistory2(TextBox^ textbox, String^ secondNum)
	   {
			   textbox->SelectedText = " " + secondNum;
			   
	   }
	   public:static void showhistory3(TextBox^ textbox, String^ secondNum)
		   {
			   textbox->SelectedText = " " + secondNum + " = ";

		   }
		public:	static void showhistory0(TextBox^ textbox, String^ firstNum)
			  {

				 // String^ str = String::Empty;
			textbox->SelectedText = firstNum + " ";
			
			  }
		public:	static String^ getfirstNum(String^ firstNum)
		{
			return firstNum;
		}
private: System::Void sum_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	
	
}

private: System::Void textBox_Decimal_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

}


private: System::Void num8_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {


}





private: System::Void textBox1_ImeModeChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void Left_Brackets_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBox2->SelectedText = "(";
	textBox2->Select(textBox2->Text->Length,0);

}

private: System::Void Right_Bracktes_Click(System::Object^ sender, System::EventArgs^ e) 
{
	
	secondNum = textBox1->Text;
	result = Calculate(operation, firstNum, secondNum, textBox1);
	firstNum = Convert::ToString(result);
	textBox1->Text = Convert::ToString(result);
	textBox_Decimal->Text = Convert::ToString(result);
	Decimal(result.ToString(), textBox1);
	showhistory2(textBox2, secondNum);
	textBox2->SelectedText = ")";
	textBox2->Select(textBox2->Text->Length, 0);
	
}
};
}

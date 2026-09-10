
#pragma once

#include "MyForm1.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace std;
	/// <summary>
	/// Summary for MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		MyForm(void)
		{
			InitializeComponent();

			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:
	private: System::Windows::Forms::Button^ num1;
	private: System::Windows::Forms::Button^ num2;
	private: System::Windows::Forms::Button^ num3;
	private: System::Windows::Forms::Button^ num6;

	private: System::Windows::Forms::Button^ num5;

	private: System::Windows::Forms::Button^ num4;
	private: System::Windows::Forms::Button^ num9;


	private: System::Windows::Forms::Button^ num8;

	private: System::Windows::Forms::Button^ num7;

	private: System::Windows::Forms::Button^ division;
	private: System::Windows::Forms::Button^ sub;
	private: System::Windows::Forms::Button^ sum;
	private: System::Windows::Forms::Button^ multi;
	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::Button^ zero;

	private: System::Windows::Forms::Button^ res;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ point;
	private: System::Windows::Forms::Button^ backclear;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ square;


	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ clear_history;

	private: System::Windows::Forms::Button^ sqrt;
	private: System::Windows::Forms::Button^ half;
	private: System::Windows::Forms::Button^ percent;
	private: System::Windows::Forms::Button^ clear_secondNumber;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	public:

	public:

	private:

















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->num1 = (gcnew System::Windows::Forms::Button());
			this->num2 = (gcnew System::Windows::Forms::Button());
			this->num3 = (gcnew System::Windows::Forms::Button());
			this->num6 = (gcnew System::Windows::Forms::Button());
			this->num5 = (gcnew System::Windows::Forms::Button());
			this->num4 = (gcnew System::Windows::Forms::Button());
			this->num9 = (gcnew System::Windows::Forms::Button());
			this->num8 = (gcnew System::Windows::Forms::Button());
			this->num7 = (gcnew System::Windows::Forms::Button());
			this->division = (gcnew System::Windows::Forms::Button());
			this->sub = (gcnew System::Windows::Forms::Button());
			this->sum = (gcnew System::Windows::Forms::Button());
			this->multi = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->res = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->point = (gcnew System::Windows::Forms::Button());
			this->backclear = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->square = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->clear_history = (gcnew System::Windows::Forms::Button());
			this->sqrt = (gcnew System::Windows::Forms::Button());
			this->half = (gcnew System::Windows::Forms::Button());
			this->percent = (gcnew System::Windows::Forms::Button());
			this->clear_secondNumber = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
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
			this->num1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num1->Location = System::Drawing::Point(7, 311);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(40, 40);
			this->num1->TabIndex = 1;
			this->num1->Text = L"1";
			this->num1->UseVisualStyleBackColor = false;
			this->num1->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// num2
			// 
			this->num2->BackColor = System::Drawing::SystemColors::Control;
			this->num2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num2->Location = System::Drawing::Point(53, 311);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(40, 40);
			this->num2->TabIndex = 2;
			this->num2->Text = L"2";
			this->num2->UseVisualStyleBackColor = false;
			this->num2->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			this->num2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::num2_KeyDown);
			this->num2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::num2_KeyPress);
			this->num2->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::num2_KeyUp);
			// 
			// num3
			// 
			this->num3->BackColor = System::Drawing::SystemColors::Control;
			this->num3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num3->Location = System::Drawing::Point(99, 311);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(40, 40);
			this->num3->TabIndex = 3;
			this->num3->Text = L"3";
			this->num3->UseVisualStyleBackColor = false;
			this->num3->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// num6
			// 
			this->num6->BackColor = System::Drawing::SystemColors::Control;
			this->num6->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num6->Location = System::Drawing::Point(99, 265);
			this->num6->Name = L"num6";
			this->num6->Size = System::Drawing::Size(40, 40);
			this->num6->TabIndex = 6;
			this->num6->Text = L"6";
			this->num6->UseVisualStyleBackColor = false;
			this->num6->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// num5
			// 
			this->num5->BackColor = System::Drawing::SystemColors::Control;
			this->num5->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num5->Location = System::Drawing::Point(53, 265);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(40, 40);
			this->num5->TabIndex = 5;
			this->num5->Text = L"5";
			this->num5->UseVisualStyleBackColor = false;
			this->num5->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// num4
			// 
			this->num4->BackColor = System::Drawing::SystemColors::Control;
			this->num4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num4->Location = System::Drawing::Point(7, 266);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(40, 40);
			this->num4->TabIndex = 4;
			this->num4->Text = L"4";
			this->num4->UseVisualStyleBackColor = false;
			this->num4->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// num9
			// 
			this->num9->BackColor = System::Drawing::SystemColors::Control;
			this->num9->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num9->Location = System::Drawing::Point(99, 220);
			this->num9->Name = L"num9";
			this->num9->Size = System::Drawing::Size(40, 40);
			this->num9->TabIndex = 9;
			this->num9->Text = L"9";
			this->num9->UseVisualStyleBackColor = false;
			this->num9->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// num8
			// 
			this->num8->BackColor = System::Drawing::SystemColors::Control;
			this->num8->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num8->Location = System::Drawing::Point(53, 219);
			this->num8->Name = L"num8";
			this->num8->Size = System::Drawing::Size(40, 40);
			this->num8->TabIndex = 8;
			this->num8->Text = L"8";
			this->num8->UseVisualStyleBackColor = false;
			this->num8->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// num7
			// 
			this->num7->BackColor = System::Drawing::SystemColors::Control;
			this->num7->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num7->Location = System::Drawing::Point(7, 220);
			this->num7->Name = L"num7";
			this->num7->Size = System::Drawing::Size(40, 40);
			this->num7->TabIndex = 7;
			this->num7->Text = L"7";
			this->num7->UseVisualStyleBackColor = false;
			this->num7->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// division
			// 
			this->division->BackColor = System::Drawing::SystemColors::Control;
			this->division->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->division->Location = System::Drawing::Point(145, 174);
			this->division->Name = L"division";
			this->division->Size = System::Drawing::Size(40, 40);
			this->division->TabIndex = 12;
			this->division->Text = L"÷";
			this->division->UseVisualStyleBackColor = false;
			this->division->Click += gcnew System::EventHandler(this, &MyForm::division_Click);
			this->division->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::sum_MouseDown);
			// 
			// sub
			// 
			this->sub->BackColor = System::Drawing::SystemColors::Control;
			this->sub->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sub->Location = System::Drawing::Point(145, 265);
			this->sub->Name = L"sub";
			this->sub->Size = System::Drawing::Size(40, 40);
			this->sub->TabIndex = 11;
			this->sub->Text = L"-";
			this->sub->UseVisualStyleBackColor = false;
			this->sub->Click += gcnew System::EventHandler(this, &MyForm::sub_Click);
			this->sub->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::sum_MouseDown);
			// 
			// sum
			// 
			this->sum->BackColor = System::Drawing::SystemColors::Control;
			this->sum->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sum->Location = System::Drawing::Point(145, 311);
			this->sum->Name = L"sum";
			this->sum->Size = System::Drawing::Size(40, 40);
			this->sum->TabIndex = 10;
			this->sum->Text = L"+";
			this->sum->UseVisualStyleBackColor = false;
			this->sum->Click += gcnew System::EventHandler(this, &MyForm::sum_Click);
			this->sum->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::sum_MouseDown);
			// 
			// multi
			// 
			this->multi->BackColor = System::Drawing::SystemColors::Control;
			this->multi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multi->Location = System::Drawing::Point(145, 220);
			this->multi->Name = L"multi";
			this->multi->Size = System::Drawing::Size(40, 40);
			this->multi->TabIndex = 16;
			this->multi->Text = L"*";
			this->multi->UseVisualStyleBackColor = false;
			this->multi->Click += gcnew System::EventHandler(this, &MyForm::multi_Click);
			this->multi->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::sum_MouseDown);
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::SystemColors::Control;
			this->clear->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear->Location = System::Drawing::Point(53, 174);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(40, 40);
			this->clear->TabIndex = 15;
			this->clear->Text = L"C";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			this->clear->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::clear_KeyDown);
			// 
			// zero
			// 
			this->zero->BackColor = System::Drawing::SystemColors::Control;
			this->zero->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zero->Location = System::Drawing::Point(53, 357);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(40, 40);
			this->zero->TabIndex = 14;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = false;
			this->zero->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// res
			// 
			this->res->BackColor = System::Drawing::SystemColors::Control;
			this->res->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->res->Location = System::Drawing::Point(145, 357);
			this->res->Name = L"res";
			this->res->Size = System::Drawing::Size(40, 40);
			this->res->TabIndex = 17;
			this->res->Text = L"=";
			this->res->UseVisualStyleBackColor = false;
			this->res->Click += gcnew System::EventHandler(this, &MyForm::res_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(7, 50);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(178, 74);
			this->textBox1->TabIndex = 18;
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
			this->point->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->point->Location = System::Drawing::Point(99, 357);
			this->point->Name = L"point";
			this->point->Size = System::Drawing::Size(40, 40);
			this->point->TabIndex = 19;
			this->point->Text = L".";
			this->point->UseVisualStyleBackColor = false;
			this->point->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// backclear
			// 
			this->backclear->BackColor = System::Drawing::SystemColors::Control;
			this->backclear->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backclear->Location = System::Drawing::Point(99, 174);
			this->backclear->Name = L"backclear";
			this->backclear->Size = System::Drawing::Size(40, 40);
			this->backclear->TabIndex = 20;
			this->backclear->Text = L"⌫";
			this->backclear->UseVisualStyleBackColor = false;
			this->backclear->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(7, 354);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(40, 40);
			this->button2->TabIndex = 21;
			this->button2->Text = L"+/-";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// square
			// 
			this->square->BackColor = System::Drawing::SystemColors::Control;
			this->square->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 7, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->square->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"square.Image")));
			this->square->Location = System::Drawing::Point(145, 130);
			this->square->Name = L"square";
			this->square->Size = System::Drawing::Size(40, 40);
			this->square->TabIndex = 22;
			this->square->UseVisualStyleBackColor = false;
			this->square->Click += gcnew System::EventHandler(this, &MyForm::square_Click);
			this->square->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::sum_MouseDown);
			// 
			// richTextBox1
			// 
			this->richTextBox1->AcceptsTab = true;
			this->richTextBox1->AutoWordSelection = true;
			this->richTextBox1->BackColor = System::Drawing::Color::Lavender;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(191, 50);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(156, 344);
			this->richTextBox1->TabIndex = 24;
			this->richTextBox1->Text = L"";
			// 
			// clear_history
			// 
			this->clear_history->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clear_history.Image")));
			this->clear_history->Location = System::Drawing::Point(191, 357);
			this->clear_history->Name = L"clear_history";
			this->clear_history->Size = System::Drawing::Size(26, 37);
			this->clear_history->TabIndex = 25;
			this->clear_history->UseVisualStyleBackColor = true;
			this->clear_history->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// sqrt
			// 
			this->sqrt->BackColor = System::Drawing::SystemColors::Control;
			this->sqrt->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sqrt->Location = System::Drawing::Point(7, 130);
			this->sqrt->Name = L"sqrt";
			this->sqrt->Size = System::Drawing::Size(40, 40);
			this->sqrt->TabIndex = 27;
			this->sqrt->Text = L"√";
			this->sqrt->UseVisualStyleBackColor = false;
			this->sqrt->Click += gcnew System::EventHandler(this, &MyForm::sqrt_Click);
			this->sqrt->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::sum_MouseDown);
			// 
			// half
			// 
			this->half->BackColor = System::Drawing::SystemColors::Control;
			this->half->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->half->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"half.Image")));
			this->half->Location = System::Drawing::Point(53, 130);
			this->half->Name = L"half";
			this->half->Size = System::Drawing::Size(40, 40);
			this->half->TabIndex = 28;
			this->half->UseVisualStyleBackColor = false;
			// 
			// percent
			// 
			this->percent->BackColor = System::Drawing::SystemColors::Control;
			this->percent->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->percent->Location = System::Drawing::Point(99, 130);
			this->percent->Name = L"percent";
			this->percent->Size = System::Drawing::Size(40, 40);
			this->percent->TabIndex = 29;
			this->percent->Text = L"%";
			this->percent->UseVisualStyleBackColor = false;
			this->percent->Click += gcnew System::EventHandler(this, &MyForm::percent_Click);
			// 
			// clear_secondNumber
			// 
			this->clear_secondNumber->BackColor = System::Drawing::SystemColors::Control;
			this->clear_secondNumber->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear_secondNumber->Location = System::Drawing::Point(7, 174);
			this->clear_secondNumber->Name = L"clear_secondNumber";
			this->clear_secondNumber->Size = System::Drawing::Size(40, 40);
			this->clear_secondNumber->TabIndex = 30;
			this->clear_secondNumber->Text = L"CE";
			this->clear_secondNumber->UseVisualStyleBackColor = false;
			this->clear_secondNumber->Click += gcnew System::EventHandler(this, &MyForm::clear_secondNumber_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(55, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 25);
			this->label1->TabIndex = 31;
			this->label1->Text = L"STANDARD";
			// 
			// pictureBox1
			// 
			this->pictureBox1->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(7, 6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(40, 38);
			this->pictureBox1->TabIndex = 32;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(359, 408);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->clear_secondNumber);
			this->Controls->Add(this->percent);
			this->Controls->Add(this->half);
			this->Controls->Add(this->sqrt);
			this->Controls->Add(this->clear_history);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->square);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->backclear);
			this->Controls->Add(this->point);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->res);
			this->Controls->Add(this->multi);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->zero);
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
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion


		double result = 0.0;
		bool operationStarted = false;
		MyForm1^ form1 = gcnew MyForm1();
		

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
			textBox1->Text += value;
		    
		operationStarted = false;


	}

	private: System::Void point_Click(System::Object^ sender, System::EventArgs^ e) {

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
	private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = String::Empty;
		result = 0;
		firstNum = String::Empty;
		secondNum = String::Empty;


	}




	private: System::Void num1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	}


	private: System::Void num1_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	}
	private: System::Void num2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		//calculatorText->Text += "2";
	}
	private: System::Void num2_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	}
	private: System::Void num2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

		;

	}





	private: System::Void clear_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
	{
		//if (e->KeyCode == Keys::Back)
			//calculatorText->Text = "";

	}
		   /// <summary>
		   /// ///
		   /// </summary>
		   String^ firstNum = "";
		   String^ secondNum = "";
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
		   static double Square(double firstNum)
		   {
			   return firstNum * firstNum;
		   }
		   static double Sqrt(double firstNum)
		   {
			   return Math::Sqrt(firstNum);
		   }
		   static double Half(double firstNum)
		   {
			   return 1 / firstNum;
		   }
	public:
		enum class operationenum {
			Add, Subtract, Multiply, Divide, Square, Sqrt, Percent, Half
		};

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
			case operationenum::Square:
			{
				result = Square(num1);
				break;
			}
			case operationenum::Sqrt:
			{
				result = Math::Sqrt(num1);
				break;
			}
			case operationenum::Percent:
			{
				result = num1 / 100;
				break;
			}
			case operationenum::Half:
			{
				result = 1 / num1;
				break;
			}

			}

			operationDisplay->Text = Operation_Display_WithResult(firstNum, operation, secondNum, result.ToString());

			return result;

		}
		static double  Calculatesquere(operationenum operation, String^ firstNum, TextBox^ operationDisplay)
		{
			double result = 0;
			double num1;
			if (!Double::TryParse(firstNum, num1))
			{
				operationDisplay->Text = "Invalid numeric input";
				return 0; // or throw a user-friendly exception / show error UI
			}
			result = Square(num1);
			operationDisplay->Text = Operation_Display_WithResultsquere(firstNum, operation, result.ToString());

			return result;

		}

		static double  Calculatesqrt(operationenum operation, String^ firstNum, TextBox^ operationDisplay)
		{
			double result = 0;
			double num1;
			if (!Double::TryParse(firstNum, num1))
			{
				operationDisplay->Text = "Invalid numeric input";
				return 0; // or throw a user-friendly exception / show error UI
			}
			result = Sqrt(num1);
			operationDisplay->Text = Operation_Display_WithResultsqrt(firstNum, operation, result.ToString());

			return result;

		}
	public:static String^ Operation_Display_WithResultsquere(String^ firstNum, operationenum operation, String^ result)
	{
		String^ displayText = String::Empty;
		operation = operationenum::Square;

		displayText->Concat(firstNum, Getsymbol(operation), "=", result);

		return displayText;
	}

	public:static String^ Operation_Display_WithResultsqrt(String^ firstNum, operationenum operation, String^ result)
	{
		String^ displayText = String::Empty;
		operation = operationenum::Square;

		displayText->Concat(Getsymbol(operation), firstNum, "=", result);

		return displayText;
	}

	public:
		static  String^ Getsymbol(operationenum operation)
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
			case operationenum::Square:
				return"^2";
			case operationenum::Sqrt:
				return u8"\u221A";
			case operationenum::Half:
				return"1/ ";
			default: return String::Empty;
			}

		}

	public: System::Void res_Click(System::Object^ sender, System::EventArgs^ e)
	{

		if (firstNum != String::Empty && operation == operationenum::Square) {
			result = Calculatesquere(operation, firstNum, textBox1);
			textBox1->Text = Convert::ToString(result);
			showhistory2(richTextBox1, operation, secondNum, result);
		}
		else if (firstNum != String::Empty)
		{
			secondNum = textBox1->Text;
			result = Calculate(operation, firstNum, secondNum, textBox1);
			textBox1->Text = Convert::ToString(result);
			firstNum = Convert::ToString(result);
			showhistory2(richTextBox1, operation, secondNum, result);
		}
		else
		{
			textBox1->Text = "0";
		}

	}
	public: static void Operation_Display(TextBox^ textBox1, String^ firstNum, operationenum operation)
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
		Operation_Display(textBox1, firstNum, operation);
		//showhistory(richTextBox1, firstNum);
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (textBox1->Text->Length > 0)
		{
			textBox1->Text = textBox1->Text->Substring(0, textBox1->Text->Length - 1);
		}

		if (textBox1->Text == String::Empty)
		{
			textBox1->Text = "0";
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		auto s = Double::Parse(textBox1->Text);
		s = -1 * (s);
		textBox1->Text = s.ToString();
	}
	private: System::Void square_Click(System::Object^ sender, System::EventArgs^ e) {

		operation = operationenum::Square;
	}

	public:	static void showhistory(RichTextBox^ textbox, String^ firstNum)
	{

		String^ str = String::Empty;
		textbox->SelectedText = str->Concat(firstNum) + " ";

	}
	public:static void showhistory2(RichTextBox^ textbox, operationenum operation, String^ secondNum, double result)
	{
		if (operation == operationenum::Square)
		{
			textbox->SelectedText = Getsymbol(operation);
			textbox->SelectedText = " = " + result.ToString();
			textbox->SelectedText = Environment::NewLine;
		}

		else {
			textbox->SelectedText = Getsymbol(operation);
			textbox->SelectedText = " " + secondNum;
			textbox->SelectedText = " = " + result.ToString();
			textbox->SelectedText = Environment::NewLine;
		}

	}



	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Clear();
	}

	private: System::Void sqrt_Click(System::Object^ sender, System::EventArgs^ e) {

		operation = operationenum::Sqrt;
		result = Calculatesqrt(operation, firstNum, textBox1);
		textBox1->Text = Convert::ToString(result);
		showhistorsqrt(richTextBox1, operation, firstNum, result);
	}
		   void showhistorsqrt(RichTextBox^ textbox, operationenum operation, String^ firstNum, double result)
		   {
			   textbox->SelectedText = Getsymbol(operation);
			   textbox->SelectedText = " = " + result.ToString();
			   textbox->SelectedText = Environment::NewLine;
		   }


	private: System::Void clear_secondNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		secondNum = String::Empty;
		textBox1->Text = String::Empty;
	}

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	MyForm1^ form2 = gcnew MyForm1();
	form2->Show();
	this->Hide();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void percent_Click(System::Object^ sender, System::EventArgs^ e) {
}
};

}

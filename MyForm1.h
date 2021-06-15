#pragma once

#include <fstream>
#include <string>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm1(Form ^obj2)
		{
			obj = obj2;

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Button^  button4;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(225, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(317, 47);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Manager Portal";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Coral;
			this->button2->Location = System::Drawing::Point(372, 594);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(190, 76);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Show Current Prices";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(187, 155);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 16);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(187, 185);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 16);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Location = System::Drawing::Point(187, 273);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 16);
			this->textBox3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Location = System::Drawing::Point(187, 304);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 16);
			this->textBox4->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Location = System::Drawing::Point(187, 383);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 16);
			this->textBox5->TabIndex = 10;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Location = System::Drawing::Point(187, 413);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 16);
			this->textBox6->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Coral;
			this->label2->Location = System::Drawing::Point(64, 155);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 20);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Peak Rate";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Coral;
			this->label3->Location = System::Drawing::Point(64, 185);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 20);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Off-Peak Rate";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Coral;
			this->label4->Location = System::Drawing::Point(64, 273);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 20);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Peak Rate";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Coral;
			this->label5->Location = System::Drawing::Point(64, 304);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 20);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Off-Peak Rate";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Coral;
			this->label6->Location = System::Drawing::Point(64, 383);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 20);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Peak Rate";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm1::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Coral;
			this->label7->Location = System::Drawing::Point(64, 413);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 20);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Off-Peak Rate";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Coral;
			this->label8->Location = System::Drawing::Point(64, 123);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(130, 23);
			this->label8->TabIndex = 18;
			this->label8->Text = L"First 100 Units";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Coral;
			this->label9->Location = System::Drawing::Point(64, 244);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(152, 23);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Units 101 to 200";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Coral;
			this->label10->Location = System::Drawing::Point(64, 352);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(177, 23);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Units 300 Upwards";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm1::label10_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Coral;
			this->button1->Location = System::Drawing::Point(154, 594);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 76);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::MistyRose;
			this->button3->Location = System::Drawing::Point(12, 13);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 38);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Coral;
			this->label11->Location = System::Drawing::Point(64, 463);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(50, 23);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Rent";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Coral;
			this->label12->Location = System::Drawing::Point(64, 523);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(101, 20);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Service Rent";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Coral;
			this->label13->Location = System::Drawing::Point(64, 493);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(91, 20);
			this->label13->TabIndex = 26;
			this->label13->Text = L"Meter Rent";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Location = System::Drawing::Point(187, 493);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 16);
			this->textBox7->TabIndex = 25;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Location = System::Drawing::Point(187, 523);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 16);
			this->textBox8->TabIndex = 24;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Coral;
			this->button4->Location = System::Drawing::Point(403, 123);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(237, 48);
			this->button4->TabIndex = 29;
			this->button4->Text = L"Auto Fill Remaining Fields";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(783, 692);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LESCO Bill Manager";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm1::MyForm1_FormClosing_1);
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 double offPeak100, peak100, offPeak200, peak200, offPeak300, peak300, meterRent, serviceRent;
				 std::ifstream inputObj("rates.txt");
				 if(!inputObj)
				 {
					 MessageBox::Show("Error encountered while loading Text file, please make sure it is available", "ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 inputObj >> offPeak100 >> peak100 >> offPeak200 >> peak200 >> offPeak300 >> peak300 >> meterRent >> serviceRent;
					 inputObj.close();
					 String ^ op100 = System::Convert::ToString(offPeak100);
					 String ^ p100 = System::Convert::ToString(peak100);
					 String ^ op200 = System::Convert::ToString(offPeak200);
					 String ^ p200 = System::Convert::ToString(peak200);
					 String ^ op300 = System::Convert::ToString(offPeak300) ;
					 String ^ p300 = System::Convert::ToString(peak300);
					 String ^ metRent = System::Convert::ToString(meterRent);
					 String ^ servRent = System::Convert::ToString(serviceRent);

					 String ^ ratesMessage = "First 100 units:\n1. Off-peak rate: " + op100 +  "\n2. Peak-rate: " + p100 + "\n\n101 to 300:\n1. Off-peak rate: " + op200 + "\n2. Peak-rate: " + p200 + "\n\nUnits 301 onwards:\n1. Off-peak rate: " + op300 + "\n2. Peak-rate: " + p300 + "\n\nMeter Rent: " + metRent + "\nService Rent: " + servRent;
					 MessageBox::Show(ratesMessage, "Current Prices", MessageBoxButtons::OK, MessageBoxIcon::Information);
				 }


			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 this -> Hide();
				 obj -> Show();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 String ^ peak100 = textBox1 -> Text;
				 String ^ offPeak100 = textBox2 -> Text;
				 String ^ peak200 = textBox3 -> Text;
				 String ^ offPeak200 = textBox4 -> Text;
				 String ^ peak300 = textBox5 -> Text;
				 String ^ offPeak300 = textBox6 -> Text;
				 String ^ meterRent = textBox7 -> Text;
				 String ^ serviceRent = textBox8 -> Text;

				 double p100, op100, p200, op200, p300, op300, metRent, servRent;

				 if(peak100 == "" || offPeak100 == "" || peak200 == "" || offPeak200 == "" || peak300 == "" || offPeak300 == "" || serviceRent == ""|| meterRent == "")
				 { 
					 MessageBox::Show("No Field can be Empty, Press \"Auto-Fill\" to fill remaining fields!", "ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }

				 else
				 {
					 if (!double::TryParse(textBox1->Text, p100) || !double::TryParse(textBox2->Text, op100) || !double::TryParse(textBox3->Text, p200) || !double::TryParse(textBox4->Text, op200)
						 || !double::TryParse(textBox5->Text, p300) || !double::TryParse(textBox6->Text, op300) || !double::TryParse(textBox7->Text, metRent) || !double::TryParse(textBox8->Text, servRent)) 
					 {

						 MessageBox::Show("Invalid Values entered. Please make sure the input is a valid number.", "ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					 }
					 else
					 {
						 p100 = System::Convert::ToDouble(peak100);
						 op100 = System::Convert::ToDouble(offPeak100);
						 p200 = System::Convert::ToDouble(peak200);
						 op200 = System::Convert::ToDouble(offPeak200);
						 p300 = System::Convert::ToDouble(peak300);
						 op300 = System::Convert::ToDouble(offPeak300);
						 metRent = System::Convert::ToDouble(meterRent);
						 servRent = System::Convert::ToDouble(serviceRent);
						 if(p100 < 0 || op100 < 0 || p200 < 0 || op200 < 0 || p300 < 0 || op300 < 0 || servRent < 0 || metRent < 0)
						 {
							 MessageBox::Show("Negative Values aren't allowed", "ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Error);
						 }
						 else
						 { 
							 std::ofstream outputObj("rates.txt");
							 if(!outputObj)
							 {

								 MessageBox::Show("Error encountered while saving data, please make sure the Text File is available", "ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Error);
							 }
							 else
							 {

								 outputObj << op100 << std::endl << p100 << std::endl << op200<< std::endl << p200<< std::endl << op300 << std::endl << p300 << std::endl << metRent << std::endl << servRent;		
								 MessageBox::Show("Prices Updated Successfully!", "Success!", MessageBoxButtons::OK, MessageBoxIcon::Information);
								 outputObj.close();
							 }

						 }

					 }
				 }

			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

				 double offPeak100, peak100, offPeak200, peak200, offPeak300, peak300, meterRent, serviceRent;
				 std::ifstream inputObj("rates.txt");
				 if(!inputObj)
				 {
					 MessageBox::Show("Error encountered while loading Text file, please make sure it is available", "ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {

					 inputObj >> offPeak100 >> peak100 >> offPeak200 >> peak200 >> offPeak300 >> peak300 >> meterRent >> serviceRent;
					 inputObj.close();
					 String ^ p100 = textBox1 -> Text;
					 String ^ op100 = textBox2 -> Text;
					 String ^ p200 = textBox3 -> Text;
					 String ^ op200 = textBox4 -> Text;
					 String ^ p300 = textBox5 -> Text;
					 String ^ op300 = textBox6 -> Text;
					 String ^ metRent = textBox7 -> Text;
					 String ^ servRent = textBox8 -> Text;

					 if(p100 == "")
					 {
						 textBox1 -> Text = System::Convert::ToString(peak100);
					 }
					 if(op200 == "")
					 {
						 textBox2 -> Text = System::Convert::ToString(offPeak100);
					 }
					 if(p200 == "")
					 {
						 textBox3 -> Text = System::Convert::ToString(peak200);
					 }
					 if(op200 == "")
					 {
						 textBox4 -> Text = System::Convert::ToString(offPeak200);
					 }
					 if(p300 == "")
					 {
						 textBox5 -> Text = System::Convert::ToString(peak300);
					 }
					 if(op300 == "")
					 {
						 textBox6 -> Text = System::Convert::ToString(offPeak300);
					 }
					 if(metRent == "")
					 {
						 textBox7 -> Text = System::Convert::ToString(meterRent);
					 }
					 if(servRent == "")
					 {
						 textBox8 -> Text = System::Convert::ToString(serviceRent);
					 }
				 }


			 }

	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }

	private: System::Void MyForm1_FormClosing(Object sender, FormClosingEventArgs e)
			 {
				 Environment::Exit(0);
			 }
	private: System::Void MyForm1_FormClosing_1(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
				 //Application::ExitThread();

			 }
	};
}

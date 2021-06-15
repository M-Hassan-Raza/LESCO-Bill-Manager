#pragma once

#include <fstream>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Form ^obj3;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm(Form ^obj4)
		{
			obj3 = obj4;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;



	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
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
			this->label1->Location = System::Drawing::Point(206, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(328, 47);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Customer Portal";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(354, 147);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(123, 16);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Coral;
			this->label2->Location = System::Drawing::Point(34, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(314, 21);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Number of Off-Peak Units Consumed";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Coral;
			this->button1->Location = System::Drawing::Point(252, 315);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 74);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Coral;
			this->label3->Location = System::Drawing::Point(221, 416);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(143, 19);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Units not entered";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Coral;
			this->label4->Location = System::Drawing::Point(40, 416);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 19);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Your Bill amount is:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Coral;
			this->label5->Location = System::Drawing::Point(34, 178);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(283, 21);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Number of Peak Units Consumed";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(354, 181);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(123, 16);
			this->textBox2->TabIndex = 7;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Coral;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button2->Location = System::Drawing::Point(387, 416);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(173, 31);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Show Current Prices";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::MistyRose;
			this->button3->Location = System::Drawing::Point(16, 18);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 36);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Coral;
			this->label6->Location = System::Drawing::Point(34, 221);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 21);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Meter Rent";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Coral;
			this->label7->Location = System::Drawing::Point(34, 261);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 21);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Service Rent";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Coral;
			this->label8->Location = System::Drawing::Point(350, 261);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 19);
			this->label8->TabIndex = 26;
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Coral;
			this->label9->Location = System::Drawing::Point(350, 221);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 19);
			this->label9->TabIndex = 27;
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Gray;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(741, 540);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LESCO Bill Manager";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing_1);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 double offPeak100_1, peak100_1, offpeak200_1, peak200_1, offpeak300_1, peak300_1, meterRent, ServiceRent, off_peak_units, peak_units;
				 std::ifstream inputObj("rates.txt");
				 inputObj >> offPeak100_1 >> peak100_1 >> offpeak200_1 >> peak200_1 >> offpeak300_1 >> peak300_1 >> meterRent >> ServiceRent;
				 inputObj.close();
				 label8 -> Text = System::Convert::ToString(ServiceRent);
				 label9 -> Text = System::Convert::ToString(meterRent);
				 String ^ offPeak = textBox1 -> Text;
				 String ^ peak = textBox2 -> Text;

				 if (!double::TryParse(textBox1->Text, off_peak_units) || !double::TryParse(textBox2->Text, peak_units)) {

					 MessageBox::Show("Invalid Values entered. Please make sure the input is a valid number.", "ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 if(offPeak == "")
					 {
						 off_peak_units = 0;
					 }
					 else
					 {
						 off_peak_units = System::Convert::ToDouble(offPeak);
					 }

					 if(peak == "")
					 {
						 peak_units = 0;
					 }
					 else
					 {
						 peak_units = System::Convert::ToDouble(peak);
					 }

					 double sum, peak_sum, off_peak_sum;
					 if(off_peak_units < 0 || peak_units < 0)
					 {
						 MessageBox::Show("Negative Values aren't allowed", "ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Error);
					 }
					 else
					 {
						 if(peak_units <= 100) 
						 {
							 peak_sum = (peak_units * peak100_1);
						 }
						 else if(peak_units > 100 && peak_units  <=300 ) 
						 {
							 peak_sum =  ( (100 * peak100_1) + ( ( peak_units - 100 ) * peak200_1) );
						 }
						 else if(peak_units > 300)
						 {
							 peak_sum =  (( 100 * peak100_1 ) + ( 200 * peak200_1 ) + ( ( peak_units - 300 ) * peak300_1));
						 }


						 if(off_peak_units  <= 100 ) 
						 {
							 off_peak_sum = off_peak_units * offPeak100_1;
						 }
						 else if( off_peak_units > 100 && off_peak_units <= 300 )
						 {
							 off_peak_sum = ((100 * offPeak100_1 ) + ( ( off_peak_units - 100 ) * offpeak200_1 )); 
						 }
						 else if (off_peak_units > 300) 
						 {
							 off_peak_sum = ( (100 * offPeak100_1 )  + ( 200 * offpeak200_1)+ ( ( off_peak_units - 300 ) * offpeak300_1 ));
						 }
						 sum = off_peak_sum + peak_sum + meterRent + ServiceRent;

						 String ^ sumOfUnits = System::Convert::ToString(sum) + " Rs.";
						 label3 -> Text = sumOfUnits;

					 }

				 }
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 double offPeak100_1, peak100_1, offpeak200_1, peak200_1, offpeak300_1, peak300_1, meterRent, ServiceRent;
				 std::ifstream inputObj("rates.txt");
				 inputObj >> offPeak100_1 >> peak100_1 >> offpeak200_1 >> peak200_1 >> offpeak300_1 >> peak300_1 >> meterRent>> ServiceRent;
				 inputObj.close();
				 String ^ op100 = System::Convert::ToString(offPeak100_1);
				 String ^ p100 = System::Convert::ToString(peak100_1);
				 String ^ op200 = System::Convert::ToString(offpeak200_1);
				 String ^ p200 = System::Convert::ToString(peak200_1);
				 String ^ op300 = System::Convert::ToString(offpeak300_1) ;
				 String ^ p300 = System::Convert::ToString(peak300_1);
				 String ^ metRent = System::Convert::ToString(meterRent);
				 String ^ serRent = System::Convert::ToString(ServiceRent);

				 String ^ ratesMessage = "First 100 units:\n1. Off-peak rate: " + op100 +  "\n2. Peak-rate: " + p100 + "\n\n101 to 300:\n1. Off-peak rate: " + op200 + "\n2. Peak-rate: " + p200 + "\n\nUnits 301 onwards:\n1. Off-peak rate: " + op300 + "\n2. Peak-rate: " + p300  + "\n\nMeter Rent: " + metRent + "\nService Rent: " + serRent;
				 MessageBox::Show(ratesMessage, "Current Prices", MessageBoxButtons::OK, MessageBoxIcon::Information);
			 }
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

				 double meterRent, ServiceRent;
				 std::ifstream inputObj("rates.txt");
				 if(!inputObj)
				 {
					 MessageBox::Show("Error encountered while loading Text file, please make sure it is available", "ERROR!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
				 else
				 {
					 for(int i = 0; i < 8; i++)
					 {
						 if(i < 7)
						 {
							 inputObj >> meterRent;
						 }
						 else
						 {
							 inputObj >> ServiceRent;
						 }


					 }
					 inputObj.close();
					 label8 -> Text = System::Convert::ToString(ServiceRent);
					 label9 -> Text = System::Convert::ToString(meterRent);
				 }
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 this -> Hide();
				 obj3 -> Show();
			 }
	private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {

			 }
	private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
			 }

	private: System::Void MyForm_FormClosing_1(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {

				 //Application::ExitThread();

			 }
};
}

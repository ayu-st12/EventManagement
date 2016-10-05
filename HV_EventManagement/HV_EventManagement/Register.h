#pragma once
#include "stdAfx.h"
#include <string>
namespace HV_EventManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Collections::Generic;
    using namespace System::ComponentModel;
    using namespace System::Linq;
    using namespace System::Text;
	using namespace System::Threading;
	using namespace System::Diagnostics;
	using namespace System::Runtime::InteropServices;
   
	using namespace System::Web;
	using namespace System::Net::Mail;
	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
		{
			InitializeComponent();
			name->Select();
			family->MaxLength=1;
			contact->MaxLength=10;
			sap->MaxLength=9;
			textBox2_pass->PasswordChar='$';
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  exit;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  done;








	private: System::Windows::Forms::TextBox^  contact;
	private: System::Windows::Forms::TextBox^  email;
	private: System::Windows::Forms::TextBox^  family;
	private: System::Windows::Forms::TextBox^  sap;
	private: System::Windows::Forms::TextBox^  branch;
	private: System::Windows::Forms::TextBox^  name;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox1_email;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox2_pass;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::DateTimePicker^  date;

	private: System::Windows::Forms::TextBox^  venue;
	private: System::Windows::Forms::TextBox^  time;
	private: System::Windows::Forms::TextBox^  evnt;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;


	private: System::Windows::Forms::Button^  LoveCalc;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox4;




























	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->exit = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->LoveCalc = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->date = (gcnew System::Windows::Forms::DateTimePicker());
			this->venue = (gcnew System::Windows::Forms::TextBox());
			this->time = (gcnew System::Windows::Forms::TextBox());
			this->evnt = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2_pass = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox1_email = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->done = (gcnew System::Windows::Forms::Button());
			this->contact = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->family = (gcnew System::Windows::Forms::TextBox());
			this->sap = (gcnew System::Windows::Forms::TextBox());
			this->branch = (gcnew System::Windows::Forms::TextBox());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// exit
			// 
			this->exit->Location = System::Drawing::Point(750, 366);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(75, 23);
			this->exit->TabIndex = 0;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &Register::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(211, 41);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox5);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->done);
			this->groupBox1->Controls->Add(this->contact);
			this->groupBox1->Controls->Add(this->email);
			this->groupBox1->Controls->Add(this->family);
			this->groupBox1->Controls->Add(this->sap);
			this->groupBox1->Controls->Add(this->branch);
			this->groupBox1->Controls->Add(this->name);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(31, 62);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(794, 298);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Enter Details";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Register::groupBox1_Enter);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button1);
			this->groupBox4->Controls->Add(this->pictureBox3);
			this->groupBox4->Location = System::Drawing::Point(388, 186);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(119, 100);
			this->groupBox4->TabIndex = 45;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Entertainment";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(6, 19);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 50);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// LoveCalc
			// 
			this->LoveCalc->Location = System::Drawing::Point(29, 71);
			this->LoveCalc->Name = L"LoveCalc";
			this->LoveCalc->Size = System::Drawing::Size(93, 23);
			this->LoveCalc->TabIndex = 0;
			this->LoveCalc->Text = L"LoveCalc";
			this->LoveCalc->UseVisualStyleBackColor = true;
			this->LoveCalc->Click += gcnew System::EventHandler(this, &Register::button1_Click_1);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->pictureBox2);
			this->groupBox3->Controls->Add(this->date);
			this->groupBox3->Controls->Add(this->venue);
			this->groupBox3->Controls->Add(this->time);
			this->groupBox3->Controls->Add(this->evnt);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Location = System::Drawing::Point(8, 173);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(357, 119);
			this->groupBox3->TabIndex = 44;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Event Details";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(6, 27);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(117, 86);
			this->pictureBox2->TabIndex = 53;
			this->pictureBox2->TabStop = false;
			// 
			// date
			// 
			this->date->CustomFormat = L"yyyy-MM-dd";
			this->date->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->date->Location = System::Drawing::Point(207, 37);
			this->date->MinDate = System::DateTime(2015, 7, 3, 0, 0, 0, 0);
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(75, 20);
			this->date->TabIndex = 52;
			// 
			// venue
			// 
			this->venue->Location = System::Drawing::Point(207, 90);
			this->venue->Name = L"venue";
			this->venue->Size = System::Drawing::Size(127, 20);
			this->venue->TabIndex = 51;
			this->venue->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Register::venue_Validating_1);
			// 
			// time
			// 
			this->time->Location = System::Drawing::Point(207, 64);
			this->time->Name = L"time";
			this->time->Size = System::Drawing::Size(127, 20);
			this->time->TabIndex = 50;
			this->time->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Register::time_Validating_1);
			// 
			// evnt
			// 
			this->evnt->Location = System::Drawing::Point(207, 10);
			this->evnt->Name = L"evnt";
			this->evnt->Size = System::Drawing::Size(127, 20);
			this->evnt->TabIndex = 49;
			this->evnt->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Register::evnt_KeyPress);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(129, 92);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(44, 13);
			this->label10->TabIndex = 48;
			this->label10->Text = L"Venue: ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(129, 67);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 13);
			this->label9->TabIndex = 47;
			this->label9->Text = L"Time: ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(129, 41);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 13);
			this->label8->TabIndex = 46;
			this->label8->Text = L"Date:  ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(129, 13);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 13);
			this->label7->TabIndex = 45;
			this->label7->Text = L"Event: ";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox2_pass);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->textBox1_email);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Location = System::Drawing::Point(388, 31);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(378, 147);
			this->groupBox2->TabIndex = 43;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Office Use Only (Core Member)";
			// 
			// textBox2_pass
			// 
			this->textBox2_pass->Location = System::Drawing::Point(22, 104);
			this->textBox2_pass->Name = L"textBox2_pass";
			this->textBox2_pass->Size = System::Drawing::Size(176, 20);
			this->textBox2_pass->TabIndex = 3;
			this->textBox2_pass->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Register::textBox2_pass_Validating);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(19, 82);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(62, 13);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Password : ";
			this->label12->Click += gcnew System::EventHandler(this, &Register::label12_Click);
			// 
			// textBox1_email
			// 
			this->textBox1_email->Location = System::Drawing::Point(22, 49);
			this->textBox1_email->Name = L"textBox1_email";
			this->textBox1_email->Size = System::Drawing::Size(339, 20);
			this->textBox1_email->TabIndex = 1;
			this->textBox1_email->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Register::textBox1_email_Validating);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(19, 30);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(122, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Core Member\'s Email ID:";
			// 
			// done
			// 
			this->done->Location = System::Drawing::Point(691, 234);
			this->done->Name = L"done";
			this->done->Size = System::Drawing::Size(75, 23);
			this->done->TabIndex = 42;
			this->done->Text = L"Register";
			this->done->UseVisualStyleBackColor = true;
			this->done->Click += gcnew System::EventHandler(this, &Register::done_Click);
			// 
			// contact
			// 
			this->contact->Location = System::Drawing::Point(87, 147);
			this->contact->Name = L"contact";
			this->contact->Size = System::Drawing::Size(197, 20);
			this->contact->TabIndex = 33;
			this->contact->TextChanged += gcnew System::EventHandler(this, &Register::contact_TextChanged);
			this->contact->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Register::contact_KeyPress);
			this->contact->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Register::contact_Validating);
			// 
			// email
			// 
			this->email->Location = System::Drawing::Point(87, 123);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(197, 20);
			this->email->TabIndex = 32;
			this->email->TextChanged += gcnew System::EventHandler(this, &Register::email_TextChanged);
			this->email->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Register::email_Validating);
			// 
			// family
			// 
			this->family->Location = System::Drawing::Point(87, 97);
			this->family->Name = L"family";
			this->family->Size = System::Drawing::Size(197, 20);
			this->family->TabIndex = 31;
			this->family->TextChanged += gcnew System::EventHandler(this, &Register::family_TextChanged);
			this->family->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Register::family_KeyPress);
			this->family->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Register::family_Validating);
			// 
			// sap
			// 
			this->sap->Location = System::Drawing::Point(87, 72);
			this->sap->Name = L"sap";
			this->sap->Size = System::Drawing::Size(197, 20);
			this->sap->TabIndex = 30;
			this->sap->TextChanged += gcnew System::EventHandler(this, &Register::sap_TextChanged);
			this->sap->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Register::sap_KeyPress);
			this->sap->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Register::sap_Validating);
			// 
			// branch
			// 
			this->branch->Location = System::Drawing::Point(87, 46);
			this->branch->Name = L"branch";
			this->branch->Size = System::Drawing::Size(197, 20);
			this->branch->TabIndex = 29;
			this->branch->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Register::branch_KeyPress);
			this->branch->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Register::branch_Validating);
			// 
			// name
			// 
			this->name->Location = System::Drawing::Point(87, 19);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(197, 20);
			this->name->TabIndex = 28;
			this->name->TextChanged += gcnew System::EventHandler(this, &Register::name_TextChanged);
			this->name->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Register::name_KeyPress);
			this->name->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Register::name_KeyUp);
			this->name->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Register::name_Validating);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 75);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 13);
			this->label6->TabIndex = 27;
			this->label6->Text = L"SAP: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 150);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 13);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Contact: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Email ID:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Family: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Branch: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Name: ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 71);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"TicTacToe";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Register::button1_Click_2);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->pictureBox4);
			this->groupBox5->Controls->Add(this->LoveCalc);
			this->groupBox5->Location = System::Drawing::Point(514, 186);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(153, 100);
			this->groupBox5->TabIndex = 46;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Entertainment";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(52, 17);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(52, 50);
			this->pictureBox4->TabIndex = 1;
			this->pictureBox4->TabStop = false;
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(837, 392);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->exit);
			this->Name = L"Register";
			this->Text = L"ggr";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			Application::Exit();
			 
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void done_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 String^ constring=L"datasource=sql6.freemysqlhosting.net;port=3306;username=sql682609;password=pZ9!zC6!";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("insert into sql682609.registration (name,branch,sap,family,emailid,contact,event,date,time,venue) values('"+this->name->Text+"','"+this->branch->Text+"','"+this->sap->Text+"','"+this->family->Text+"','"+this->email->Text+"','"+this->contact->Text+"','"+this->evnt->Text+"','"+this->date->Text+"','"+this->time->Text+"','"+this->venue->Text+"') ;",conDataBase);
			 MySqlDataReader^ myReader;
			 try{
			   conDataBase->Open();
			   myReader=cmdDataBase->ExecuteReader();

			       MessageBox::Show("AutoBot is Mailing details to Participant. Please Wait!! ");
						   while(myReader->Read()){
			   
			     			   }

				   String^ subject = "Hypervision : Event Registration details.";
				   
				   String^ p0 = "Congratulations Participants! You are successfully registered with Event Details mentioned below: ";
				   String^ p5 = "A warm welcome from Hypervision Family to the Event. Enjoy Engineering with family.";

				   String^ body = p0 + Environment::NewLine + "Event Name: " + evnt->Text + Environment::NewLine + "Event Date: " + date->Text + Environment::NewLine + "Event Time: " + time->Text + Environment::NewLine + "Event Venue: " + venue->Text + Environment::NewLine + p5 ; 
				   
				   MailMessage^ mail = gcnew MailMessage(textBox1_email->Text,email->Text,subject,body);
	               String^ smtp = "smtp.gmail.com";
				   SmtpClient^ client = gcnew SmtpClient(smtp);
				   client->Port = 587;
				   client->Credentials = gcnew System::Net::NetworkCredential(textBox1_email->Text,textBox2_pass->Text);
                   client->EnableSsl = true;
				   client->Send(mail);
				   MessageBox::Show("Thank You! Mail Sent. This Registration Done!", " Thank You :) ",MessageBoxButtons::OK);
			 }catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 
			 } 
		 }
private: System::Void name_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 if(name->Text == System::String::Empty)
			 {
			     MessageBox::Show("Name is Required!");
			 }
		 }
private: System::Void name_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void branch_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 if(branch->Text == System::String::Empty)
			 {
			     MessageBox::Show("Branch is Required!");
			 }
		 }
private: System::Void sap_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 if(sap->Text == System::String::Empty)
			 {
			     MessageBox::Show("SAP ID is Required!");
			 }

		 }
private: System::Void family_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 if(family->Text == System::String::Empty)
			 {
			     MessageBox::Show("Family No. is Required!");
			 }

		 }
private: System::Void email_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void email_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
             String^ email1 = email->Text ;
			 if( email1->IndexOf('@') == -1 || email1->IndexOf('.') == -1 )
				   MessageBox::Show("Invalid Email");
			 
			 if(email->Text == System::String::Empty)
			 {
			     MessageBox::Show("Email ID is Required!");
			 }


		 }
private: System::Void contact_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void contact_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 if(contact->Text == System::String::Empty)
			 {
			     MessageBox::Show("Contact No is Required!");
			 }


		 }
private: System::Void evnt_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 if(evnt->Text == System::String::Empty)
			 {
			     MessageBox::Show("Event Name is Required!");
			 }

		 }
private: System::Void date_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 if(date->Text == System::String::Empty)
			 {
			     MessageBox::Show("Date is Required!");
			 }


		 }
private: System::Void time_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 if(time->Text == System::String::Empty)
			 {
			     MessageBox::Show("Time is Required!");
			 }


		 }
private: System::Void venue_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 if(venue->Text == System::String::Empty)
			 {
			     MessageBox::Show("Venue is Required!");
			 }

		 }
private: System::Void family_TextChanged(System::Object^  sender, System::EventArgs^  e) {


		 }
private: System::Void sap_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void sap_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
                char ch = e->KeyChar;
				if(!System::Char::IsDigit(ch) && ch !=8 && ch !=46)
				{
				   e->Handled = true;
				}
		 }
private: System::Void name_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if(!System::Char::IsControl(e->KeyChar) && !System::Char::IsLetter(e->KeyChar) && !System::Char::IsWhiteSpace(e->KeyChar)){
			   e->Handled =true ;
			  
			 }
		 
		 }
private: System::Void name_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {


		 }
private: System::Void branch_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if(!System::Char::IsControl(e->KeyChar) && !System::Char::IsLetter(e->KeyChar) && !System::Char::IsWhiteSpace(e->KeyChar)){
			   e->Handled =true ;
			  
			 }

		 }
private: System::Void family_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
                char ch = e->KeyChar;
				if(!System::Char::IsDigit(ch) && ch !=8 && ch !=46)
				{
				   e->Handled = true;
				}

		 }
private: System::Void contact_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
                char ch = e->KeyChar;
				if(!System::Char::IsDigit(ch) && ch !=8 && ch !=46)
				{
				   e->Handled = true;
				}


		 }
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void evnt_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
 			 if(evnt->Text == System::String::Empty)
			 {
			     MessageBox::Show("Event Name is Required!");
			 }

		 }
private: System::Void time_Validating_1(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
 			 if(time->Text == System::String::Empty)
			 {
			     MessageBox::Show("Event Timing is Required!");
			 }


		 }
private: System::Void venue_Validating_1(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
 			 if(venue->Text == System::String::Empty)
			 {
			     MessageBox::Show("Event Venue is Required!");
			 }


		 }
private: System::Void textBox1_email_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
 			 if(textBox1_email->Text == System::String::Empty)
			 {
			     MessageBox::Show("Core Member! Your Mail ID is Required!");
			 }


		 }
private: System::Void textBox2_pass_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
 			 if(textBox2_pass->Text == System::String::Empty)
			 {
			     MessageBox::Show("Core Member! Application Password for your mailID is Required!");
			 }


		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
 			// Process::Start("C:\\Users\\Aayush Vardhan\\Documents\\Visual Studio 2010\\Projects\\HV_EventManagement\\tictactoe.exe");
		     //Process::kill();
		 }

private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Process::Start("C:\\Users\\Aayush Vardhan\\Documents\\Visual Studio 2010\\Projects\\HV_EventManagement\\LoveCalculator.exe");
		 }
private: System::Void button1_Click_2(System::Object^  sender, System::EventArgs^  e) {
			  Process::Start("C:\\Users\\Aayush Vardhan\\Documents\\Visual Studio 2010\\Projects\\HV_EventManagement\\tictactoe.exe");
		    
		 }
};
}

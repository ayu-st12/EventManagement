#pragma once
#include "stdAfx.h"
#include "Register.h"


namespace HV_EventManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			username->Select();
			password->PasswordChar='@';
			password->MaxLength=10;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  password_lbl;

	private: System::Windows::Forms::Label^  username_lbl;

	private: System::Windows::Forms::TextBox^  password;

	private: System::Windows::Forms::TextBox^  username;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->password_lbl = (gcnew System::Windows::Forms::Label());
			this->username_lbl = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(178, 245);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->password);
			this->groupBox1->Controls->Add(this->username);
			this->groupBox1->Controls->Add(this->password_lbl);
			this->groupBox1->Controls->Add(this->username_lbl);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(486, 19);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(259, 274);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"SignIn";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(114, 117);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(100, 20);
			this->password->TabIndex = 4;
			this->password->TextChanged += gcnew System::EventHandler(this, &Form1::password_TextChanged);
			// 
			// username
			// 
			this->username->Location = System::Drawing::Point(114, 77);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(100, 20);
			this->username->TabIndex = 3;
			this->username->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::username_Validating);
			// 
			// password_lbl
			// 
			this->password_lbl->AutoSize = true;
			this->password_lbl->Location = System::Drawing::Point(22, 120);
			this->password_lbl->Name = L"password_lbl";
			this->password_lbl->Size = System::Drawing::Size(56, 13);
			this->password_lbl->TabIndex = 2;
			this->password_lbl->Text = L"Password:";
			this->password_lbl->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// username_lbl
			// 
			this->username_lbl->AutoSize = true;
			this->username_lbl->Location = System::Drawing::Point(22, 77);
			this->username_lbl->Name = L"username_lbl";
			this->username_lbl->Size = System::Drawing::Size(58, 13);
			this->username_lbl->TabIndex = 1;
			this->username_lbl->Text = L"Username:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(218, 65);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(178, 228);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(114, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(212, 47);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(48, 65);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(173, 228);
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(757, 305);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
             
			 String^ constring=L"datasource=sql6.freemysqlhosting.net;port=3306;username=sql682609;password=pZ9!zC6!";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * from sql682609.hv_eventteam where username='"+this->username->Text+"' and pass='"+this->password->Text+"';",conDataBase);
			 MySqlDataReader^ myReader;
			 try{

				conDataBase->Open();
			    myReader=cmdDataBase->ExecuteReader();
			    int count=0;
				while(myReader->Read()){
				    count=count+1;


				        }
				if(count==1){
				   this->Hide();
					Register^ f2 = gcnew Register();
					f2->ShowDialog(); 
				
				}

				else if(count>1){
				
				     MessageBox::Show("Credentials matched! But have duplicates. ");
				}

				else{
				 MessageBox::Show("Data Not Found. Please Ask Admin to add your Credentials to Database!");
				}

			 }catch(Exception^ex){
			 MessageBox::Show(ex->Message);
			 
			 }

		 }
private: System::Void password_TextChanged(System::Object^  sender, System::EventArgs^  e) {
              			 if(password->Text == System::String::Empty)
			 {
			     MessageBox::Show("Password is Required!");
			 }
		 }
private: System::Void username_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 			 if(username->Text == System::String::Empty)
			 {
			     MessageBox::Show("Username is Required!");
			 }
		 }
};
}


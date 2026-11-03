#pragma once
#include "HomeSystem.h"
#include "Syntax_Squad_Banking.h"

namespace Syntaxsquad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Register4
	/// </summary>
	public ref class Register4 : public System::Windows::Forms::Form
	{
	public:
		Register4(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		// NEW: Constructor that accepts User object
		Register4(Syntax_Squad_Banking^ user)
		{
			InitializeComponent();
			currentUser = user;

			// Display Account Number and Account Type from previous data
			if (currentUser->getAccountNumber() == 0)
			{
				// Generate random 6-digit account number (not starting with 0)
				Random^ rand = gcnew Random();
				currentUser->setAccountNumber(rand->Next(100000, 999999));
			}

			// Display data
			mtxtAccountNumber->Text = currentUser->getAccountNumber().ToString();
			cmbAccountType->Text = currentUser->getAccountType();

			// Set Password character masking
			txtPassword->PasswordChar = L'*';
			txtConfirmPassword->PasswordChar = L'*';

			// Disable Save button initially
			btnSave->Enabled = false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Register4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txtPassword;

	private: System::Windows::Forms::TextBox^ txtConfirmUserName;

	private: System::Windows::Forms::TextBox^ txtUserName;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ cmbAccountType;
	private: System::Windows::Forms::TextBox^ txtConfirmPassword;

	private: System::Windows::Forms::MaskedTextBox^ mtxtAccountNumber;
	private: System::Windows::Forms::Button^ btnClear;

	private: System::Windows::Forms::Button^ btnSave;



	private:
		Syntax_Squad_Banking^ currentUser;  // Add this
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtConfirmUserName = (gcnew System::Windows::Forms::TextBox());
			this->txtUserName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cmbAccountType = (gcnew System::Windows::Forms::ComboBox());
			this->mtxtAccountNumber = (gcnew System::Windows::Forms::MaskedTextBox());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(62, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Account Number : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(62, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Account Type : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(28, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"UserName : ";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtConfirmPassword);
			this->groupBox1->Controls->Add(this->txtPassword);
			this->groupBox1->Controls->Add(this->txtConfirmUserName);
			this->groupBox1->Controls->Add(this->txtUserName);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(34, 207);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(910, 366);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"UserName and Password";
			// 
			// txtConfirmPassword
			// 
			this->txtConfirmPassword->Location = System::Drawing::Point(267, 316);
			this->txtConfirmPassword->Name = L"txtConfirmPassword";
			this->txtConfirmPassword->Size = System::Drawing::Size(385, 27);
			this->txtConfirmPassword->TabIndex = 7;
			this->txtConfirmPassword->TextChanged += gcnew System::EventHandler(this, &Register4::txtConfirmPassword_TextChanged);
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(267, 250);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(385, 27);
			this->txtPassword->TabIndex = 5;
			this->txtPassword->TextChanged += gcnew System::EventHandler(this, &Register4::txtPassword_TextChanged);
			// 
			// txtConfirmUserName
			// 
			this->txtConfirmUserName->Location = System::Drawing::Point(267, 116);
			this->txtConfirmUserName->Name = L"txtConfirmUserName";
			this->txtConfirmUserName->Size = System::Drawing::Size(385, 27);
			this->txtConfirmUserName->TabIndex = 5;
			this->txtConfirmUserName->TextChanged += gcnew System::EventHandler(this, &Register4::txtConfirmUserName_TextChanged);
			// 
			// txtUserName
			// 
			this->txtUserName->Location = System::Drawing::Point(267, 56);
			this->txtUserName->Name = L"txtUserName";
			this->txtUserName->Size = System::Drawing::Size(385, 27);
			this->txtUserName->TabIndex = 5;
			this->txtUserName->TextChanged += gcnew System::EventHandler(this, &Register4::txtUserName_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 136);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(168, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Confirm UserName : ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(39, 250);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(98, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Password : ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(38, 319);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(147, 20);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Confirm Password";
			// 
			// cmbAccountType
			// 
			this->cmbAccountType->FormattingEnabled = true;
			this->cmbAccountType->Location = System::Drawing::Point(301, 109);
			this->cmbAccountType->Name = L"cmbAccountType";
			this->cmbAccountType->Size = System::Drawing::Size(385, 24);
			this->cmbAccountType->TabIndex = 4;
			this->cmbAccountType->TextChanged += gcnew System::EventHandler(this, &Register4::cmbAccountType_TextChanged);
			// 
			// mtxtAccountNumber
			// 
			this->mtxtAccountNumber->Location = System::Drawing::Point(301, 41);
			this->mtxtAccountNumber->Name = L"mtxtAccountNumber";
			this->mtxtAccountNumber->Size = System::Drawing::Size(385, 22);
			this->mtxtAccountNumber->TabIndex = 8;
			this->mtxtAccountNumber->TextChanged += gcnew System::EventHandler(this, &Register4::mtxtAccountNumber_TextChanged);
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btnClear->Location = System::Drawing::Point(585, 641);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(151, 52);
			this->btnClear->TabIndex = 8;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &Register4::btnClear_Click);
			// 
			// btnSave
			// 
			this->btnSave->BackColor = System::Drawing::SystemColors::Control;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btnSave->Location = System::Drawing::Point(793, 641);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(151, 52);
			this->btnSave->TabIndex = 9;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &Register4::btnSave_Click);
			// 
			// Register4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1365, 751);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->mtxtAccountNumber);
			this->Controls->Add(this->cmbAccountType);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Register4";
			this->Text = L"Register4";
			this->Load += gcnew System::EventHandler(this, &Register4::Register4_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void txtConfirmPassword_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		ValidateFields(sender, e);
	}

	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		
		if (mtxtAccountNumber->Text == nullptr || mtxtAccountNumber->Text == "" || String::IsNullOrEmpty(mtxtAccountNumber->Text))
		{
			MessageBox::Show("The Account Number is empty!!", "Account Error",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (cmbAccountType->SelectedIndex == -1)
		{
			MessageBox::Show("The Account Type is not selected!!", "Account Type Error",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (txtUserName->Text == nullptr || txtUserName->Text == "" || String::IsNullOrEmpty(txtUserName->Text))
		{
			MessageBox::Show("The UserName is empty!!", "UserName Error",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (txtConfirmUserName->Text == nullptr || txtConfirmUserName->Text == "" || String::IsNullOrEmpty(txtConfirmUserName->Text))
		{
			MessageBox::Show("The UserName is empty!!", "UserName Error",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (txtUserName->Text != txtConfirmUserName->Text)
		{
			MessageBox::Show("The UserName is not matching Confirm UserName!", "UserName Not Matching",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (txtPassword->Text == nullptr || txtPassword->Text == "" || String::IsNullOrEmpty(txtPassword->Text))
		{
			MessageBox::Show("The PassWord is empty", "Password Error",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (txtConfirmPassword->Text == nullptr || txtConfirmPassword->Text == "" || String::IsNullOrEmpty(txtConfirmPassword->Text))
		{
			MessageBox::Show("The Confirm PassWord is empty", "Confirm Password Error",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;

		}

		if (txtPassword->Text != txtConfirmPassword->Text)
		{
			MessageBox::Show("The Password Does not match the Confirm Password!", "Password Not Matching",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// ============================================================
		// SAVE ALL DATA TO BACKEND OBJECT - THIS IS WHAT YOU NEED TO ADD!
		// ============================================================

		// Save account information
		currentUser->setAccountNumber(Convert::ToInt32(mtxtAccountNumber->Text));
		currentUser->setAccountType(cmbAccountType->SelectedItem->ToString());

		// Save login information
		currentUser->setUsername(txtUserName->Text);
		currentUser->setPassword(txtPassword->Text);

		// Set default values
		currentUser->setAccountStatus("Active");
		currentUser->setRole("Customer");
		currentUser->setBalance(0.0);

		// ============================================================
		// OPTIONAL: SAVE TO FILE
		// ============================================================
		SaveUserToFile();

		/*MessageBox::Show("You have successfully registered!\n\n"
			+ currentUser->getFirstname() + " " + currentUser->getSurname() + "\n"
			+ "Account Number: " + currentUser->getAccountNumber() + "\n"
			+ "Account Type: " + currentUser->getAccountType(),
			"Registration Successful",
			MessageBoxButtons::OK, MessageBoxIcon::Information);*/

		//MessageBox::Show("You have successfuly registered!", "Registered", MessageBoxButtons::OK,MessageBoxIcon::Information);
		HomeSystem^ Home = gcnew HomeSystem();
		this->Hide();  // Hides current form
		Home->ShowDialog();
		this->Show();  // When Cards closes, this form reappears

	}


private: System::Void Register4_Load(System::Object^ sender, System::EventArgs^ e)
{
	cmbAccountType->Items->Add("Savings");
	cmbAccountType->Items->Add("Current");
	cmbAccountType->Items->Add("Cheque");
}

private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) 
{ 
	System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to Clear all fields?",
		"Clear Form", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	if (result == System::Windows::Forms::DialogResult::Yes)
	{
		txtUserName->Clear();
		txtConfirmUserName->Clear();
		txtPassword->Clear();
		txtConfirmPassword->Clear();
		btnSave->Enabled = false;
		txtConfirmUserName->BackColor = Color::White;
		txtConfirmPassword->BackColor = Color::White;
	}
}

	   // VALIDATION METHOD
	private: System::Void ValidateFields(Object^ sender, System::EventArgs^ e)
	{
		bool allValid = false;

		if (txtUserName->Text != "" &&
			txtConfirmUserName->Text != "" &&
			txtPassword->Text != "" &&
			txtConfirmPassword->Text != "" &&
			txtUserName->Text == txtConfirmUserName->Text &&
			txtPassword->Text == txtConfirmPassword->Text &&
			txtPassword->Text->Length >= 6)
		{
			allValid = true;
		}

		btnSave->Enabled = allValid;

		// Visual feedback for matching fields
		if (txtUserName->Text == txtConfirmUserName->Text && txtUserName->Text != "")
		{
			txtConfirmUserName->BackColor = Color::LightGreen;
		}
		else
		{
			txtConfirmUserName->BackColor = Color::White;
		}

		if (txtPassword->Text == txtConfirmPassword->Text && txtPassword->Text != "")
		{
			txtConfirmPassword->BackColor = Color::LightGreen;
		}
		else
		{
			txtConfirmPassword->BackColor = Color::White;
		}
	}

		   // METHOD TO SAVE USER DATA TO TEXT FILE
	private: void SaveUserToFile()
	{
		int cnt = 0;
		try
		{
			//String^ filePath = "\\bankingUser.txt";
			String^ filePath = Application::StartupPath + "\\bankingUser.txt";

			// Open file for append (add new user)
			StreamWriter^ sw = gcnew StreamWriter(filePath, true);

			// Write separator
			sw->WriteLine("==================================================");
			sw->WriteLine("              BANKING USER DETAILS                ");
			sw->WriteLine("==================================================");

			// Personal Information
			sw->WriteLine("PERSONAL INFORMATION: " + cnt + 1);
			sw->WriteLine("First Name:" + currentUser->getFirstname());
			sw->WriteLine("Middle Name:" + currentUser->getMiddleName());
			sw->WriteLine("Surname:" + currentUser->getSurname());
			sw->WriteLine("Gender:" + currentUser->getGender());
			sw->WriteLine("ID Number:" + currentUser->getIDNumber());
			sw->WriteLine("Date of Birth:" + currentUser->getDateOfBirth().ToString("yyyy-MM-dd"));
			sw->WriteLine("Marital Status:" + currentUser->getMarital());
			sw->WriteLine("Race:" + currentUser->getRace());
			sw->WriteLine("Citizenship:" + currentUser->getCitizenship());
			sw->WriteLine("Home Language:" + currentUser->getHomeLanguage());
			sw->WriteLine("Phone Number:" + currentUser->getPhoneNumber());
			sw->WriteLine("Email:" + currentUser->getEmail());
			sw->WriteLine("Address:" + currentUser->getAddress());
			sw->WriteLine();

			// Account Information
			sw->WriteLine("ACCOUNT INFORMATION:");
			sw->WriteLine("Account Number:" + currentUser->getAccountNumber());
			sw->WriteLine("Account Type:" + currentUser->getAccountType());
			sw->WriteLine("Balance:R" + currentUser->getBalance().ToString("F2"));
			sw->WriteLine("Daily Limit:R" + currentUser->getLimit().ToString("F2"));
			sw->WriteLine();

			// Login Information
			sw->WriteLine("LOGIN INFORMATION:");
			sw->WriteLine("Username:" + currentUser->getUsername());
			sw->WriteLine("Password:" + currentUser->getPassword());
			sw->WriteLine("Role:" + currentUser->getRole());
			sw->WriteLine("Account Status:" + currentUser->getAccountStatus());
			sw->WriteLine();

			// Footer
			sw->WriteLine("Registration Date: " + DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"));
			sw->WriteLine("==================================================");


			MessageBox::Show("You have successfully registered!\n\n"
				+ currentUser->getFirstname() + " " + currentUser->getSurname() + "\n"
				+ "Account Number: " + currentUser->getAccountNumber() + "\n"
				+ "Account Type: " + currentUser->getAccountType(),
				"Registration Successful",
				MessageBoxButtons::OK, MessageBoxIcon::Information);

			cnt++;
			sw->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error saving to file: " + ex->Message,
				"File Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void mtxtAccountNumber_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		ValidateFields(sender, e);
	}

	private: System::Void cmbAccountType_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		ValidateFields(sender, e);
	}

	private: System::Void txtUserName_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		ValidateFields(sender, e);
	}

	private: System::Void txtConfirmUserName_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		ValidateFields(sender, e);
	}

	private: System::Void txtPassword_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		ValidateFields(sender, e);
	}

};
}

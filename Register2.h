#pragma once
#include "Register3.h"
#include "Syntax_Squad_Banking.h"  // Add this include

namespace Syntaxsquad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Register2
	/// </summary>
	public ref class Register2 : public System::Windows::Forms::Form
	{
	public:
		Register2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Register2(Syntax_Squad_Banking^ user)
		{
			InitializeComponent();
			currentUser = user;  // Store the user object from RegisterMain


						// Disable Next button initially
			btnNext->Enabled = false;
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Register2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;












	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ txtCitizenship;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtHomeLanguage;
	private: System::Windows::Forms::TextBox^ txtEmailAccount;


	private: System::Windows::Forms::MaskedTextBox^ mtxtPhoneNumbers;

	private: System::Windows::Forms::Button^ btnNext;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtRace;

	private: System::Windows::Forms::Label^ label2;




	private:
		Syntax_Squad_Banking^ currentUser;  // Store user object
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
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txtCitizenship = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtHomeLanguage = (gcnew System::Windows::Forms::TextBox());
			this->txtEmailAccount = (gcnew System::Windows::Forms::TextBox());
			this->mtxtPhoneNumbers = (gcnew System::Windows::Forms::MaskedTextBox());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtRace = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(134, 48);
			this->monthCalendar1->Margin = System::Windows::Forms::Padding(9, 10, 9, 10);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 1;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Register2::monthCalendar1_DateChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->monthCalendar1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(43, 46);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(622, 298);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Date of birth : ";
			// 
			// txtCitizenship
			// 
			this->txtCitizenship->Location = System::Drawing::Point(311, 437);
			this->txtCitizenship->Name = L"txtCitizenship";
			this->txtCitizenship->Size = System::Drawing::Size(355, 23);
			this->txtCitizenship->TabIndex = 3;
			this->txtCitizenship->TextChanged += gcnew System::EventHandler(this, &Register2::txtCitizenship_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(40, 437);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(107, 20);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Citizenship : ";
			this->label7->TextChanged += gcnew System::EventHandler(this, &Register2::label7_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(40, 595);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(135, 20);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Phone Number : ";
			this->label8->TextChanged += gcnew System::EventHandler(this, &Register2::label8_TextChanged);
			this->label8->Click += gcnew System::EventHandler(this, &Register2::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(40, 518);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(147, 20);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Home Language : ";
			this->label9->TextChanged += gcnew System::EventHandler(this, &Register2::label9_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(41, 678);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(132, 20);
			this->label10->TabIndex = 7;
			this->label10->Text = L"Email Account : ";
			this->label10->TextChanged += gcnew System::EventHandler(this, &Register2::label10_TextChanged);
			// 
			// txtHomeLanguage
			// 
			this->txtHomeLanguage->Location = System::Drawing::Point(311, 515);
			this->txtHomeLanguage->Name = L"txtHomeLanguage";
			this->txtHomeLanguage->Size = System::Drawing::Size(355, 23);
			this->txtHomeLanguage->TabIndex = 8;
			this->txtHomeLanguage->TextChanged += gcnew System::EventHandler(this, &Register2::txtHomeLanguage_TextChanged);
			// 
			// txtEmailAccount
			// 
			this->txtEmailAccount->Location = System::Drawing::Point(311, 675);
			this->txtEmailAccount->Name = L"txtEmailAccount";
			this->txtEmailAccount->Size = System::Drawing::Size(355, 23);
			this->txtEmailAccount->TabIndex = 10;
			this->txtEmailAccount->TextChanged += gcnew System::EventHandler(this, &Register2::txtEmailAccount_TextChanged);
			// 
			// mtxtPhoneNumbers
			// 
			this->mtxtPhoneNumbers->Location = System::Drawing::Point(311, 592);
			this->mtxtPhoneNumbers->Mask = L"(999) 000-0000";
			this->mtxtPhoneNumbers->Name = L"mtxtPhoneNumbers";
			this->mtxtPhoneNumbers->Size = System::Drawing::Size(355, 23);
			this->mtxtPhoneNumbers->TabIndex = 11;
			this->mtxtPhoneNumbers->TextChanged += gcnew System::EventHandler(this, &Register2::mtxtPhoneNumbers_TextChanged);
			// 
			// btnNext
			// 
			this->btnNext->BackColor = System::Drawing::SystemColors::Control;
			this->btnNext->FlatAppearance->BorderSize = 0;
			this->btnNext->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNext->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btnNext->Location = System::Drawing::Point(1175, 720);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(192, 62);
			this->btnNext->TabIndex = 18;
			this->btnNext->Text = L"Next";
			this->btnNext->UseVisualStyleBackColor = false;
			this->btnNext->Click += gcnew System::EventHandler(this, &Register2::btnNext_Click);
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnClear->FlatAppearance->BorderSize = 0;
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btnClear->Location = System::Drawing::Point(885, 720);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(192, 62);
			this->btnClear->TabIndex = 17;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &Register2::btnClear_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(40, 377);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 20);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Race : ";
			this->label1->TextChanged += gcnew System::EventHandler(this, &Register2::label1_TextChanged);
			// 
			// txtRace
			// 
			this->txtRace->Location = System::Drawing::Point(310, 377);
			this->txtRace->Name = L"txtRace";
			this->txtRace->Size = System::Drawing::Size(355, 23);
			this->txtRace->TabIndex = 20;
			this->txtRace->TextChanged += gcnew System::EventHandler(this, &Register2::txtRace_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(40, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 29);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Register ";
			// 
			// Register2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1408, 794);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtRace);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->mtxtPhoneNumbers);
			this->Controls->Add(this->txtEmailAccount);
			this->Controls->Add(this->txtHomeLanguage);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtCitizenship);
			this->Controls->Add(this->groupBox2);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->Name = L"Register2";
			this->Text = L"Register2";
			this->Load += gcnew System::EventHandler(this, &Register2::Register2_Load);
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Register2_Load(System::Object^ sender, System::EventArgs^ e)
	{
		// Disable Next button initially
		btnNext->Enabled = false;
	}

	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) 
	{

	}

	private: System::Void btnNext_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		//Register3^ register3 = gcnew Register3();
		//this->Hide();  // Hides current form
		//register3->ShowDialog();
		//this->Show();  // When Cards closes, this form reappears

		String^ email = txtEmailAccount->Text;
		String^ emailLower = email->ToLower();
		bool isValidEmail = (emailLower->EndsWith("ac.za") || emailLower->EndsWith("co.za") || emailLower->EndsWith("gmail.com"));

		// Get phone number digits only
		String^ phoneNumber = mtxtPhoneNumbers->Text;
		String^ digitsOnly = L"";
		for each (Char c in phoneNumber)
		{
			if (Char::IsDigit(c))
			{
				digitsOnly += c;
			}
		}

		if (txtRace->Text != "" && txtCitizenship->Text != "" && txtHomeLanguage->Text != "" &&
			digitsOnly->Length == 10 && txtEmailAccount->Text != "" && isValidEmail)
		{
			// Store data using SETTERS
			currentUser->setRace(txtRace->Text);
			currentUser->setCitizenship(txtCitizenship->Text);
			currentUser->setHomeLanguage(txtHomeLanguage->Text);
			currentUser->setPhoneNumber(digitsOnly);  // digitsOnly is already a String^
			currentUser->setEmail(txtEmailAccount->Text);
			currentUser->setDateOfBirth(monthCalendar1->SelectionStart);

			// Open next form (Register3) and pass user object
			Register3^ register3 = gcnew Register3(currentUser);
			//Register3^ register3 = gcnew Register3();
			this->Hide();
			register3->ShowDialog();
			this->Show();
		}
		else
		{
			MessageBox::Show("Please fill all fields correctly!\n\n"
				"Requirements:\n"
				"- Race\n"
				"- Citizenship\n"
				"- Home Language\n"
				"- Phone Number (10 digits)\n"
				"- Valid Email must end with:\n"
				"  • @ac.za\n"
				"  • @co.za\n"
				"  • @gmail.com",
				"Validation Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
		}
	}

	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to Clear all fields?",
			"Clear Form", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			txtRace->Clear();      // Race
			txtCitizenship->Clear();      // Citizenship
			txtHomeLanguage->Clear();      // Home Language
			mtxtPhoneNumbers->Clear(); // Phone Number
			txtEmailAccount->Clear();      // Email
			txtEmailAccount->ForeColor = Color::Black;
			btnNext->Enabled = false;
		}
	}
	
	private: System::Void ValidateFields()
	{

		String^ email = txtEmailAccount->Text;
		bool isValidEmail = false;

		// Check if email ends with valid domains
		String^ emailLower = email->ToLower();
		if (emailLower->EndsWith("ac.za") || emailLower->EndsWith("co.za") || emailLower->EndsWith("gmail.com"))
		{
			isValidEmail = true;
		}

		// Get phone number digits only
		String^ phoneNumber = mtxtPhoneNumbers->Text;
		String^ digitsOnly = L"";
		for each (Char c in phoneNumber)
		{
			if (Char::IsDigit(c))
			{
				digitsOnly += c;
			}
		}

		// Check all fields
		if (txtRace->Text != "" &&           // Race
			txtCitizenship->Text != "" &&    // Citizenship
			txtHomeLanguage->Text != "" &&   // Home Language
			digitsOnly->Length == 10 &&      // Phone Number (10 digits)
			txtEmailAccount->Text != "" &&   // Email not empty
			isValidEmail)                    // Valid email domain
		{
			btnNext->Enabled = true;
			btnNext->BackColor = Color::FromArgb(0, 120, 215);
		}
		else
		{
			btnNext->Enabled = false;
			btnNext->BackColor = Color::LightGray;
		}
	}
	private: System::Void label10_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ email = label10->Text;
		bool isValidEmail = false;

		// Check if email ends with valid domains
		String^ emailLower = email->ToLower();
		if (email->EndsWith("ac.za") || email->EndsWith("co.za") || email->EndsWith("gmail.com"))
		{
			isValidEmail = true;
			label10->ForeColor = Color::Green;  // Valid email = green text
		}
		else
		{
			label10->ForeColor = Color::Red;    // Invalid email = red text
		}

		ValidateFields();
	}
	private: System::Void label1_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		//ValidateFields();
	}
	private: System::Void label7_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		//ValidateFields();
	}
	private: System::Void label9_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		//ValidateFields();
	}
	private: System::Void label8_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		//ValidateFields();
	}

	private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) 
	{
		ValidateFields();
	}

	private: System::Void txtRace_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		ValidateFields();
	}

	private: System::Void txtCitizenship_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		ValidateFields();
	}

	private: System::Void txtHomeLanguage_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		ValidateFields();
	}

	private: System::Void mtxtPhoneNumbers_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		ValidateFields();
	}

	private: System::Void txtEmailAccount_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		// Change email text color for visual feedback
		String^ email = txtEmailAccount->Text;
		String^ emailLower = email->ToLower();

		if (email != L"")
		{
			if (emailLower->EndsWith("ac.za") || emailLower->EndsWith("co.za") || emailLower->EndsWith("gmail.com"))
			{
				txtEmailAccount->ForeColor = Color::Green;
			}
			else
			{
				txtEmailAccount->ForeColor = Color::Red;
			}
		}
		else
		{
			txtEmailAccount->ForeColor = Color::Black;
		}

		ValidateFields();
	}

};
}

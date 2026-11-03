#pragma once
#include "Register2.h"
#include "Syntax_Squad_Banking.h"  // Add your backend class

namespace Syntaxsquad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Design;
	using namespace System::Drawing::Drawing2D;

	/// <summary>
	/// Summary for RegisterMain
	/// </summary>
	public ref class RegisterMain : public System::Windows::Forms::Form
	{
	public:
		RegisterMain(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			newUser = gcnew Syntax_Squad_Banking();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterMain()
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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::GroupBox^ gpbGender;
	private: System::Windows::Forms::RadioButton^ rdbFemale;
	private: System::Windows::Forms::RadioButton^ rdbMale;
	private: System::Windows::Forms::TextBox^ txtFirstName;
	private: System::Windows::Forms::TextBox^ txtMiddleName;
	private: System::Windows::Forms::TextBox^ txtSurname;



	private: System::Windows::Forms::MaskedTextBox^ mtxtIDNumber;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ cmbMarital;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnNext;





	private:
		Syntax_Squad_Banking^ newUser;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterMain::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->gpbGender = (gcnew System::Windows::Forms::GroupBox());
			this->rdbFemale = (gcnew System::Windows::Forms::RadioButton());
			this->rdbMale = (gcnew System::Windows::Forms::RadioButton());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->txtMiddleName = (gcnew System::Windows::Forms::TextBox());
			this->txtSurname = (gcnew System::Windows::Forms::TextBox());
			this->mtxtIDNumber = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cmbMarital = (gcnew System::Windows::Forms::ComboBox());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->gpbGender->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(72, 100);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"FirstName : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(72, 179);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"MiddleName : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(72, 261);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Surname : ";
			this->label3->Click += gcnew System::EventHandler(this, &RegisterMain::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(70, 30);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 32);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Register";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(74, 565);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"IDNumber : ";
			this->label5->Click += gcnew System::EventHandler(this, &RegisterMain::label5_Click);
			// 
			// gpbGender
			// 
			this->gpbGender->Controls->Add(this->rdbFemale);
			this->gpbGender->Controls->Add(this->rdbMale);
			this->gpbGender->Location = System::Drawing::Point(76, 338);
			this->gpbGender->Margin = System::Windows::Forms::Padding(4);
			this->gpbGender->Name = L"gpbGender";
			this->gpbGender->Padding = System::Windows::Forms::Padding(4);
			this->gpbGender->Size = System::Drawing::Size(250, 169);
			this->gpbGender->TabIndex = 6;
			this->gpbGender->TabStop = false;
			this->gpbGender->Text = L"Gender";
			// 
			// rdbFemale
			// 
			this->rdbFemale->AutoSize = true;
			this->rdbFemale->Location = System::Drawing::Point(19, 105);
			this->rdbFemale->Name = L"rdbFemale";
			this->rdbFemale->Size = System::Drawing::Size(85, 24);
			this->rdbFemale->TabIndex = 8;
			this->rdbFemale->Text = L"Female";
			this->rdbFemale->UseVisualStyleBackColor = true;
			this->rdbFemale->CheckedChanged += gcnew System::EventHandler(this, &RegisterMain::rdbFemale_CheckedChanged);
			// 
			// rdbMale
			// 
			this->rdbMale->AutoSize = true;
			this->rdbMale->Checked = true;
			this->rdbMale->Location = System::Drawing::Point(19, 48);
			this->rdbMale->Name = L"rdbMale";
			this->rdbMale->Size = System::Drawing::Size(66, 24);
			this->rdbMale->TabIndex = 7;
			this->rdbMale->TabStop = true;
			this->rdbMale->Text = L"Male";
			this->rdbMale->UseVisualStyleBackColor = true;
			this->rdbMale->CheckedChanged += gcnew System::EventHandler(this, &RegisterMain::rdbMale_CheckedChanged);
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(395, 93);
			this->txtFirstName->MaxLength = 30;
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(412, 27);
			this->txtFirstName->TabIndex = 7;
			this->txtFirstName->TextChanged += gcnew System::EventHandler(this, &RegisterMain::txtFirstName_TextChanged);
			// 
			// txtMiddleName
			// 
			this->txtMiddleName->Location = System::Drawing::Point(395, 176);
			this->txtMiddleName->MaxLength = 30;
			this->txtMiddleName->Name = L"txtMiddleName";
			this->txtMiddleName->Size = System::Drawing::Size(412, 27);
			this->txtMiddleName->TabIndex = 8;
			this->txtMiddleName->TextChanged += gcnew System::EventHandler(this, &RegisterMain::txtMiddleName_TextChanged);
			// 
			// txtSurname
			// 
			this->txtSurname->Location = System::Drawing::Point(395, 254);
			this->txtSurname->MaxLength = 30;
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(412, 27);
			this->txtSurname->TabIndex = 9;
			this->txtSurname->TextChanged += gcnew System::EventHandler(this, &RegisterMain::txtSurname_TextChanged);
			// 
			// mtxtIDNumber
			// 
			this->mtxtIDNumber->Location = System::Drawing::Point(395, 558);
			this->mtxtIDNumber->Mask = L"0000000000000";
			this->mtxtIDNumber->Name = L"mtxtIDNumber";
			this->mtxtIDNumber->Size = System::Drawing::Size(412, 27);
			this->mtxtIDNumber->TabIndex = 11;
			this->mtxtIDNumber->ValidatingType = System::Int32::typeid;
			this->mtxtIDNumber->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &RegisterMain::mtxtIDNumber_MaskInputRejected);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(74, 647);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Marital : ";
			// 
			// cmbMarital
			// 
			this->cmbMarital->FormattingEnabled = true;
			this->cmbMarital->Location = System::Drawing::Point(395, 639);
			this->cmbMarital->Name = L"cmbMarital";
			this->cmbMarital->Size = System::Drawing::Size(412, 28);
			this->cmbMarital->TabIndex = 14;
			this->cmbMarital->SelectedIndexChanged += gcnew System::EventHandler(this, &RegisterMain::cmbMarital_SelectedIndexChanged);
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnClear->FlatAppearance->BorderSize = 0;
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btnClear->Location = System::Drawing::Point(395, 706);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(192, 62);
			this->btnClear->TabIndex = 15;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &RegisterMain::btnClear_Click);
			// 
			// btnNext
			// 
			this->btnNext->BackColor = System::Drawing::SystemColors::Control;
			this->btnNext->FlatAppearance->BorderSize = 0;
			this->btnNext->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNext->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btnNext->Location = System::Drawing::Point(685, 706);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(192, 62);
			this->btnNext->TabIndex = 16;
			this->btnNext->Text = L"Next";
			this->btnNext->UseVisualStyleBackColor = false;
			this->btnNext->Click += gcnew System::EventHandler(this, &RegisterMain::btnNext_Click);
			// 
			// RegisterMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1077, 791);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->cmbMarital);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->mtxtIDNumber);
			this->Controls->Add(this->txtSurname);
			this->Controls->Add(this->txtMiddleName);
			this->Controls->Add(this->txtFirstName);
			this->Controls->Add(this->gpbGender);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"RegisterMain";
			this->Text = L"RegisterMain";
			this->Load += gcnew System::EventHandler(this, &RegisterMain::RegisterMain_Load);
			this->gpbGender->ResumeLayout(false);
			this->gpbGender->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}

	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) 
	{

	}

	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e)
	{

	}

	private: System::Void txtSurname_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		ValidateFields();
	}

	private: System::Void RegisterMain_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		cmbMarital->Items->Add("Single");
		cmbMarital->Items->Add("Married");
		cmbMarital->Items->Add("Divorced");

		//To make the button currved
		int radius = 20;

		System::Drawing::Drawing2D::GraphicsPath^ path =
			gcnew System::Drawing::Drawing2D::GraphicsPath();

		System::Drawing::Rectangle rect = btnClear->ClientRectangle;

		path->AddArc(rect.X, rect.Y, radius, radius, 180, 90);
		path->AddArc(rect.Width - radius, rect.Y, radius, radius, 270, 90);
		path->AddArc(rect.Width - radius, rect.Height - radius, radius, radius, 0, 90);
		path->AddArc(rect.X, rect.Height - radius, radius, radius, 90, 90);

		path->CloseFigure();

		btnClear->Region = gcnew System::Drawing::Region(path);
		btnNext->Region = gcnew System::Drawing::Region(path);

	}
	private: System::Void btnNext_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		
		//MessageBox::Show("Gender : " + newUser->getGender(), "Gender", MessageBoxButtons::OK, MessageBoxIcon::Information);


		if (txtFirstName->Text != "" && txtMiddleName->Text != "" && txtSurname->Text != "" &&
			(rdbMale->Checked || rdbFemale->Checked) && mtxtIDNumber->Text->Length == 13 &&
			cmbMarital->SelectedIndex != -1)
		{
			// Store data in backend object using SETTERS
			newUser->setFirstname(txtFirstName->Text);
			newUser->setMiddleName(txtMiddleName->Text);
			newUser->setSurname(txtSurname->Text);
			newUser->setGender(rdbMale->Checked ? 'M' : 'F');
			newUser->setIDNumber(mtxtIDNumber->Text);  // Store as string directly
			newUser->setMarital(cmbMarital->SelectedItem->ToString());

			// Set default values using SETTERS
			newUser->setAccountStatus("Active");
			newUser->setRole("Customer");
			newUser->setBalance(0.0);
			newUser->setLimit(10000.0);

			// Pass user object to next form
			Register2^ register2 = gcnew Register2(newUser);
			this->Hide();
			register2->ShowDialog();
			this->Show();
		}
		else
		{
			MessageBox::Show("Please fill all fields correctly!\n\n"
				"Requirements:\n"
				"- First Name, Middle Name, Surname required\n"
				"- Gender selected\n"
				"- ID Number must be 13 digits\n"
				"- Marital Status selected",
				"Validation Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
		}
	
	}
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Windows::Forms::DialogResult result =  MessageBox::Show("Are you sure you want to Clear!!!", "Clear Form",
			System::Windows::Forms::MessageBoxButtons::YesNo,
			System::Windows::Forms::MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			txtFirstName->Clear();
			txtMiddleName->Clear();
			txtSurname->Clear();
			rdbMale->Checked = true;
			mtxtIDNumber->Clear();
			cmbMarital->SelectedIndex = -1;
		}

	}

	   // Validate all fields before enabling Next button
	private: System::Void ValidateFields()
	{
		if (txtFirstName->Text != "" && txtMiddleName->Text != "" && txtSurname->Text != "" &&
			(rdbMale->Checked || rdbFemale->Checked) && mtxtIDNumber->Text->Length == 13 &&
			cmbMarital->SelectedIndex != -1)
		{
			btnNext->Enabled = true;
		}
		else
		{
			btnNext->Enabled = false;
		}
	}
private: System::Void txtFirstName_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	ValidateFields();
}
private: System::Void txtMiddleName_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	ValidateFields();
}
private: System::Void mtxtIDNumber_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e)
{
	ValidateFields();

}
private: System::Void rdbMale_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	ValidateFields();
}
private: System::Void rdbFemale_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	ValidateFields();
}
private: System::Void cmbMarital_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	ValidateFields();
}
};
}

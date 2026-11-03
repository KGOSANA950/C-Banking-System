#pragma once
#include "Register4.h"
#include "Syntax_Squad_Banking.h"

namespace Syntaxsquad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Register3
	/// </summary>
	public ref class Register3 : public System::Windows::Forms::Form
	{
	public:
		Register3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		// NEW: Constructor that accepts User object
		Register3(Syntax_Squad_Banking^ user)
		{
			InitializeComponent();
			currentUser = user;  // Store the user object from Register2
		 
		 			// Disable Next button initially
			btnNext->Enabled = false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Register3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::MaskedTextBox^ mtxtPostalCode;
	protected:

	private: System::Windows::Forms::TextBox^ txtAddress2;

	private: System::Windows::Forms::TextBox^ txtAddress1;

	private: System::Windows::Forms::TextBox^ txtArea;

	private: System::Windows::Forms::TextBox^ txtCity;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ CmbProvince;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnNext;
	private: System::Windows::Forms::Button^ btnClear;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->mtxtPostalCode = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtAddress2 = (gcnew System::Windows::Forms::TextBox());
			this->txtAddress1 = (gcnew System::Windows::Forms::TextBox());
			this->txtArea = (gcnew System::Windows::Forms::TextBox());
			this->txtCity = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->CmbProvince = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->groupBox1->Controls->Add(this->mtxtPostalCode);
			this->groupBox1->Controls->Add(this->txtAddress2);
			this->groupBox1->Controls->Add(this->txtAddress1);
			this->groupBox1->Controls->Add(this->txtArea);
			this->groupBox1->Controls->Add(this->txtCity);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->CmbProvince);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(37, 37);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1034, 494);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Address";
			// 
			// mtxtPostalCode
			// 
			this->mtxtPostalCode->Location = System::Drawing::Point(434, 356);
			this->mtxtPostalCode->Mask = L"0000";
			this->mtxtPostalCode->Name = L"mtxtPostalCode";
			this->mtxtPostalCode->Size = System::Drawing::Size(100, 27);
			this->mtxtPostalCode->TabIndex = 11;
			this->mtxtPostalCode->TextChanged += gcnew System::EventHandler(this, &Register3::mtxtPostalCode_TextChanged);
			// 
			// txtAddress2
			// 
			this->txtAddress2->Location = System::Drawing::Point(434, 291);
			this->txtAddress2->Name = L"txtAddress2";
			this->txtAddress2->Size = System::Drawing::Size(457, 27);
			this->txtAddress2->TabIndex = 10;
			this->txtAddress2->TextChanged += gcnew System::EventHandler(this, &Register3::txtAddress2_TextChanged);
			// 
			// txtAddress1
			// 
			this->txtAddress1->Location = System::Drawing::Point(434, 230);
			this->txtAddress1->Name = L"txtAddress1";
			this->txtAddress1->Size = System::Drawing::Size(457, 27);
			this->txtAddress1->TabIndex = 9;
			this->txtAddress1->TextChanged += gcnew System::EventHandler(this, &Register3::txtAddress1_TextChanged);
			// 
			// txtArea
			// 
			this->txtArea->Location = System::Drawing::Point(434, 174);
			this->txtArea->Name = L"txtArea";
			this->txtArea->Size = System::Drawing::Size(457, 27);
			this->txtArea->TabIndex = 8;
			this->txtArea->TextChanged += gcnew System::EventHandler(this, &Register3::txtArea_TextChanged);
			// 
			// txtCity
			// 
			this->txtCity->Location = System::Drawing::Point(434, 107);
			this->txtCity->Name = L"txtCity";
			this->txtCity->Size = System::Drawing::Size(457, 27);
			this->txtCity->TabIndex = 7;
			this->txtCity->TextChanged += gcnew System::EventHandler(this, &Register3::txtCity_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(24, 177);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(117, 20);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Area/Suburb : ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 363);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Postal Code : ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 299);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(137, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Address Line 2 : ";
			// 
			// CmbProvince
			// 
			this->CmbProvince->FormattingEnabled = true;
			this->CmbProvince->Location = System::Drawing::Point(434, 50);
			this->CmbProvince->Name = L"CmbProvince";
			this->CmbProvince->Size = System::Drawing::Size(457, 28);
			this->CmbProvince->TabIndex = 3;
			this->CmbProvince->TextChanged += gcnew System::EventHandler(this, &Register3::CmbProvince_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"City : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 233);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Address Line 1 : ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Province : ";
			// 
			// btnNext
			// 
			this->btnNext->BackColor = System::Drawing::SystemColors::Control;
			this->btnNext->FlatAppearance->BorderSize = 0;
			this->btnNext->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNext->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btnNext->Location = System::Drawing::Point(879, 598);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(192, 62);
			this->btnNext->TabIndex = 20;
			this->btnNext->Text = L"Next";
			this->btnNext->UseVisualStyleBackColor = false;
			this->btnNext->Click += gcnew System::EventHandler(this, &Register3::btnNext_Click);
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnClear->FlatAppearance->BorderSize = 0;
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btnClear->Location = System::Drawing::Point(589, 598);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(192, 62);
			this->btnClear->TabIndex = 19;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = false;
			// 
			// Register3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1416, 744);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Register3";
			this->Text = L"Register3";
			this->Load += gcnew System::EventHandler(this, &Register3::Register3_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnNext_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//Register4^ register4 = gcnew Register4();
		//this->Hide();  // Hides current form
		//register4->ShowDialog();
		//this->Show();  // When Cards closes, this form reappears

		// Check if all required fields are filled
		if (CmbProvince->SelectedIndex != -1 &&
			txtCity->Text != "" &&
			txtArea->Text != "" &&
			txtAddress1->Text != "" &&
			mtxtPostalCode->Text->Length == 4)
		{
			// COMBINE ADDRESS COMPONENTS INTO ONE STRING WITH SPACES
			String^ fullAddress =
				txtAddress1->Text + " " +          // Address Line 1
				(txtAddress2->Text != "" ? txtAddress2->Text + " " : "") +  // Address Line 2 (optional)
				txtArea->Text + " " +              // Area/Suburb
				txtCity->Text + " " +              // City
				CmbProvince->SelectedItem->ToString() + " " +  // Province
				mtxtPostalCode->Text;              // Postal Code

			// Store address in backend object
			currentUser->setAddress(fullAddress);

			// Open next form (Register4) and pass user object
			Register4^ register4 = gcnew Register4(currentUser);
			this->Hide();
			register4->ShowDialog();
			this->Show();
		}
		else
		{
			MessageBox::Show("Please fill all required fields correctly!\n\n"
				"Requirements:\n"
				"- Province\n"
				"- City\n"
				"- Area/Suburb\n"
				"- Address Line 1\n"
				"- Postal Code (4 digits)",
				"Validation Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
		}
	}


	private: System::Void Register3_Load(System::Object^ sender, System::EventArgs^ e)
	{
		CmbProvince->Items->Add("Eastern Cape");
		CmbProvince->Items->Add("Free State");
		CmbProvince->Items->Add("Gauteng");
		CmbProvince->Items->Add("KwaZulu-Natal");
		CmbProvince->Items->Add("Limpopo");
		CmbProvince->Items->Add("Mpumalanga");
		CmbProvince->Items->Add("Northern Cape");
		CmbProvince->Items->Add("North West");
		CmbProvince->Items->Add("Western Cape");

	}

		   // VALIDATION METHOD - enables Next button when required fields are filled
	Void ValidateFields()
	{
		if (CmbProvince->SelectedIndex != -1 &&
			txtCity->Text != "" &&
			txtArea->Text != "" &&
			txtAddress1->Text != "" &&
			mtxtPostalCode->Text->Length == 4)
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
	
		   // CLEAR BUTTON - clears all fields
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to Clear all fields?",
			"Clear Form", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			CmbProvince->SelectedIndex = -1;
			txtCity->Clear();
			txtArea->Clear();
			txtAddress1->Clear();
			txtAddress2->Clear();
			mtxtPostalCode->Clear();
			btnNext->Enabled = false;
		}
	}


	private: System::Void CmbProvince_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		ValidateFields();
	}
	private: System::Void txtCity_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		ValidateFields();
	}
	private: System::Void txtArea_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		ValidateFields();
	}
	private: System::Void txtAddress1_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		ValidateFields();
	}
	private: System::Void txtAddress2_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		ValidateFields();
	}
	private: System::Void mtxtPostalCode_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		ValidateFields();
	}
};
}

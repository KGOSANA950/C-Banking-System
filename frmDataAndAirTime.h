#pragma once
#include "Syntax_Squad_Banking.h"
#include "frmMessage.h"

namespace Syntaxsquad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmDataAndAirTime
	/// </summary>
	public ref class frmDataAndAirTime : public System::Windows::Forms::Form
	{
	public:
		frmDataAndAirTime(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}


		// Constructor that accepts User object
		frmDataAndAirTime(Syntax_Squad_Banking^ user)
		{
			InitializeComponent();
			loggedInUser = user;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmDataAndAirTime()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ btnBuy;
	private: System::Windows::Forms::MaskedTextBox^ mtxtPhoneNumber;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ cmbProductType;
	private: System::Windows::Forms::ComboBox^ cmbDataBundle;
	private: System::Windows::Forms::ComboBox^ cmbSmsBundle;



	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ cmbNetwork;
	protected:

	private:
		Syntax_Squad_Banking^ loggedInUser;
	private: System::Windows::Forms::Label^ lblBalance;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmDataAndAirTime::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblBalance = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->mtxtPhoneNumber = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->cmbNetwork = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->cmbProductType = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->cmbDataBundle = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->cmbSmsBundle = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnBuy = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel1->Controls->Add(this->lblBalance);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(33, 26);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1001, 87);
			this->panel1->TabIndex = 0;
			// 
			// lblBalance
			// 
			this->lblBalance->Location = System::Drawing::Point(798, 19);
			this->lblBalance->Name = L"lblBalance";
			this->lblBalance->Size = System::Drawing::Size(175, 40);
			this->lblBalance->TabIndex = 9;
			this->lblBalance->Text = L"label12";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(335, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Buy AirTime and Data";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::SkyBlue;
			this->panel2->Controls->Add(this->mtxtPhoneNumber);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(33, 143);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1001, 106);
			this->panel2->TabIndex = 1;
			// 
			// mtxtPhoneNumber
			// 
			this->mtxtPhoneNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mtxtPhoneNumber->Location = System::Drawing::Point(178, 60);
			this->mtxtPhoneNumber->Mask = L"(999) 000-0000";
			this->mtxtPhoneNumber->Name = L"mtxtPhoneNumber";
			this->mtxtPhoneNumber->Size = System::Drawing::Size(201, 27);
			this->mtxtPhoneNumber->TabIndex = 8;
			// 
			// label11
			// 
			this->label11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label11.Image")));
			this->label11->Location = System::Drawing::Point(40, 11);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(99, 83);
			this->label11->TabIndex = 22;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(174, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(193, 25);
			this->label2->TabIndex = 8;
			this->label2->Text = L"CellPhone Number";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::SkyBlue;
			this->panel3->Controls->Add(this->cmbNetwork);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Location = System::Drawing::Point(33, 276);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1001, 94);
			this->panel3->TabIndex = 2;
			// 
			// cmbNetwork
			// 
			this->cmbNetwork->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbNetwork->FormattingEnabled = true;
			this->cmbNetwork->Location = System::Drawing::Point(181, 42);
			this->cmbNetwork->Name = L"cmbNetwork";
			this->cmbNetwork->Size = System::Drawing::Size(377, 28);
			this->cmbNetwork->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(174, 14);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(171, 25);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Choose Network";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::SkyBlue;
			this->panel4->Controls->Add(this->cmbProductType);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Location = System::Drawing::Point(33, 397);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1001, 94);
			this->panel4->TabIndex = 3;
			// 
			// cmbProductType
			// 
			this->cmbProductType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbProductType->FormattingEnabled = true;
			this->cmbProductType->Location = System::Drawing::Point(179, 51);
			this->cmbProductType->Name = L"cmbProductType";
			this->cmbProductType->Size = System::Drawing::Size(379, 28);
			this->cmbProductType->TabIndex = 4;
			this->cmbProductType->TextChanged += gcnew System::EventHandler(this, &frmDataAndAirTime::cmbProductType_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(176, 17);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(203, 25);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Choose Product Type";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::SkyBlue;
			this->panel5->Controls->Add(this->label9);
			this->panel5->Controls->Add(this->textBox1);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Location = System::Drawing::Point(33, 527);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1001, 94);
			this->panel5->TabIndex = 4;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::Control;
			this->label9->Location = System::Drawing::Point(322, 12);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(118, 20);
			this->label9->TabIndex = 8;
			this->label9->Text = L"(R5 - R1000)";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(312, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(246, 27);
			this->textBox1->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Control;
			this->label6->Location = System::Drawing::Point(175, 53);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 25);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Amount : ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(175, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 25);
			this->label5->TabIndex = 2;
			this->label5->Text = L"AirTime";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::SkyBlue;
			this->panel6->Controls->Add(this->cmbDataBundle);
			this->panel6->Controls->Add(this->label7);
			this->panel6->Location = System::Drawing::Point(33, 652);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1001, 94);
			this->panel6->TabIndex = 5;
			// 
			// cmbDataBundle
			// 
			this->cmbDataBundle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbDataBundle->FormattingEnabled = true;
			this->cmbDataBundle->Location = System::Drawing::Point(178, 48);
			this->cmbDataBundle->Name = L"cmbDataBundle";
			this->cmbDataBundle->Size = System::Drawing::Size(380, 28);
			this->cmbDataBundle->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::Control;
			this->label7->Location = System::Drawing::Point(175, 14);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 25);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Data bundle";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::SkyBlue;
			this->panel7->Controls->Add(this->cmbSmsBundle);
			this->panel7->Controls->Add(this->label8);
			this->panel7->Location = System::Drawing::Point(33, 769);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(1001, 94);
			this->panel7->TabIndex = 6;
			// 
			// cmbSmsBundle
			// 
			this->cmbSmsBundle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbSmsBundle->FormattingEnabled = true;
			this->cmbSmsBundle->Location = System::Drawing::Point(178, 47);
			this->cmbSmsBundle->Name = L"cmbSmsBundle";
			this->cmbSmsBundle->Size = System::Drawing::Size(380, 28);
			this->cmbSmsBundle->TabIndex = 6;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::Control;
			this->label8->Location = System::Drawing::Point(175, 13);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(121, 25);
			this->label8->TabIndex = 5;
			this->label8->Text = L"SMS bundle";
			// 
			// btnBuy
			// 
			this->btnBuy->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->btnBuy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuy->ForeColor = System::Drawing::SystemColors::Control;
			this->btnBuy->Location = System::Drawing::Point(884, 898);
			this->btnBuy->Name = L"btnBuy";
			this->btnBuy->Size = System::Drawing::Size(150, 52);
			this->btnBuy->TabIndex = 7;
			this->btnBuy->Text = L"Buy";
			this->btnBuy->UseVisualStyleBackColor = false;
			this->btnBuy->Click += gcnew System::EventHandler(this, &frmDataAndAirTime::btnBuy_Click);
			// 
			// frmDataAndAirTime
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1068, 952);
			this->Controls->Add(this->btnBuy);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"frmDataAndAirTime";
			this->Text = L"frmDataAndAirTime";
			this->Load += gcnew System::EventHandler(this, &frmDataAndAirTime::frmDataAndAirTime_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmDataAndAirTime_Load(System::Object^ sender, System::EventArgs^ e) 
	{

		UpdateBalanceDisplay();

		// Display balance
		if (loggedInUser != nullptr)
		{
			lblBalance->Text = "R " + loggedInUser->getBalance().ToString("F2");
		}

		//for the chooese network
		cmbNetwork->Items->Add("Cell C");
		cmbNetwork->Items->Add("MTN");
		cmbNetwork->Items->Add("Telkom");
		cmbNetwork->Items->Add("Vodacom");
		cmbNetwork->Items->Add("Rain");
		cmbNetwork->SelectedIndex = 0;

		//for the choose product type
		cmbProductType->Items->Add("Airtime");
		cmbProductType->Items->Add("Data Bundle");
		cmbProductType->Items->Add("SMS Bundle");
		cmbProductType->SelectedIndex = 0;  // Select Airtime by default
		  
		// Data Bundle options
		cmbDataBundle->Items->Add("R15.00\t\tDaily 150MB");
		cmbDataBundle->Items->Add("R17.00\t\tDaily 300MB");
		cmbDataBundle->Items->Add("R29.00\t\tDaily 1GB");
		cmbDataBundle->Items->Add("R79.00\t\tWeekly All-in-one + 6GB");
		cmbDataBundle->Items->Add("R469.00\t\tMonthly 10GB + 10GB");
		cmbDataBundle->SelectedIndex = 0;

		// SMS Bundle options (FIXED - was adding to cmbDataBundle incorrectly)
		cmbSmsBundle->Items->Add("R30.00\t\t100 SMS bundle");
		cmbSmsBundle->Items->Add("R50.00\t\t160 SMS Bundle");
		cmbSmsBundle->Items->Add("R70.00\t\t230 SMS Bundle");
		cmbSmsBundle->SelectedIndex = 0;

		// Initially hide all product panels, show only Airtime
		panel5->Visible = true;   // Airtime panel
		panel6->Visible = false;  // Data bundle panel
		panel7->Visible = false;  // SMS bundle panel

		// Update balance display if user is logged in
		if (loggedInUser != nullptr)
		{
			// Add a balance label if you have one
			// lblBalance->Text = "Balance: R" + loggedInUser->getBalance().ToString("F2");
		}
	}


	private: System::Void cmbProductType_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		// Hide all product panels first
		panel5->Visible = false;  // Airtime panel
		panel6->Visible = false;  // Data bundle panel
		panel7->Visible = false;  // SMS bundle panel

		// Show the selected product panel
		String^ selected = cmbProductType->SelectedItem->ToString();

		if (selected == "Airtime")
		{
			panel5->Visible = true;
		}
		else if (selected == "Data Bundle")
		{
			panel6->Visible = true;
		}
		else if (selected == "SMS Bundle")
		{
			panel7->Visible = true;
		}
	}

	private: System::Void btnBuy_Click(System::Object^ sender, System::EventArgs^ e)
	{

	// Validate phone number
String^ phoneNumber = mtxtPhoneNumber->Text->Trim();
if (phoneNumber == "" || phoneNumber->Length < 10)
{
	MessageBox::Show("Please enter a valid 10-digit cellphone number!",
		"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	return;
}

// Validate network
if (cmbNetwork->SelectedIndex == -1)
{
	MessageBox::Show("Please select a network!",
		"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	return;
}

// Validate product type
if (cmbProductType->SelectedIndex == -1)
{
	MessageBox::Show("Please select a product type!",
		"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	return;
}

String^ productType = cmbProductType->SelectedItem->ToString();
double amount = 0;
String^ itemDetails = "";

if (productType == "Airtime")
{
	if (textBox1->Text == "")
	{
		MessageBox::Show("Please enter an amount!",
			"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	if (!Double::TryParse(textBox1->Text, amount))
	{
		MessageBox::Show("Please enter a valid amount!",
			"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	if (amount < 5 || amount > 1000)
	{
		MessageBox::Show("Airtime amount must be between R5 and R1000!",
			"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	itemDetails = "R" + amount.ToString("F2");
}
else if (productType == "Data Bundle")
{
	if (cmbDataBundle->SelectedIndex == -1)
	{
		MessageBox::Show("Please select a data bundle!",
			"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	amount = GetDataBundleAmount();
	itemDetails = cmbDataBundle->SelectedItem->ToString();

	if (amount <= 0)
	{
		MessageBox::Show("Invalid data bundle selected!",
			"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
}
else if (productType == "SMS Bundle")
{
	if (cmbSmsBundle->SelectedIndex == -1)
	{
		MessageBox::Show("Please select an SMS bundle!",
			"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	amount = GetSmsBundleAmount();
	itemDetails = cmbSmsBundle->SelectedItem->ToString();

	if (amount <= 0)
	{
		MessageBox::Show("Invalid SMS bundle selected!",
			"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
}

// Check balance
if (loggedInUser != nullptr && loggedInUser->getBalance() < amount)
{
	MessageBox::Show("Insufficient balance!\n\n" +
		"Available: R" + loggedInUser->getBalance().ToString("F2") + "\n" +
		"Required: R" + amount.ToString("F2"),
		"Insufficient Funds", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	return;
}

// Check daily limit
if (loggedInUser != nullptr && amount > loggedInUser->getLimit())
{
	MessageBox::Show("Amount exceeds your daily limit!\n\n" +
		"Daily Limit: R" + loggedInUser->getLimit().ToString("F2"),
		"Limit Exceeded", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	return;
}

// Confirm purchase
System::Windows::Forms::DialogResult result = MessageBox::Show("Confirm purchase?\n\n" +
	"Product: " + productType + "\n" +
	"Item: " + itemDetails + "\n" +
	"Network: " + cmbNetwork->SelectedItem->ToString() + "\n" +
	"Phone: " + phoneNumber + "\n" +
	"Amount: R" + amount.ToString("F2") + "\n\n" +
	"Current Balance: R" + loggedInUser->getBalance().ToString("F2"),
	"Confirm Purchase", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

if (result == System::Windows::Forms::DialogResult::Yes && loggedInUser != nullptr)
{
	// Deduct amount
	double newBalance = loggedInUser->getBalance() - amount;
	loggedInUser->setBalance(newBalance);

	// Update balance display
	lblBalance->Text = "R " + newBalance.ToString("F2");

	// Generate reference number
	Random^ rand = gcnew Random();
	String^ reference = rand->Next(100000, 999999).ToString();

	// ============================================
// PUT THE MESSAGE CODE HERE (RIGHT AFTER deducting balance)
// ============================================
	String^ message = DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss") + " - " +
		productType + ": R" + amount.ToString("F2") + " for " + phoneNumber + "\n\n" +
		"        " + itemDetails + " | Network: " + cmbNetwork->SelectedItem->ToString() + "\n\n" +
		"        Reference: " + reference + " | New Balance: R" + newBalance.ToString("F2");

	frmMessage::AddGlobalMessage(message);

	MessageBox::Show(productType + " purchase successful!\n\n" +
		"Network: " + cmbNetwork->SelectedItem->ToString() + "\n" +
		"Phone: " + phoneNumber + "\n" +
		"Item: " + itemDetails + "\n" +
		"Amount: R" + amount.ToString("F2") + "\n" +
		"New Balance: R" + newBalance.ToString("F2") + "\n\n" +
		"Reference: " + reference,
		"Purchase Successful", MessageBoxButtons::OK, MessageBoxIcon::Information);

	// Clear form
	mtxtPhoneNumber->Clear();
	textBox1->Clear();
	cmbProductType->SelectedIndex = 0;
}
	}

	private: void UpdateBalanceDisplay()
	{
		if (loggedInUser != nullptr)
		{
			lblBalance->Text = "R " + loggedInUser->getBalance().ToString("F2");
		}
	}

	private: double GetDataBundleAmount()
	{
		if (cmbDataBundle->SelectedIndex == -1) return 0;

		String^ selected = cmbDataBundle->SelectedItem->ToString();

		if (selected->Contains("R15.00")) return 15.00;
		if (selected->Contains("R17.00")) return 17.00;
		if (selected->Contains("R29.00")) return 29.00;
		if (selected->Contains("R79.00")) return 79.00;
		if (selected->Contains("R469.00")) return 469.00;

		return 0;
	}

	private: double GetSmsBundleAmount()
	{
		if (cmbSmsBundle->SelectedIndex == -1) return 0;

		String^ selected = cmbSmsBundle->SelectedItem->ToString();

		if (selected->Contains("R30.00")) return 30.00;
		if (selected->Contains("R50.00")) return 50.00;
		if (selected->Contains("R70.00")) return 70.00;

		return 0;
	}
};
}

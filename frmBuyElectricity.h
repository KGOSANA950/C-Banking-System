#pragma once
#include "Syntax_Squad_Banking.h"

namespace Syntaxsquad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmBuyElectricity
	/// </summary>
	public ref class frmBuyElectricity : public System::Windows::Forms::Form
	{
	public:
		frmBuyElectricity(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		// Constructor that accepts User object
		frmBuyElectricity(Syntax_Squad_Banking^ user)
		{
			InitializeComponent();
			loggedInUser = user;
			LoadUtilityTypes();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmBuyElectricity()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ cmbUtilityType;


	private: System::Windows::Forms::MaskedTextBox^ mtxtMeterNumber;
	private: System::Windows::Forms::TextBox^ txtAmount;

	private: System::Windows::Forms::Panel^ panel2;

	private:
		Syntax_Squad_Banking^ loggedInUser;
	private: System::Windows::Forms::Label^ lblBalanceDisplay;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->cmbUtilityType = (gcnew System::Windows::Forms::ComboBox());
			this->mtxtMeterNumber = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtAmount = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lblBalanceDisplay = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(43, 38);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(979, 100);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(334, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Meter Number";
			this->label1->Click += gcnew System::EventHandler(this, &frmBuyElectricity::label1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->button1->Location = System::Drawing::Point(884, 852);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 51);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buy";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmBuyElectricity::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(109, 253);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Meter Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::LightSkyBlue;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(109, 401);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(190, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Choose utility type";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::LightSkyBlue;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(109, 544);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 25);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Meter Number";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::LightSkyBlue;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(109, 677);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Amount";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(114, 311);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(453, 30);
			this->textBox1->TabIndex = 7;
			// 
			// cmbUtilityType
			// 
			this->cmbUtilityType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbUtilityType->FormattingEnabled = true;
			this->cmbUtilityType->Location = System::Drawing::Point(114, 466);
			this->cmbUtilityType->Name = L"cmbUtilityType";
			this->cmbUtilityType->Size = System::Drawing::Size(453, 33);
			this->cmbUtilityType->TabIndex = 8;
			// 
			// mtxtMeterNumber
			// 
			this->mtxtMeterNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mtxtMeterNumber->Location = System::Drawing::Point(114, 610);
			this->mtxtMeterNumber->Mask = L"(999) 0000-0000";
			this->mtxtMeterNumber->Name = L"mtxtMeterNumber";
			this->mtxtMeterNumber->Size = System::Drawing::Size(566, 30);
			this->mtxtMeterNumber->TabIndex = 9;
			// 
			// txtAmount
			// 
			this->txtAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAmount->Location = System::Drawing::Point(114, 737);
			this->txtAmount->Name = L"txtAmount";
			this->txtAmount->Size = System::Drawing::Size(566, 30);
			this->txtAmount->TabIndex = 10;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->panel2->Location = System::Drawing::Point(43, 222);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(979, 601);
			this->panel2->TabIndex = 11;
			// 
			// lblBalanceDisplay
			// 
			this->lblBalanceDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBalanceDisplay->Location = System::Drawing::Point(821, 155);
			this->lblBalanceDisplay->Name = L"lblBalanceDisplay";
			this->lblBalanceDisplay->Size = System::Drawing::Size(201, 41);
			this->lblBalanceDisplay->TabIndex = 12;
			this->lblBalanceDisplay->Text = L"label6";
			// 
			// frmBuyElectricity
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1070, 955);
			this->Controls->Add(this->lblBalanceDisplay);
			this->Controls->Add(this->txtAmount);
			this->Controls->Add(this->mtxtMeterNumber);
			this->Controls->Add(this->cmbUtilityType);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Name = L"frmBuyElectricity";
			this->Text = L"frmBuyElectricity";
			this->Load += gcnew System::EventHandler(this, &frmBuyElectricity::frmBuyElectricity_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}

	private: System::Void frmBuyElectricity_Load(System::Object^ sender, System::EventArgs^ e)
	{
		//cmbUtility->Items->Add("Electricity");
		//cmbUtility->Items->Add("Water");

		UpdateBalanceDisplay();
	}

		   void LoadUtilityTypes()
		   {
			   cmbUtilityType->Items->Add("Eskom Prepaid");
			   cmbUtilityType->Items->Add("City Power");
			   cmbUtilityType->Items->Add("Municipal");
			   cmbUtilityType->SelectedIndex = 0;
		   }

		   void UpdateBalanceDisplay()
		   {
			   if (loggedInUser != nullptr)
			   {
				   lblBalanceDisplay->Text = "R " + loggedInUser->getBalance().ToString("F2");
			   }
		   }

		   bool ProcessElectricityPurchase(double amount, String^ meterNumber, String^ utilityType)
		   {
			   // Check if user has sufficient balance
			   if (loggedInUser->getBalance() < amount)
			   {
				   MessageBox::Show("Insufficient balance!\n\n" +
					   "Available: R" + loggedInUser->getBalance().ToString("F2") + "\n" +
					   "Required: R" + amount.ToString("F2"),
					   "Insufficient Funds", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				   return false;
			   }

			   // Check daily limit
			   if (amount > loggedInUser->getLimit())
			   {
				   MessageBox::Show("Amount exceeds your daily limit!\n\n" +
					   "Daily Limit: R" + loggedInUser->getLimit().ToString("F2"),
					   "Limit Exceeded", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				   return false;
			   }

			   // Deduct amount from balance
			   double newBalance = loggedInUser->getBalance() - amount;
			   loggedInUser->setBalance(newBalance);

			   // Generate token
			   Random^ rand = gcnew Random();
			   String^ token = "";
			   for (int i = 0; i < 20; i++)
			   {
				   token += rand->Next(0, 9).ToString();
			   }

			   // Show success message with token
			   MessageBox::Show("Electricity purchase successful!\n\n" +
				   "Utility: " + utilityType + "\n" +
				   "Meter Number: " + meterNumber + "\n" +
				   "Amount: R" + amount.ToString("F2") + "\n" +
				   "New Balance: R" + newBalance.ToString("F2") + "\n\n" +
				   "Token: " + token + "\n\n" +
				   "Please save this token for your records.",
				   "Purchase Successful", MessageBoxButtons::OK, MessageBoxIcon::Information);

			   return true;
		   }
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		// Validate meter number
		String^ meterNumber = mtxtMeterNumber->Text->Trim();
		if (meterNumber == "" || meterNumber->Length < 8)
		{
			MessageBox::Show("Please enter a valid meter number (minimum 8 digits)!",
				"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Validate amount
		double amount;
		if (!Double::TryParse(txtAmount->Text, amount))
		{
			MessageBox::Show("Please enter a valid amount!",
				"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (amount <= 0)
		{
			MessageBox::Show("Amount must be greater than 0!",
				"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (amount < 10)
		{
			MessageBox::Show("Minimum electricity purchase is R10.00!",
				"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}		

		// Confirm purchase
		System::Windows::Forms::DialogResult result = MessageBox::Show("Confirm electricity purchase?\n\n" +
			"Utility: " + cmbUtilityType->SelectedItem->ToString() + "\n" +
			"Meter Number: " + meterNumber + "\n" +
			"Amount: R" + amount.ToString("F2") + "\n\n" +
			"Current Balance: R" + loggedInUser->getBalance().ToString("F2"),
			"Confirm Purchase", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			bool success = ProcessElectricityPurchase(amount, meterNumber, cmbUtilityType->SelectedItem->ToString());
			if (success)
			{
				UpdateBalanceDisplay();
				mtxtMeterNumber->Clear();
				txtAmount->Clear();
			}
		}
	}
};
}

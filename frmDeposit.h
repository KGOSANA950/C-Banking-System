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
	/// Summary for frmDeposit
	/// </summary>
	public ref class frmDeposit : public System::Windows::Forms::Form
	{
	public:
		frmDeposit(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		// Constructor that accepts User object
		frmDeposit(Syntax_Squad_Banking^ user)
		{
			InitializeComponent();



			loggedInUser = user;
			//UpdateBalanceDisplay();
			LoadAccountTypes();
			LoadDepositMethods();
			DisplayAccountInfo();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmDeposit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ rdbCurrentAccount;


	private: System::Windows::Forms::RadioButton^ rdbSavingsAccount;

	private: System::Windows::Forms::RadioButton^ rdbChequeAccount;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtAmount;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ rdbEFT;
	private: System::Windows::Forms::RadioButton^ rdbChequeDeposit;



	private: System::Windows::Forms::RadioButton^ rdbCash;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtReference;

	private: System::Windows::Forms::Button^ btnDeposit;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Label^ label15;



	protected:


	private:
		Syntax_Squad_Banking^ loggedInUser;
	private: System::Windows::Forms::TextBox^ txtAccountNumber;

	private: System::Windows::Forms::Label^ label4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmDeposit::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rdbCurrentAccount = (gcnew System::Windows::Forms::RadioButton());
			this->rdbSavingsAccount = (gcnew System::Windows::Forms::RadioButton());
			this->rdbChequeAccount = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtAmount = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rdbEFT = (gcnew System::Windows::Forms::RadioButton());
			this->rdbChequeDeposit = (gcnew System::Windows::Forms::RadioButton());
			this->rdbCash = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtReference = (gcnew System::Windows::Forms::TextBox());
			this->btnDeposit = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->txtAccountNumber = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(58, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(890, 80);
			this->panel1->TabIndex = 0;
			// 
			// label15
			// 
			this->label15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label15.Image")));
			this->label15->Location = System::Drawing::Point(216, 10);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(125, 76);
			this->label15->TabIndex = 22;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(415, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Deposit Money";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rdbCurrentAccount);
			this->groupBox1->Controls->Add(this->rdbSavingsAccount);
			this->groupBox1->Controls->Add(this->rdbChequeAccount);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->groupBox1->Location = System::Drawing::Point(58, 114);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(571, 157);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Select Account to Depodite To : ";
			// 
			// rdbCurrentAccount
			// 
			this->rdbCurrentAccount->AutoSize = true;
			this->rdbCurrentAccount->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->rdbCurrentAccount->Location = System::Drawing::Point(48, 110);
			this->rdbCurrentAccount->Name = L"rdbCurrentAccount";
			this->rdbCurrentAccount->Size = System::Drawing::Size(190, 29);
			this->rdbCurrentAccount->TabIndex = 4;
			this->rdbCurrentAccount->TabStop = true;
			this->rdbCurrentAccount->Text = L"Current Account";
			this->rdbCurrentAccount->UseVisualStyleBackColor = true;
			// 
			// rdbSavingsAccount
			// 
			this->rdbSavingsAccount->AutoSize = true;
			this->rdbSavingsAccount->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->rdbSavingsAccount->Location = System::Drawing::Point(48, 75);
			this->rdbSavingsAccount->Name = L"rdbSavingsAccount";
			this->rdbSavingsAccount->Size = System::Drawing::Size(196, 29);
			this->rdbSavingsAccount->TabIndex = 3;
			this->rdbSavingsAccount->TabStop = true;
			this->rdbSavingsAccount->Text = L"Savings Account";
			this->rdbSavingsAccount->UseVisualStyleBackColor = true;
			// 
			// rdbChequeAccount
			// 
			this->rdbChequeAccount->AutoSize = true;
			this->rdbChequeAccount->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->rdbChequeAccount->Location = System::Drawing::Point(50, 40);
			this->rdbChequeAccount->Name = L"rdbChequeAccount";
			this->rdbChequeAccount->Size = System::Drawing::Size(194, 29);
			this->rdbChequeAccount->TabIndex = 2;
			this->rdbChequeAccount->TabStop = true;
			this->rdbChequeAccount->Text = L"Cheque Account";
			this->rdbChequeAccount->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label2->Location = System::Drawing::Point(53, 358);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Enter Amount";
			// 
			// txtAmount
			// 
			this->txtAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAmount->Location = System::Drawing::Point(56, 386);
			this->txtAmount->Name = L"txtAmount";
			this->txtAmount->Size = System::Drawing::Size(573, 27);
			this->txtAmount->TabIndex = 3;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->rdbEFT);
			this->groupBox2->Controls->Add(this->rdbChequeDeposit);
			this->groupBox2->Controls->Add(this->rdbCash);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->groupBox2->Location = System::Drawing::Point(56, 433);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(573, 139);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Deposit Method";
			// 
			// rdbEFT
			// 
			this->rdbEFT->AutoSize = true;
			this->rdbEFT->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->rdbEFT->Location = System::Drawing::Point(48, 64);
			this->rdbEFT->Name = L"rdbEFT";
			this->rdbEFT->Size = System::Drawing::Size(229, 29);
			this->rdbEFT->TabIndex = 6;
			this->rdbEFT->TabStop = true;
			this->rdbEFT->Text = L"EFT / Bank Transfer";
			this->rdbEFT->UseVisualStyleBackColor = true;
			// 
			// rdbChequeDeposit
			// 
			this->rdbChequeDeposit->AutoSize = true;
			this->rdbChequeDeposit->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->rdbChequeDeposit->Location = System::Drawing::Point(50, 99);
			this->rdbChequeDeposit->Name = L"rdbChequeDeposit";
			this->rdbChequeDeposit->Size = System::Drawing::Size(109, 29);
			this->rdbChequeDeposit->TabIndex = 7;
			this->rdbChequeDeposit->TabStop = true;
			this->rdbChequeDeposit->Text = L"Cheque";
			this->rdbChequeDeposit->UseVisualStyleBackColor = true;
			// 
			// rdbCash
			// 
			this->rdbCash->AutoSize = true;
			this->rdbCash->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->rdbCash->Location = System::Drawing::Point(48, 29);
			this->rdbCash->Name = L"rdbCash";
			this->rdbCash->Size = System::Drawing::Size(163, 29);
			this->rdbCash->TabIndex = 5;
			this->rdbCash->TabStop = true;
			this->rdbCash->Text = L"Cash Deposit";
			this->rdbCash->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label3->Location = System::Drawing::Point(53, 588);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Reference";
			// 
			// txtReference
			// 
			this->txtReference->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtReference->Location = System::Drawing::Point(58, 635);
			this->txtReference->Name = L"txtReference";
			this->txtReference->Size = System::Drawing::Size(571, 27);
			this->txtReference->TabIndex = 6;
			// 
			// btnDeposit
			// 
			this->btnDeposit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeposit->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btnDeposit->Location = System::Drawing::Point(698, 689);
			this->btnDeposit->Name = L"btnDeposit";
			this->btnDeposit->Size = System::Drawing::Size(161, 60);
			this->btnDeposit->TabIndex = 7;
			this->btnDeposit->Text = L"Deposit";
			this->btnDeposit->UseVisualStyleBackColor = true;
			this->btnDeposit->Click += gcnew System::EventHandler(this, &frmDeposit::btnDeposit_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btnCancel->Location = System::Drawing::Point(478, 689);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(161, 60);
			this->btnCancel->TabIndex = 8;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &frmDeposit::btnCancel_Click);
			// 
			// txtAccountNumber
			// 
			this->txtAccountNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtAccountNumber->Location = System::Drawing::Point(58, 315);
			this->txtAccountNumber->Name = L"txtAccountNumber";
			this->txtAccountNumber->Size = System::Drawing::Size(573, 27);
			this->txtAccountNumber->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label4->Location = System::Drawing::Point(53, 287);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(191, 25);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Account Number : ";
			// 
			// frmDeposit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1059, 758);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtAccountNumber);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnDeposit);
			this->Controls->Add(this->txtReference);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->txtAmount);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->Name = L"frmDeposit";
			this->Text = L"frmDeposit";
			this->Load += gcnew System::EventHandler(this, &frmDeposit::frmDeposit_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmDeposit_Load(System::Object^ sender, System::EventArgs^ e) 
	{

			/*MessageBox::Show("User received: " + loggedInUser->getFirstname() + " " + loggedInUser->getSurname(),
				"Debug - User Found", MessageBoxButtons::OK, MessageBoxIcon::Information);*/
		

		DisplayAccountInfo();
	}
	
		   // Display account information
		   void DisplayAccountInfo()
		   {
			   if (loggedInUser != nullptr)
			   {
				   txtAccountNumber->Text = loggedInUser->getAccountNumber().ToString();
			   }
		   }

		   void LoadAccountTypes()
		   {
			   // Default select account based on user's account type
			   if (loggedInUser != nullptr)
			   {
				   String^ accountType = loggedInUser->getAccountType();
				   if (accountType == "Cheque")
					   rdbChequeAccount->Checked = true;
				   else if (accountType == "Savings")
					   rdbSavingsAccount->Checked = true;
				   else if (accountType == "Current")
					   rdbCurrentAccount->Checked = true;
				   else
					   rdbChequeAccount->Checked = true;
			   }
			   else
			   {
				   rdbChequeAccount->Checked = true;
			   }
		   }

		   void LoadDepositMethods()
		   {
			   rdbChequeAccount->Checked = true;
		   }

		   String^ GetSelectedAccount()
		   {
			   if (rdbChequeAccount->Checked) return "Cheque Account";
			   if (rdbSavingsAccount->Checked) return "Savings Account";
			   if (rdbCurrentAccount->Checked) return "Current Account";
			   return "Unknown";
		   }

		   String^ GetDepositMethod()
		   {
			   if (rdbCash->Checked) return "Cash Deposit";
			   if (rdbEFT->Checked) return "EFT / Bank Transfer";
			   if (rdbChequeDeposit->Checked) return "Cheque";
			   return "Unknown";
		   }

	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to cancel the deposit?",
			"Cancel Deposit", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			this->Close();
		}
	}

	private: System::Void btnDeposit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Validate amount
		//if (txtAmount->Text == "")
		//{
		//	MessageBox::Show("Please enter an amount to deposit!",
		//		"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		//	return;
		//}

		//double amount;
		//if (!Double::TryParse(txtAmount->Text, amount))
		//{
		//	MessageBox::Show("Please enter a valid numeric amount!",
		//		"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		//	return;
		//}

		//if (amount <= 0)
		//{
		//	MessageBox::Show("Amount must be greater than 0!",
		//		"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		//	return;
		//}

		//if (amount < 10)
		//{
		//	MessageBox::Show("Minimum deposit amount is R10.00!",
		//		"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		//	return;
		//}

		//if (amount > 100000)
		//{
		//	MessageBox::Show("Maximum deposit amount is R100,000.00!\nFor larger amounts, please visit a branch.",
		//		"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		//	return;
		//}
		//
		//// Confirm deposit
		//System::Windows::Forms::DialogResult result = MessageBox::Show("Confirm deposit?\n\n" +
		//	"Account: " + GetSelectedAccount() + "\n" +
		//	"Amount: R" + amount.ToString("F2") + "\n" +
		//	"Method: " + GetDepositMethod() + "\n" +
		//	"Reference: " + (txtReference->Text == "" ? "N/A" : txtReference->Text) + "\n\n" +
		//	"Current Balance: R" + loggedInUser->getBalance().ToString("F2"),
		//	"Confirm Deposit", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		//if (result == System::Windows::Forms::DialogResult::Yes && loggedInUser != nullptr)
		//{
		//	// Add amount to balance
		//	double newBalance = loggedInUser->getBalance() + amount;
		//	loggedInUser->setBalance(newBalance);

		//	// Generate transaction reference
		//	Random^ rand = gcnew Random();
		//	String^ transactionRef = rand->Next(100000, 999999).ToString();

		//	// Update balance display
		//	//UpdateBalanceDisplay();

		//	// Show success message
		//	MessageBox::Show("Deposit successful!\n\n" +
		//		"Account: " + GetSelectedAccount() + "\n" +
		//		"Amount: R" + amount.ToString("F2") + "\n" +
		//		"Method: " + GetDepositMethod() + "\n" +
		//		"New Balance: R" + newBalance.ToString("F2") + "\n\n" +
		//		"Transaction Reference: " + transactionRef,
		//		"Deposit Successful", MessageBoxButtons::OK, MessageBoxIcon::Information);

		//	// Clear form
		//	txtAmount->Clear();
		//	txtReference->Clear();

		//	// Refresh balance display
		//	//UpdateBalanceDisplay();
		//}

		// Validate amount
		if (txtAmount->Text == "")
		{
			MessageBox::Show("Please enter an amount to deposit!",
				"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		double amount;
		if (!Double::TryParse(txtAmount->Text, amount))
		{
			MessageBox::Show("Please enter a valid numeric amount!",
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
			MessageBox::Show("Minimum deposit amount is R10.00!",
				"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (amount > 100000)
		{
			MessageBox::Show("Maximum deposit amount is R100,000.00!\nFor larger amounts, please visit a branch.",
				"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Check if user exists
		if (loggedInUser == nullptr)
		{
			MessageBox::Show("User not found! Please login again.",
				"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Confirm deposit
		System::Windows::Forms::DialogResult result = MessageBox::Show("Confirm deposit?\n\n" +
			"Account: " + GetSelectedAccount() + "\n" +
			"Account Number: " + loggedInUser->getAccountNumber() + "\n" +
			"Amount: R" + amount.ToString("F2") + "\n" +
			"Method: " + GetDepositMethod() + "\n" +
			"Reference: " + (txtReference->Text == "" ? "N/A" : txtReference->Text) + "\n\n" +
			"Current Balance: R" + loggedInUser->getBalance().ToString("F2"),
			"Confirm Deposit", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			// Add amount to balance
			double newBalance = loggedInUser->getBalance() + amount;
			loggedInUser->setBalance(newBalance);

			// Generate transaction reference
			Random^ rand = gcnew Random();
			String^ transactionRef = rand->Next(100000, 999999).ToString();

			// Show success message
			MessageBox::Show("Deposit successful!\n\n" +
				"Account: " + GetSelectedAccount() + "\n" +
				"Account Number: " + loggedInUser->getAccountNumber() + "\n" +
				"Amount: R" + amount.ToString("F2") + "\n" +
				"Method: " + GetDepositMethod() + "\n" +
				"New Balance: R" + newBalance.ToString("F2") + "\n\n" +
				"Transaction Reference: " + transactionRef,
				"Deposit Successful", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Clear form
			txtAmount->Clear();
			txtReference->Clear();
		}
	}
};
}

#pragma once
#include "Syntax_Squad_Banking.h"
#include "frmMessage.h"  // Add at top

namespace Syntaxsquad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmWithdraw
	/// </summary>
	public ref class frmWithdraw : public System::Windows::Forms::Form
	{
	public:
		frmWithdraw(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}


		// Constructor that accepts User object
		frmWithdraw(Syntax_Squad_Banking^ user)
		{
			InitializeComponent();
			loggedInUser = user;

			UpdateBalanceDisplay();
			LoadAccountTypes();
			LoadWithdrawMethods();
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmWithdraw()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ rdbCurrentAccount;
	private: System::Windows::Forms::RadioButton^ rdbSavingsAccount;
	private: System::Windows::Forms::RadioButton^ rdbChequeAccount;
	private: System::Windows::Forms::RadioButton^ rdbCashier;

	private: System::Windows::Forms::RadioButton^ rdbATM;

	private: System::Windows::Forms::TextBox^ txtAmount;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ rdbEFT;

	private: System::Windows::Forms::Button^ btnCancel;

	private: System::Windows::Forms::Button^ btnWithdraw;
	private: System::Windows::Forms::Label^ label3;






	private:
		Syntax_Squad_Banking^ loggedInUser;
	private: System::Windows::Forms::Label^ lblBalanceDisplay;
	private: System::Windows::Forms::Label^ lblFeeAmount;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmWithdraw::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rdbCurrentAccount = (gcnew System::Windows::Forms::RadioButton());
			this->rdbSavingsAccount = (gcnew System::Windows::Forms::RadioButton());
			this->rdbChequeAccount = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rdbEFT = (gcnew System::Windows::Forms::RadioButton());
			this->rdbCashier = (gcnew System::Windows::Forms::RadioButton());
			this->rdbATM = (gcnew System::Windows::Forms::RadioButton());
			this->txtAmount = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnWithdraw = (gcnew System::Windows::Forms::Button());
			this->lblBalanceDisplay = (gcnew System::Windows::Forms::Label());
			this->lblFeeAmount = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(37, 33);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(967, 106);
			this->panel1->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(147, 10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 96);
			this->label3->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(312, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Withdraw Money";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rdbCurrentAccount);
			this->groupBox1->Controls->Add(this->rdbSavingsAccount);
			this->groupBox1->Controls->Add(this->rdbChequeAccount);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->groupBox1->Location = System::Drawing::Point(37, 170);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(621, 259);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Select Account To Withdraw from";
			// 
			// rdbCurrentAccount
			// 
			this->rdbCurrentAccount->AutoSize = true;
			this->rdbCurrentAccount->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->rdbCurrentAccount->Location = System::Drawing::Point(45, 176);
			this->rdbCurrentAccount->Name = L"rdbCurrentAccount";
			this->rdbCurrentAccount->Size = System::Drawing::Size(190, 29);
			this->rdbCurrentAccount->TabIndex = 2;
			this->rdbCurrentAccount->TabStop = true;
			this->rdbCurrentAccount->Text = L"Current Account";
			this->rdbCurrentAccount->UseVisualStyleBackColor = true;
			// 
			// rdbSavingsAccount
			// 
			this->rdbSavingsAccount->AutoSize = true;
			this->rdbSavingsAccount->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->rdbSavingsAccount->Location = System::Drawing::Point(45, 111);
			this->rdbSavingsAccount->Name = L"rdbSavingsAccount";
			this->rdbSavingsAccount->Size = System::Drawing::Size(196, 29);
			this->rdbSavingsAccount->TabIndex = 1;
			this->rdbSavingsAccount->TabStop = true;
			this->rdbSavingsAccount->Text = L"Savings Account";
			this->rdbSavingsAccount->UseVisualStyleBackColor = true;
			// 
			// rdbChequeAccount
			// 
			this->rdbChequeAccount->AutoSize = true;
			this->rdbChequeAccount->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->rdbChequeAccount->Location = System::Drawing::Point(45, 49);
			this->rdbChequeAccount->Name = L"rdbChequeAccount";
			this->rdbChequeAccount->Size = System::Drawing::Size(194, 29);
			this->rdbChequeAccount->TabIndex = 0;
			this->rdbChequeAccount->TabStop = true;
			this->rdbChequeAccount->Text = L"Cheque Account";
			this->rdbChequeAccount->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->rdbEFT);
			this->groupBox2->Controls->Add(this->rdbCashier);
			this->groupBox2->Controls->Add(this->rdbATM);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->groupBox2->Location = System::Drawing::Point(37, 618);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(621, 226);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Withdraw Method";
			// 
			// rdbEFT
			// 
			this->rdbEFT->AutoSize = true;
			this->rdbEFT->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->rdbEFT->Location = System::Drawing::Point(45, 172);
			this->rdbEFT->Name = L"rdbEFT";
			this->rdbEFT->Size = System::Drawing::Size(161, 29);
			this->rdbEFT->TabIndex = 2;
			this->rdbEFT->TabStop = true;
			this->rdbEFT->Text = L"EFT Transfer";
			this->rdbEFT->UseVisualStyleBackColor = true;
			this->rdbEFT->CheckedChanged += gcnew System::EventHandler(this, &frmWithdraw::rdbEFT_CheckedChanged);
			this->rdbEFT->TextChanged += gcnew System::EventHandler(this, &frmWithdraw::rdbEFT_TextChanged);
			// 
			// rdbCashier
			// 
			this->rdbCashier->AutoSize = true;
			this->rdbCashier->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->rdbCashier->Location = System::Drawing::Point(45, 119);
			this->rdbCashier->Name = L"rdbCashier";
			this->rdbCashier->Size = System::Drawing::Size(189, 29);
			this->rdbCashier->TabIndex = 1;
			this->rdbCashier->TabStop = true;
			this->rdbCashier->Text = L"Cashier /Branch";
			this->rdbCashier->UseVisualStyleBackColor = true;
			this->rdbCashier->CheckedChanged += gcnew System::EventHandler(this, &frmWithdraw::rdbCashier_CheckedChanged);
			this->rdbCashier->TextChanged += gcnew System::EventHandler(this, &frmWithdraw::rdbCashier_TextChanged);
			// 
			// rdbATM
			// 
			this->rdbATM->AutoSize = true;
			this->rdbATM->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->rdbATM->Location = System::Drawing::Point(45, 59);
			this->rdbATM->Name = L"rdbATM";
			this->rdbATM->Size = System::Drawing::Size(193, 29);
			this->rdbATM->TabIndex = 0;
			this->rdbATM->TabStop = true;
			this->rdbATM->Text = L"ATM Withdrawal";
			this->rdbATM->UseVisualStyleBackColor = true;
			this->rdbATM->CheckedChanged += gcnew System::EventHandler(this, &frmWithdraw::rdbATM_CheckedChanged);
			this->rdbATM->TextChanged += gcnew System::EventHandler(this, &frmWithdraw::rdbATM_TextChanged);
			// 
			// txtAmount
			// 
			this->txtAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAmount->Location = System::Drawing::Point(37, 535);
			this->txtAmount->Name = L"txtAmount";
			this->txtAmount->Size = System::Drawing::Size(573, 27);
			this->txtAmount->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label2->Location = System::Drawing::Point(32, 479);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Enter Amount";
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btnCancel->Location = System::Drawing::Point(497, 910);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(161, 60);
			this->btnCancel->TabIndex = 10;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &frmWithdraw::btnCancel_Click);
			// 
			// btnWithdraw
			// 
			this->btnWithdraw->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnWithdraw->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btnWithdraw->Location = System::Drawing::Point(735, 910);
			this->btnWithdraw->Name = L"btnWithdraw";
			this->btnWithdraw->Size = System::Drawing::Size(161, 60);
			this->btnWithdraw->TabIndex = 9;
			this->btnWithdraw->Text = L"Withdraw";
			this->btnWithdraw->UseVisualStyleBackColor = true;
			this->btnWithdraw->Click += gcnew System::EventHandler(this, &frmWithdraw::btnWithdraw_Click);
			// 
			// lblBalanceDisplay
			// 
			this->lblBalanceDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblBalanceDisplay->Location = System::Drawing::Point(794, 170);
			this->lblBalanceDisplay->Name = L"lblBalanceDisplay";
			this->lblBalanceDisplay->Size = System::Drawing::Size(210, 63);
			this->lblBalanceDisplay->TabIndex = 11;
			this->lblBalanceDisplay->Text = L"label4";
			// 
			// lblFeeAmount
			// 
			this->lblFeeAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFeeAmount->Location = System::Drawing::Point(34, 884);
			this->lblFeeAmount->Name = L"lblFeeAmount";
			this->lblFeeAmount->Size = System::Drawing::Size(167, 45);
			this->lblFeeAmount->TabIndex = 12;
			this->lblFeeAmount->Text = L"label4";
			// 
			// frmWithdraw
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1056, 1008);
			this->Controls->Add(this->lblFeeAmount);
			this->Controls->Add(this->lblBalanceDisplay);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnWithdraw);
			this->Controls->Add(this->txtAmount);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel1);
			this->Name = L"frmWithdraw";
			this->Text = L"frmWithdraw";
			this->Load += gcnew System::EventHandler(this, &frmWithdraw::frmWithdraw_Load);
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
	private: System::Void frmWithdraw_Load(System::Object^ sender, System::EventArgs^ e)
	{
		/*MessageBox::Show("User received: " + loggedInUser->getFirstname() + " " + loggedInUser->getSurname(),
		"Debug - User Found", MessageBoxButtons::OK, MessageBoxIcon::Information);*/

		UpdateBalanceDisplay();
	}

		   void UpdateBalanceDisplay()
		   {
			   if (loggedInUser != nullptr)
			   {
				   lblBalanceDisplay->Text = "R " + loggedInUser->getBalance().ToString("F2");
			   }
			   else
			   {
				   lblBalanceDisplay->Text = "R 0.00";
			   }
		   }

		   void LoadAccountTypes()
		   {
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

		   void LoadWithdrawMethods()
		   {
			   rdbATM->Checked = true;
			   UpdateFee();
		   }

		   void UpdateFee()
		   {
			   double fee = 0;
			   if (rdbATM->Checked)
				   fee = 5.00;
			   else if (rdbCashier->Checked)
				   fee = 15.00;
			   else if (rdbEFT->Checked)
				   fee = 10.00;

			   lblFeeAmount->Text = "R " + fee.ToString("F2");
		   }

		   double GetFee()
		   {
			   if (rdbATM->Checked) return 5.00;
			   if (rdbCashier->Checked) return 15.00;
			   if (rdbEFT->Checked) return 10.00;
			   return 0;
		   }

		   String^ GetSelectedAccount()
		   {
			   if (rdbChequeAccount->Checked) return "Cheque Account";
			   if (rdbSavingsAccount->Checked) return "Savings Account";
			   if (rdbCurrentAccount->Checked) return "Current Account";
			   return "Unknown";
		   }

		   String^ GetWithdrawMethod()
		   {
			   if (rdbATM->Checked) return "ATM Withdrawal";
			   if (rdbCashier->Checked) return "Cashier / Branch";
			   if (rdbEFT->Checked) return "EFT Transfer";
			   return "Unknown";
		   }
	private: System::Void rdbATM_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		//if (rdbATM->Checked) UpdateFee();
	}
	private: System::Void rdbCashier_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		//if (rdbCashier->Checked) UpdateFee();
	}
	private: System::Void rdbEFT_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		//if (rdbEFT->Checked) UpdateFee();
	}


	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to cancel the withdrawal?",
			"Cancel Withdrawal", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			this->Close();
		}
	}
	private: System::Void btnWithdraw_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Validate amount
		if (txtAmount->Text == "")
		{
			MessageBox::Show("Please enter an amount to withdraw!",
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

		if (amount < 20)
		{
			MessageBox::Show("Minimum withdrawal amount is R20.00!",
				"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (amount > 5000)
		{
			MessageBox::Show("Maximum withdrawal amount per transaction is R5000.00!\nFor larger amounts, please visit a branch.",
				"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		double fee = GetFee();
		double totalAmount = amount + fee;

		// Check sufficient balance (including fee)
		if (loggedInUser != nullptr && loggedInUser->getBalance() < totalAmount)
		{
			MessageBox::Show("Insufficient balance!\n\n" +
				"Withdrawal Amount: R" + amount.ToString("F2") + "\n" +
				"Fee: R" + fee.ToString("F2") + "\n" +
				"Total Required: R" + totalAmount.ToString("F2") + "\n" +
				"Available Balance: R" + loggedInUser->getBalance().ToString("F2"),
				"Insufficient Funds", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Check daily limit
		if (loggedInUser != nullptr && amount > loggedInUser->getLimit())
		{
			MessageBox::Show("Amount exceeds your daily withdrawal limit!\n\n" +
				"Daily Limit: R" + loggedInUser->getLimit().ToString("F2"),
				"Limit Exceeded", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Confirm withdrawal
		System::Windows::Forms::DialogResult result = MessageBox::Show("Confirm withdrawal?\n\n" +
			"Account: " + GetSelectedAccount() + "\n" +
			"Amount: R" + amount.ToString("F2") + "\n" +
			"Method: " + GetWithdrawMethod() + "\n" +
			"Fee: R" + fee.ToString("F2") + "\n" +
			"Total Deduction: R" + totalAmount.ToString("F2") + "\n\n" +
			"Current Balance: R" + loggedInUser->getBalance().ToString("F2"),
			"Confirm Withdrawal", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes && loggedInUser != nullptr)
		{
			// Deduct amount + fee from balance
			double newBalance = loggedInUser->getBalance() - totalAmount;
			loggedInUser->setBalance(newBalance);

			// Generate transaction reference
			Random^ rand = gcnew Random();
			String^ transactionRef = rand->Next(100000, 999999).ToString();

			// CREATE MESSAGE FOR WITHDRAWAL
			String^ message = DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss") + " - " +
				"WITHDRAWAL: R" + amount.ToString("F2") + " from " + GetSelectedAccount() + "\n\n" +
				"        Method: " + GetWithdrawMethod() + " | Fee: R" + fee.ToString("F2") + "\n\n" +
				"        Reference: " + transactionRef + " | New Balance: R" + newBalance.ToString("F2");
			frmMessage::AddGlobalMessage(message);


			// OR Option 2: Just store the message without opening the form
			// You'll need to implement a static list or file storage

			// Update balance display
			UpdateBalanceDisplay();

			// Show success message
			MessageBox::Show("Withdrawal successful!\n\n" +
				"Account: " + GetSelectedAccount() + "\n" +
				"Amount: R" + amount.ToString("F2") + "\n" +
				"Method: " + GetWithdrawMethod() + "\n" +
				"Fee: R" + fee.ToString("F2") + "\n" +
				"Total Deducted: R" + totalAmount.ToString("F2") + "\n" +
				"New Balance: R" + newBalance.ToString("F2") + "\n\n" +
				"Transaction Reference: " + transactionRef,
				"Withdrawal Successful", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Clear form
			txtAmount->Clear();
		}
	}
	private: System::Void rdbATM_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (rdbATM->Checked) UpdateFee();
	}
	private: System::Void rdbCashier_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (rdbCashier->Checked) UpdateFee();
	}
	private: System::Void rdbEFT_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (rdbEFT->Checked) UpdateFee();
	}
};
}

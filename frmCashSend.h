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
	/// Summary for frmCashSend
	/// </summary>
	public ref class frmCashSend : public System::Windows::Forms::Form
	{
	public:
		frmCashSend(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		// Constructor that accepts User object
		frmCashSend(Syntax_Squad_Banking^ user)
		{
			InitializeComponent();
			loggedInUser = user;
			UpdateBalanceDisplay();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmCashSend()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ pnlMainAccount;
	private: System::Windows::Forms::Label^ lblBalance;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ mtxtSecretCode;
	private: System::Windows::Forms::TextBox^ txtAmount;


	private: System::Windows::Forms::Button^ btnSend;
	protected:

	private:
		Syntax_Squad_Banking^ loggedInUser;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmCashSend::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->mtxtSecretCode = (gcnew System::Windows::Forms::TextBox());
			this->txtAmount = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pnlMainAccount = (gcnew System::Windows::Forms::Panel());
			this->lblBalance = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnSend = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->pnlMainAccount->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(36, 38);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(971, 94);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(408, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Send Cash";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->panel2->Controls->Add(this->mtxtSecretCode);
			this->panel2->Controls->Add(this->txtAmount);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(38, 449);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(969, 314);
			this->panel2->TabIndex = 0;
			// 
			// mtxtSecretCode
			// 
			this->mtxtSecretCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mtxtSecretCode->Location = System::Drawing::Point(57, 229);
			this->mtxtSecretCode->Name = L"mtxtSecretCode";
			this->mtxtSecretCode->Size = System::Drawing::Size(473, 30);
			this->mtxtSecretCode->TabIndex = 11;
			// 
			// txtAmount
			// 
			this->txtAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAmount->Location = System::Drawing::Point(57, 98);
			this->txtAmount->Name = L"txtAmount";
			this->txtAmount->Size = System::Drawing::Size(473, 30);
			this->txtAmount->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(52, 158);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(285, 25);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Create 4 - digit secrete code";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(52, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(228, 25);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Amount(R40 - R3 000)";
			// 
			// pnlMainAccount
			// 
			this->pnlMainAccount->Controls->Add(this->lblBalance);
			this->pnlMainAccount->Controls->Add(this->label10);
			this->pnlMainAccount->Controls->Add(this->label7);
			this->pnlMainAccount->Controls->Add(this->label8);
			this->pnlMainAccount->Location = System::Drawing::Point(36, 239);
			this->pnlMainAccount->Name = L"pnlMainAccount";
			this->pnlMainAccount->Size = System::Drawing::Size(971, 114);
			this->pnlMainAccount->TabIndex = 9;
			// 
			// lblBalance
			// 
			this->lblBalance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBalance->Location = System::Drawing::Point(696, 36);
			this->lblBalance->Name = L"lblBalance";
			this->lblBalance->Size = System::Drawing::Size(203, 47);
			this->lblBalance->TabIndex = 11;
			this->lblBalance->Text = L"R0,00";
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(228, 66);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(125, 29);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Available Balance";
			// 
			// label7
			// 
			this->label7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label7.Image")));
			this->label7->Location = System::Drawing::Point(27, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(125, 91);
			this->label7->TabIndex = 9;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label8->Location = System::Drawing::Point(228, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(170, 23);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Main Account";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label2->Location = System::Drawing::Point(33, 176);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 25);
			this->label2->TabIndex = 10;
			this->label2->Text = L"From";
			// 
			// btnSend
			// 
			this->btnSend->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSend->ForeColor = System::Drawing::SystemColors::Highlight;
			this->btnSend->Location = System::Drawing::Point(840, 851);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(167, 69);
			this->btnSend->TabIndex = 14;
			this->btnSend->Text = L"Send";
			this->btnSend->UseVisualStyleBackColor = true;
			this->btnSend->Click += gcnew System::EventHandler(this, &frmCashSend::btnSend_Click);
			// 
			// frmCashSend
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1066, 1034);
			this->Controls->Add(this->btnSend);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pnlMainAccount);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"frmCashSend";
			this->Text = L"frmCashSend";
			this->Load += gcnew System::EventHandler(this, &frmCashSend::frmCashSend_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->pnlMainAccount->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmCashSend_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		UpdateBalanceDisplay();
	}

		   void UpdateBalanceDisplay()
		   {
			   if (loggedInUser != nullptr)
			   {
				   lblBalance->Text = "R " + loggedInUser->getBalance().ToString("F2");
			   }
			   else
			   {
				   lblBalance->Text = "R 0.00";
			   }
		   }

		   String^ GenerateTransactionReference()
		   {
			   Random^ rand = gcnew Random();
			   return rand->Next(100000, 999999).ToString();
		   }


	private: System::Void btnSend_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Validate amount
		if (txtAmount->Text == "")
		{
			MessageBox::Show("Please enter an amount!",
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

		// Validate amount range (R40 - R3000)
		if (amount < 40)
		{
			MessageBox::Show("Minimum send amount is R40.00!",
				"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (amount > 3000)
		{
			MessageBox::Show("Maximum send amount is R3000.00!",
				"Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Validate secret code
		String^ secretCode = mtxtSecretCode->Text;
		if (secretCode->Length != 4)
		{
			MessageBox::Show("Please enter a valid 4-digit secret code!",
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

		// Check sufficient balance
		if (loggedInUser->getBalance() < amount)
		{
			MessageBox::Show("Insufficient balance!\n\n" +
				"Available: R" + loggedInUser->getBalance().ToString("F2") + "\n" +
				"Required: R" + amount.ToString("F2"),
				"Insufficient Funds", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Check daily limit
		if (amount > loggedInUser->getLimit())
		{
			MessageBox::Show("Amount exceeds your daily limit!\n\n" +
				"Daily Limit: R" + loggedInUser->getLimit().ToString("F2"),
				"Limit Exceeded", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		
		// Confirm transaction
		System::Windows::Forms::DialogResult result = MessageBox::Show("Confirm cash send?\n\n" +
			"From: Main Account\n" +
			"Amount: R" + amount.ToString("F2") + "\n" +
			"Secret Code: " + secretCode + "\n\n" +
			"The receiver will need this secret code to withdraw the cash.\n\n" +
			"Current Balance: R" + loggedInUser->getBalance().ToString("F2"),
			"Confirm Transaction", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			// Deduct amount from balance
			double newBalance = loggedInUser->getBalance() - amount;
			loggedInUser->setBalance(newBalance);

			// Generate transaction reference
			String^ reference = GenerateTransactionReference();

			// Update balance display
			UpdateBalanceDisplay();

			// ============================================
  // PUT THE MESSAGE CODE HERE
  // ============================================
			String^ message = DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss") + " - " +
				"CASH SEND: R" + amount.ToString("F2") + " sent\n\n" +
				"        Secret Code: " + secretCode + " | Reference: " + reference + "\n\n" +
				"        New Balance: R" + newBalance.ToString("F2");

			frmMessage::AddGlobalMessage(message);

			// Show success message with transaction details
			MessageBox::Show("Cash send successful!\n\n" +
				"Amount Sent: R" + amount.ToString("F2") + "\n" +
				"Secret Code: " + secretCode + "\n" +
				"Transaction Reference: " + reference + "\n\n" +
				"New Balance: R" + newBalance.ToString("F2") + "\n\n" +
				"Share the secret code with the receiver to withdraw the cash.",
				"Transaction Successful", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Clear form
			txtAmount->Clear();
			mtxtSecretCode->Clear();

			// Refresh balance display
			UpdateBalanceDisplay();
		}
	}
};
}

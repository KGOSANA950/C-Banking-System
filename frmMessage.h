#pragma once
#include "Syntax_Squad_Banking.h"

namespace Syntaxsquad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for frmMessage
	/// </summary>
	public ref class frmMessage : public System::Windows::Forms::Form
	{
	public:
		//frmMessage(void)
		//{
		//	InitializeComponent();
		//	//
		//	//TODO: Add the constructor code here
		//	//
		//	messages = gcnew List<String^>();
		//}

		//// Constructor that accepts User object
		//frmMessage(Syntax_Squad_Banking^ user)
		//{
		//	InitializeComponent();
		//	loggedInUser = user;
		//	messages = gcnew List<String^>();
		//	LoadMessages();
		//}

		//// Method to add a message from other forms
		//void AddMessage(String^ message)
		//{
		//	if (messages != nullptr)
		//	{
		//		messages->Add(message);
		//		RefreshMessageList();
		//	}
		//}

				// Static global messages list (shared across all forms)
		static List<String^>^ globalMessages;

		// Static method to add message from anywhere
		static void AddGlobalMessage(String^ message)
		{
			if (globalMessages == nullptr)
				globalMessages = gcnew List<String^>();

			globalMessages->Add(message);
		}

		static List<String^>^ GetGlobalMessages()
		{
			if (globalMessages == nullptr)
				globalMessages = gcnew List<String^>();
			return globalMessages;
		}

		static void ClearGlobalMessages()
		{
			if (globalMessages != nullptr)
				globalMessages->Clear();
		}

		frmMessage(void)
		{
			InitializeComponent();

			if (globalMessages == nullptr)
				globalMessages = gcnew List<String^>();

			messages = globalMessages;
		}

		// Constructor that accepts User object
		frmMessage(Syntax_Squad_Banking^ user)
		{
			InitializeComponent();
			loggedInUser = user;

			if (globalMessages == nullptr)
				globalMessages = gcnew List<String^>();

			messages = globalMessages;
			LoadMessages();
		}

		// Method to add a message from other forms (instance method)
		void AddMessage(String^ message)
		{
			if (messages != nullptr)
			{
				messages->Add(message);
				RefreshMessageList();
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmMessage()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::ListBox^ lstMessages;
private: System::Windows::Forms::Button^ btnClear;


	private:
		Syntax_Squad_Banking^ loggedInUser;
		List<String^>^ messages;
	private: System::Windows::Forms::Label^ lblMessageCount;
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
			this->lstMessages = (gcnew System::Windows::Forms::ListBox());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->lblMessageCount = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lstMessages
			// 
			this->lstMessages->FormattingEnabled = true;
			this->lstMessages->ItemHeight = 16;
			this->lstMessages->Location = System::Drawing::Point(49, 93);
			this->lstMessages->Name = L"lstMessages";
			this->lstMessages->Size = System::Drawing::Size(955, 580);
			this->lstMessages->TabIndex = 7;
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btnClear->Location = System::Drawing::Point(840, 846);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(164, 55);
			this->btnClear->TabIndex = 8;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &frmMessage::btnClear_Click);
			// 
			// lblMessageCount
			// 
			this->lblMessageCount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMessageCount->Location = System::Drawing::Point(46, 873);
			this->lblMessageCount->Name = L"lblMessageCount";
			this->lblMessageCount->Size = System::Drawing::Size(169, 57);
			this->lblMessageCount->TabIndex = 9;
			this->lblMessageCount->Text = L"lblMessageCount";
			// 
			// frmMessage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1072, 988);
			this->Controls->Add(this->lblMessageCount);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->lstMessages);
			this->Name = L"frmMessage";
			this->Text = L"frmMessage";
			this->Load += gcnew System::EventHandler(this, &frmMessage::frmMessage_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmMessage_Load(System::Object^ sender, System::EventArgs^ e)
	{
		RefreshMessageList();
	}

	void RefreshMessageList()
	{
		lstMessages->Items->Clear();

		if (messages != nullptr && messages->Count > 0)
		{
			// Show newest messages first (reverse order)
			for (int i = messages->Count - 1; i >= 0; i--)
			{
				lstMessages->Items->Add(messages[i]);
			}
			lblMessageCount->Text = "Total messages: " + messages->Count;
		}
		else
		{
			lstMessages->Items->Add("No messages to display.");
			lblMessageCount->Text = "Total messages: 0";
		}
	}

	void LoadMessages()
	{
		// Load any existing messages from file if needed
		RefreshMessageList();
	}

	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to clear all messages?",
			"Clear Messages", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			ClearGlobalMessages();  // Clear static list
			messages->Clear();
			RefreshMessageList();
		}
	}
};
}
// Initialize static member
//List<String^>^ Syntaxsquad::frmMessage::globalMessages = nullptr;

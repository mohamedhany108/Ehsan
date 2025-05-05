#pragma once

namespace Ehsan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddingStatus
	/// </summary>
	public ref class AddingStatus : public System::Windows::Forms::Form
	{
	public:
		AddingStatus(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddingStatus()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ enterFristNameTextBox;
	protected:

	private: System::Windows::Forms::Label^ enterFristNameLabel;
	private: System::Windows::Forms::Label^ enterLastNameLabel;
	private: System::Windows::Forms::TextBox^ enterLastNameTextBox;

	protected:

	protected:

	private:
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
			this->enterFristNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->enterFristNameLabel = (gcnew System::Windows::Forms::Label());
			this->enterLastNameLabel = (gcnew System::Windows::Forms::Label());
			this->enterLastNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// enterFristNameTextBox
			// 
			this->enterFristNameTextBox->AcceptsReturn = true;
			this->enterFristNameTextBox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->enterFristNameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->enterFristNameTextBox->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->enterFristNameTextBox->Location = System::Drawing::Point(250, 46);
			this->enterFristNameTextBox->Name = L"enterFristNameTextBox";
			this->enterFristNameTextBox->Size = System::Drawing::Size(257, 35);
			this->enterFristNameTextBox->TabIndex = 0;
			this->enterFristNameTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// enterFristNameLabel
			// 
			this->enterFristNameLabel->AutoSize = true;
			this->enterFristNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->enterFristNameLabel->Location = System::Drawing::Point(525, 46);
			this->enterFristNameLabel->Name = L"enterFristNameLabel";
			this->enterFristNameLabel->Size = System::Drawing::Size(107, 29);
			this->enterFristNameLabel->TabIndex = 1;
			this->enterFristNameLabel->Text = L"الاسم الاول";
			this->enterFristNameLabel->Click += gcnew System::EventHandler(this, &AddingStatus::label1_Click);
			// 
			// enterLastNameLabel
			// 
			this->enterLastNameLabel->AutoSize = true;
			this->enterLastNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->enterLastNameLabel->Location = System::Drawing::Point(525, 87);
			this->enterLastNameLabel->Name = L"enterLastNameLabel";
			this->enterLastNameLabel->Size = System::Drawing::Size(110, 29);
			this->enterLastNameLabel->TabIndex = 3;
			this->enterLastNameLabel->Text = L"الاسم الاخر";
			// 
			// enterLastNameTextBox
			// 
			this->enterLastNameTextBox->AcceptsReturn = true;
			this->enterLastNameTextBox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->enterLastNameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->enterLastNameTextBox->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->enterLastNameTextBox->Location = System::Drawing::Point(250, 87);
			this->enterLastNameTextBox->Name = L"enterLastNameTextBox";
			this->enterLastNameTextBox->Size = System::Drawing::Size(257, 35);
			this->enterLastNameTextBox->TabIndex = 2;
			this->enterLastNameTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// AddingStatus
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(644, 604);
			this->Controls->Add(this->enterLastNameLabel);
			this->Controls->Add(this->enterLastNameTextBox);
			this->Controls->Add(this->enterFristNameLabel);
			this->Controls->Add(this->enterFristNameTextBox);
			this->Name = L"AddingStatus";
			this->Text = L"Adding Status";
			this->TransparencyKey = System::Drawing::Color::White;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

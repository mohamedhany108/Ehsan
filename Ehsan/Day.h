#pragma once

#ifndef MAINFORM_H
#define MAINFORM_H

#include "MainForm.h"

#endif


namespace Ehsan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Day
	/// </summary>
	public ref class Day : public System::Windows::Forms::Form
	{
	public:
		Day(void)
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
		~Day()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ seasonalAidPanel;
	protected:

	private: System::Windows::Forms::Label^ seasonalAidLabel;
	private: System::Windows::Forms::Label^ specialAssistanceButton;
	private: System::Windows::Forms::Panel^ specialAssistancePanal;
	private: System::Windows::Forms::Button^ HomeBut;




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
			this->seasonalAidPanel = (gcnew System::Windows::Forms::Panel());
			this->seasonalAidLabel = (gcnew System::Windows::Forms::Label());
			this->specialAssistanceButton = (gcnew System::Windows::Forms::Label());
			this->specialAssistancePanal = (gcnew System::Windows::Forms::Panel());
			this->HomeBut = (gcnew System::Windows::Forms::Button());
			this->seasonalAidPanel->SuspendLayout();
			this->specialAssistancePanal->SuspendLayout();
			this->SuspendLayout();
			// 
			// seasonalAidPanel
			// 
			this->seasonalAidPanel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->seasonalAidPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->seasonalAidPanel->Controls->Add(this->seasonalAidLabel);
			this->seasonalAidPanel->Cursor = System::Windows::Forms::Cursors::Default;
			this->seasonalAidPanel->Location = System::Drawing::Point(16, 13);
			this->seasonalAidPanel->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->seasonalAidPanel->Name = L"seasonalAidPanel";
			this->seasonalAidPanel->Size = System::Drawing::Size(825, 283);
			this->seasonalAidPanel->TabIndex = 0;
			this->seasonalAidPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Day::panel1_Paint);
			// 
			// seasonalAidLabel
			// 
			this->seasonalAidLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->seasonalAidLabel->AutoSize = true;
			this->seasonalAidLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seasonalAidLabel->ForeColor = System::Drawing::Color::Black;
			this->seasonalAidLabel->Location = System::Drawing::Point(276, 0);
			this->seasonalAidLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->seasonalAidLabel->Name = L"seasonalAidLabel";
			this->seasonalAidLabel->Size = System::Drawing::Size(225, 37);
			this->seasonalAidLabel->TabIndex = 0;
			this->seasonalAidLabel->Text = L"مساعدات المواسم ";
			this->seasonalAidLabel->Click += gcnew System::EventHandler(this, &Day::label1_Click);
			// 
			// specialAssistanceButton
			// 
			this->specialAssistanceButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->specialAssistanceButton->AutoSize = true;
			this->specialAssistanceButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->specialAssistanceButton->ForeColor = System::Drawing::Color::Black;
			this->specialAssistanceButton->Location = System::Drawing::Point(255, 19);
			this->specialAssistanceButton->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->specialAssistanceButton->Name = L"specialAssistanceButton";
			this->specialAssistanceButton->Size = System::Drawing::Size(241, 37);
			this->specialAssistanceButton->TabIndex = 0;
			this->specialAssistanceButton->Text = L"المساعدات الخاصة ";
			// 
			// specialAssistancePanal
			// 
			this->specialAssistancePanal->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->specialAssistancePanal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->specialAssistancePanal->Controls->Add(this->specialAssistanceButton);
			this->specialAssistancePanal->Cursor = System::Windows::Forms::Cursors::Default;
			this->specialAssistancePanal->Location = System::Drawing::Point(16, 303);
			this->specialAssistancePanal->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->specialAssistancePanal->Name = L"specialAssistancePanal";
			this->specialAssistancePanal->Size = System::Drawing::Size(825, 279);
			this->specialAssistancePanal->TabIndex = 1;
			// 
			// HomeBut
			// 
			this->HomeBut->BackColor = System::Drawing::SystemColors::Highlight;
			this->HomeBut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HomeBut->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->HomeBut->Location = System::Drawing::Point(16, 733);
			this->HomeBut->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->HomeBut->Name = L"HomeBut";
			this->HomeBut->Size = System::Drawing::Size(123, 39);
			this->HomeBut->TabIndex = 2;
			this->HomeBut->Text = L"Home";
			this->HomeBut->UseVisualStyleBackColor = false;
			this->HomeBut->Click += gcnew System::EventHandler(this, &Day::Home_But_Click);
			// 
			// Day
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(1284, 785);
			this->Controls->Add(this->HomeBut);
			this->Controls->Add(this->specialAssistancePanal);
			this->Controls->Add(this->seasonalAidPanel);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Font = (gcnew System::Drawing::Font(L"Elephant", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximizeBox = false;
			this->Name = L"Day";
			this->Text = L"Day";
			this->Load += gcnew System::EventHandler(this, &Day::Day_Load);
			this->seasonalAidPanel->ResumeLayout(false);
			this->seasonalAidPanel->PerformLayout();
			this->specialAssistancePanal->ResumeLayout(false);
			this->specialAssistancePanal->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Day_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Home_But_Click(System::Object^ sender, System::EventArgs^ e) {
		MainForm^ home = gcnew MainForm();
		this->Close();  // إغلاق الفورم الحالي
		home->Show();   // عرض الفورم الجديد
	};
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}

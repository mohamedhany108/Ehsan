  // ربط ملف Day
#pragma once

#ifndef MAINFORM_H
#define MAINFORM_H
#include "Day.h"

#endif


namespace Ehsan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ showDayButt;
	private: System::Windows::Forms::Button^ addStatusButt;
	private: System::Windows::Forms::Button^ editStatusButt;

	private: System::Windows::Forms::Button^ deleteStatusButt;
	private: System::Windows::Forms::Button^ deleteAssestButt;

	private: System::Windows::Forms::Button^ editAssestButt;

	private: System::Windows::Forms::Button^ addAssestButt;
	private: System::Windows::Forms::Button^ searchButt;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->searchButt = (gcnew System::Windows::Forms::Button());
			this->deleteAssestButt = (gcnew System::Windows::Forms::Button());
			this->editAssestButt = (gcnew System::Windows::Forms::Button());
			this->addAssestButt = (gcnew System::Windows::Forms::Button());
			this->editStatusButt = (gcnew System::Windows::Forms::Button());
			this->deleteStatusButt = (gcnew System::Windows::Forms::Button());
			this->addStatusButt = (gcnew System::Windows::Forms::Button());
			this->showDayButt = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(16, 258);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(976, 459);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->searchButt);
			this->panel1->Controls->Add(this->deleteAssestButt);
			this->panel1->Controls->Add(this->editAssestButt);
			this->panel1->Controls->Add(this->addAssestButt);
			this->panel1->Controls->Add(this->editStatusButt);
			this->panel1->Controls->Add(this->deleteStatusButt);
			this->panel1->Controls->Add(this->addStatusButt);
			this->panel1->Controls->Add(this->showDayButt);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(980, 106);
			this->panel1->TabIndex = 1;
			// 
			// searchButt
			// 
			this->searchButt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchButt->Location = System::Drawing::Point(861, 4);
			this->searchButt->Name = L"searchButt";
			this->searchButt->Size = System::Drawing::Size(116, 39);
			this->searchButt->TabIndex = 7;
			this->searchButt->Text = L"البحث";
			this->searchButt->UseVisualStyleBackColor = true;
			// 
			// deleteAssestButt
			// 
			this->deleteAssestButt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteAssestButt->Location = System::Drawing::Point(739, 3);
			this->deleteAssestButt->Name = L"deleteAssestButt";
			this->deleteAssestButt->Size = System::Drawing::Size(116, 39);
			this->deleteAssestButt->TabIndex = 6;
			this->deleteAssestButt->Text = L" حذف مساعدة";
			this->deleteAssestButt->UseVisualStyleBackColor = true;
			// 
			// editAssestButt
			// 
			this->editAssestButt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editAssestButt->Location = System::Drawing::Point(617, 4);
			this->editAssestButt->Name = L"editAssestButt";
			this->editAssestButt->Size = System::Drawing::Size(116, 39);
			this->editAssestButt->TabIndex = 5;
			this->editAssestButt->Text = L"تعديل مساعدة";
			this->editAssestButt->UseVisualStyleBackColor = true;
			// 
			// addAssestButt
			// 
			this->addAssestButt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addAssestButt->Location = System::Drawing::Point(495, 4);
			this->addAssestButt->Name = L"addAssestButt";
			this->addAssestButt->Size = System::Drawing::Size(116, 39);
			this->addAssestButt->TabIndex = 4;
			this->addAssestButt->Text = L"إضافة مساعدة";
			this->addAssestButt->UseVisualStyleBackColor = true;
			this->addAssestButt->Click += gcnew System::EventHandler(this, &MainForm::addAssestButt_Click);
			// 
			// editStatusButt
			// 
			this->editStatusButt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editStatusButt->Location = System::Drawing::Point(373, 3);
			this->editStatusButt->Name = L"editStatusButt";
			this->editStatusButt->Size = System::Drawing::Size(116, 39);
			this->editStatusButt->TabIndex = 3;
			this->editStatusButt->Text = L" تعديل حالة";
			this->editStatusButt->UseVisualStyleBackColor = true;
			// 
			// deleteStatusButt
			// 
			this->deleteStatusButt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteStatusButt->Location = System::Drawing::Point(251, 4);
			this->deleteStatusButt->Name = L"deleteStatusButt";
			this->deleteStatusButt->Size = System::Drawing::Size(116, 39);
			this->deleteStatusButt->TabIndex = 2;
			this->deleteStatusButt->Text = L"حذف حالة";
			this->deleteStatusButt->UseVisualStyleBackColor = true;
			this->deleteStatusButt->Click += gcnew System::EventHandler(this, &MainForm::deleteStatusButt_Click);
			// 
			// addStatusButt
			// 
			this->addStatusButt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addStatusButt->Location = System::Drawing::Point(129, 4);
			this->addStatusButt->Name = L"addStatusButt";
			this->addStatusButt->Size = System::Drawing::Size(116, 39);
			this->addStatusButt->TabIndex = 1;
			this->addStatusButt->Text = L" إضافة حالة";
			this->addStatusButt->UseVisualStyleBackColor = true;
			// 
			// showDayButt
			// 
			this->showDayButt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->showDayButt->Location = System::Drawing::Point(7, 4);
			this->showDayButt->Name = L"showDayButt";
			this->showDayButt->Size = System::Drawing::Size(116, 39);
			this->showDayButt->TabIndex = 0;
			this->showDayButt->Text = L" عرض اليوم";
			this->showDayButt->UseVisualStyleBackColor = true;
			this->showDayButt->Click += gcnew System::EventHandler(this, &MainForm::showDayButt_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(1004, 729);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"Home";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void deleteStatusButt_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void addAssestButt_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void deleteAssestButt_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	
	private: System::Void showDayButt_Click(System::Object^ sender, System::EventArgs^ e) {
		Day^ dayForm = gcnew Day();
		this->Hide();  // إخفاء الفورم الحالي
		dayForm->ShowDialog();  // عرض نافذة Day
	}

};
}

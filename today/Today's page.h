#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label8;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;



	private: System::Windows::Forms::ComboBox^ Ï·«·«·«;

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
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Ï·«·«·« = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label8->Location = System::Drawing::Point(676, 68);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 21);
			this->label8->TabIndex = 20;
			this->label8->Text = L"«·„Ê«”„";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Highlight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(203, 9);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(426, 46);
			this->label2->TabIndex = 18;
			this->label2->Text = L"«·—ÃÊ⁄ ≈·Ï «·’›Õ… «·—∆Ì”ÌÂ";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->panel1->Location = System::Drawing::Point(34, 100);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(722, 160);
			this->panel1->TabIndex = 19;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->checkBox1->Location = System::Drawing::Point(154, 85);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(125, 28);
			this->checkBox1->TabIndex = 17;
			this->checkBox1->Text = L" „ «· ”·Ì„";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label7->Location = System::Drawing::Point(171, 45);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(108, 21);
			this->label7->TabIndex = 16;
			this->label7->Text = L"„Ê⁄œ «· ”·Ì„";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label4->Location = System::Drawing::Point(603, 45);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 21);
			this->label4->TabIndex = 14;
			this->label4->Text = L"‰Ê⁄ «·„”«⁄œ…";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label3->Location = System::Drawing::Point(593, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 21);
			this->label3->TabIndex = 13;
			this->label3->Text = L"ﬁÌ„… «·„”«⁄œ…";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13));
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Location = System::Drawing::Point(519, 117);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(191, 27);
			this->label1->TabIndex = 12;
			this->label1->Text = L"«·Õ«·…: Ã«—Ì «· Ê“Ì⁄";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label6->Location = System::Drawing::Point(621, 13);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 21);
			this->label6->TabIndex = 11;
			this->label6->Text = L"«”„ «·Õ«·…";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->checkBox2);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Cursor = System::Windows::Forms::Cursors::Default;
			this->panel2->Location = System::Drawing::Point(34, 272);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(722, 160);
			this->panel2->TabIndex = 20;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->checkBox2->Location = System::Drawing::Point(154, 85);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(125, 28);
			this->checkBox2->TabIndex = 17;
			this->checkBox2->Text = L" „ «· ”·Ì„";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label5->Location = System::Drawing::Point(171, 45);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 21);
			this->label5->TabIndex = 16;
			this->label5->Text = L"„Ê⁄œ «· ”·Ì„";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label9->Location = System::Drawing::Point(603, 45);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(107, 21);
			this->label9->TabIndex = 14;
			this->label9->Text = L"‰Ê⁄ «·„”«⁄œ…";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label10->Location = System::Drawing::Point(593, 85);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(117, 21);
			this->label10->TabIndex = 13;
			this->label10->Text = L"ﬁÌ„… «·„”«⁄œ…";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 13));
			this->label11->ForeColor = System::Drawing::Color::Crimson;
			this->label11->Location = System::Drawing::Point(519, 118);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(191, 27);
			this->label11->TabIndex = 12;
			this->label11->Text = L"«·Õ«·…: Ã«—Ì «· Ê“Ì⁄";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->label12->Location = System::Drawing::Point(621, 13);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(89, 21);
			this->label12->TabIndex = 11;
			this->label12->Text = L"«”„ «·Õ«·…";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->Ï·«·«·«);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->label15);
			this->panel3->Cursor = System::Windows::Forms::Cursors::Default;
			this->panel3->Location = System::Drawing::Point(34, 454);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(722, 146);
			this->panel3->TabIndex = 21;
			// 
			// Ï·«·«·«
			// 
			this->Ï·«·«·«->DisplayMember = L"«··«·«";
			this->Ï·«·«·«->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->Ï·«·«·«->FormattingEnabled = true;
			this->Ï·«·«·«->Location = System::Drawing::Point(554, 3);
			this->Ï·«·«·«->Name = L"Ï·«·«·«";
			this->Ï·«·«·«->Size = System::Drawing::Size(156, 29);
			this->Ï·«·«·«->TabIndex = 21;
			this->Ï·«·«·«->Text = L"«·„”«⁄œ«  «·œÊ—Ì…";
			this->Ï·«·«·«->ValueMember = L"«·««";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label13->Location = System::Drawing::Point(651, 100);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(59, 23);
			this->label13->TabIndex = 16;
			this->label13->Text = L"€–«∆Ì…";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label14->Location = System::Drawing::Point(653, 35);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(53, 23);
			this->label14->TabIndex = 14;
			this->label14->Text = L"⁄Ì‰ÌÂ";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm1::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 11));
			this->label15->Location = System::Drawing::Point(661, 68);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(49, 23);
			this->label15->TabIndex = 13;
			this->label15->Text = L"„«·ÌÂ";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(778, 686);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

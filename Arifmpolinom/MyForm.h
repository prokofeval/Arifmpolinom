#pragma once
#include "polinom.h"
#include <msclr\marshal_cppstd.h>
namespace Arifmpolinom {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::TextBox^  max_st_textBox;
	private: System::Windows::Forms::TextBox^  n_textBox;




	private: System::Windows::Forms::TextBox^  P_textBox;
	private: System::Windows::Forms::TextBox^  Q_textBox;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  monom1_textBox;
	private: System::Windows::Forms::TextBox^  monom2_textBox;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;



	private: System::Windows::Forms::TextBox^  res_textBox;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::TextBox^  textBox1;



	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->max_st_textBox = (gcnew System::Windows::Forms::TextBox());
			this->n_textBox = (gcnew System::Windows::Forms::TextBox());
			this->P_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Q_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->monom1_textBox = (gcnew System::Windows::Forms::TextBox());
			this->monom2_textBox = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->res_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// toolTip1
			// 
			this->toolTip1->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &MyForm::toolTip1_Popup);
			// 
			// max_st_textBox
			// 
			this->max_st_textBox->Location = System::Drawing::Point(172, 59);
			this->max_st_textBox->Name = L"max_st_textBox";
			this->max_st_textBox->Size = System::Drawing::Size(109, 20);
			this->max_st_textBox->TabIndex = 0;
			this->max_st_textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// n_textBox
			// 
			this->n_textBox->Location = System::Drawing::Point(406, 59);
			this->n_textBox->Name = L"n_textBox";
			this->n_textBox->Size = System::Drawing::Size(100, 20);
			this->n_textBox->TabIndex = 1;
			// 
			// P_textBox
			// 
			this->P_textBox->Location = System::Drawing::Point(91, 129);
			this->P_textBox->Name = L"P_textBox";
			this->P_textBox->ReadOnly = true;
			this->P_textBox->Size = System::Drawing::Size(591, 20);
			this->P_textBox->TabIndex = 4;
			// 
			// Q_textBox
			// 
			this->Q_textBox->Location = System::Drawing::Point(87, 228);
			this->Q_textBox->Name = L"Q_textBox";
			this->Q_textBox->ReadOnly = true;
			this->Q_textBox->Size = System::Drawing::Size(595, 20);
			this->Q_textBox->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"polinom1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(8, 226);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"polinom2";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(87, 173);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 33);
			this->button1->TabIndex = 8;
			this->button1->Text = L"ADD";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(412, 171);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 35);
			this->button2->TabIndex = 9;
			this->button2->Text = L"DEL";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// monom1_textBox
			// 
			this->monom1_textBox->Location = System::Drawing::Point(168, 180);
			this->monom1_textBox->Name = L"monom1_textBox";
			this->monom1_textBox->Size = System::Drawing::Size(219, 20);
			this->monom1_textBox->TabIndex = 10;
			// 
			// monom2_textBox
			// 
			this->monom2_textBox->Location = System::Drawing::Point(493, 180);
			this->monom2_textBox->Name = L"monom2_textBox";
			this->monom2_textBox->Size = System::Drawing::Size(189, 20);
			this->monom2_textBox->TabIndex = 11;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(97, 325);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(65, 38);
			this->button3->TabIndex = 12;
			this->button3->Text = L"+";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(207, 325);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 38);
			this->button4->TabIndex = 13;
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(315, 325);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(59, 38);
			this->button5->TabIndex = 14;
			this->button5->Text = L"*";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// res_textBox
			// 
			this->res_textBox->Location = System::Drawing::Point(87, 386);
			this->res_textBox->Multiline = true;
			this->res_textBox->Name = L"res_textBox";
			this->res_textBox->ReadOnly = true;
			this->res_textBox->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->res_textBox->Size = System::Drawing::Size(754, 40);
			this->res_textBox->TabIndex = 18;
			this->res_textBox->WordWrap = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(26, 386);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 20);
			this->label6->TabIndex = 19;
			this->label6->Text = L"result";
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(87, 254);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 32);
			this->button7->TabIndex = 20;
			this->button7->Text = L"ADD";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(412, 254);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 32);
			this->button8->TabIndex = 21;
			this->button8->Text = L"DEL";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(692, 169);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(60, 31);
			this->button9->TabIndex = 22;
			this->button9->Text = L"*k";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(168, 261);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(219, 20);
			this->textBox2->TabIndex = 23;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(493, 261);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(189, 20);
			this->textBox3->TabIndex = 24;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(769, 180);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(52, 20);
			this->textBox4->TabIndex = 25;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(769, 40);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 54);
			this->button10->TabIndex = 26;
			this->button10->Text = L"clear";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(315, 51);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(85, 34);
			this->button6->TabIndex = 27;
			this->button6->Text = L"n";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click_1);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(87, 51);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(79, 35);
			this->button11->TabIndex = 28;
			this->button11->Text = L"max_st";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click_1);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(692, 253);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(62, 32);
			this->button12->TabIndex = 29;
			this->button12->Text = L"*k";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(769, 261);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(52, 20);
			this->textBox1->TabIndex = 30;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(911, 495);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->res_textBox);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->monom2_textBox);
			this->Controls->Add(this->monom1_textBox);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Q_textBox);
			this->Controls->Add(this->P_textBox);
			this->Controls->Add(this->n_textBox);
			this->Controls->Add(this->max_st_textBox);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			int max_step = -1, n = -1;
			polinom* P;
			polinom* Q;
			polinom* R;
	private: System::Void toolTip1_Popup(System::Object^  sender, System::Windows::Forms::PopupEventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	R = new polinom(P->operator+(*Q));
	res_textBox->Text = msclr::interop::marshal_as<String^>(R->to_string());
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	R = new polinom(P->operator-(*Q));
	res_textBox->Text = msclr::interop::marshal_as<String^>(R->to_string());
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	R = new polinom(P->operator*(*Q));
	res_textBox->Text = msclr::interop::marshal_as<String^>(R->to_string());
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	String^ tmpS = monom1_textBox->Text;
	std::string tmp = msclr::interop::marshal_as<std::string>(tmpS);
	monom* m = new monom(tmp, max_step, n);
	P->add(*m);
	P_textBox->Text = msclr::interop::marshal_as<String^>(P->to_string());
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ tmpS = monom2_textBox->Text;
	std::string tmp = msclr::interop::marshal_as<std::string>(tmpS);
	monom* m = new monom(tmp, max_step, n);
	P->erase(*m);
	P_textBox->Text = msclr::interop::marshal_as<String^>(P->to_string());
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ tmpS = textBox2->Text;
	std::string tmp = msclr::interop::marshal_as<std::string>(tmpS);
	monom* m = new monom(tmp, max_step, n);
	Q->add(*m);
	Q_textBox->Text = msclr::interop::marshal_as<String^>(Q->to_string());
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ tmpS = textBox3->Text;
	std::string tmp = msclr::interop::marshal_as<std::string>(tmpS);
	monom* m = new monom(tmp, max_step, n);
	Q->erase(*m);
	Q_textBox->Text = msclr::interop::marshal_as<String^>(Q->to_string());
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	int k = System::Convert::ToInt32(textBox4->Text);
	R = new polinom(P->operator*(k));
	res_textBox->Text = msclr::interop::marshal_as<String^>(R->to_string());
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	max_st_textBox->ReadOnly = false;
	n_textBox->ReadOnly = false;
	max_st_textBox->Clear();
	n_textBox->Clear();
	n = -1;
	max_step = -1;
	P_textBox->Clear();
	Q_textBox->Clear();
	res_textBox->Clear();
	monom1_textBox->Clear();
	monom2_textBox->Clear();
	textBox2->Clear();
	textBox3->Clear();
	textBox4->Clear();
}

private: System::Void button11_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String^ tmp = max_st_textBox->Text;
	max_step = System::Convert::ToInt32(tmp);
	max_st_textBox->ReadOnly = true;
	if (max_step != -1 && n != -1) {
		P = new polinom("", n, max_step);
		Q = new polinom("", n, max_step);
	}
}
private: System::Void button6_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String^ tmp = n_textBox->Text;
	n = System::Convert::ToInt32(tmp);
	n_textBox->ReadOnly = true;
	if (max_step != -1 && n != -1) {
		P = new polinom("", n, max_step);
		Q = new polinom("", n, max_step);
	}
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	int k = System::Convert::ToInt32(textBox1->Text);
	Q = new polinom(Q->operator*(k));
	res_textBox->Text = msclr::interop::marshal_as<String^>(Q->to_string());
}
};
}

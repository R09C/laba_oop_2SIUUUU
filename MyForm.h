#pragma once
#include "SegementInPlane.h"
#include "Wrapper.h"
#include <string>
#include <iostream>
#include <msclr\marshal_cppstd.h>
namespace Project16 {
	 
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace msclr::interop;
	using namespace System::Windows::Forms;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		Wrapper saveClass;
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkOrange;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(106, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 100);
			this->button1->TabIndex = 0;
			this->button1->Text = L"создание ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Silver;
			this->textBox1->Location = System::Drawing::Point(21, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(60, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"11";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(216, 26);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(534, 100);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Silver;
			this->textBox3->Location = System::Drawing::Point(21, 155);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(60, 20);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"13";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkOrange;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(106, 152);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 100);
			this->button2->TabIndex = 4;
			this->button2->Text = L"добавить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(216, 152);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(534, 100);
			this->textBox4->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Silver;
			this->textBox5->Location = System::Drawing::Point(21, 280);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(60, 20);
			this->textBox5->TabIndex = 6;
			this->textBox5->Text = L"2";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(216, 280);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(534, 100);
			this->textBox6->TabIndex = 7;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkOrange;
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(106, 280);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 88);
			this->button3->TabIndex = 8;
			this->button3->Text = L"удаление ин.";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::Silver;
			this->textBox7->Location = System::Drawing::Point(21, 403);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(60, 20);
			this->textBox7->TabIndex = 9;
			this->textBox7->Text = L"13";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkOrange;
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(106, 403);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 100);
			this->button4->TabIndex = 10;
			this->button4->Text = L"удаление эл.";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(216, 403);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(534, 100);
			this->textBox8->TabIndex = 11;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(216, 526);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(534, 100);
			this->textBox9->TabIndex = 12;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DarkOrange;
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(106, 526);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(93, 100);
			this->button5->TabIndex = 13;
			this->button5->Text = L"сортировка";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Brown;
			this->button6->ForeColor = System::Drawing::Color::Snow;
			this->button6->Location = System::Drawing::Point(42, 689);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(670, 82);
			this->button6->TabIndex = 14;
			this->button6->Text = L"ЗАКРЫТЬ";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(762, 861);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: double StrToInt(System::Windows::Forms::TextBox^ textBox) {
		String^ str = textBox->Text;
		int result = 0;
		if (int::TryParse(str, result)) {
			return result;
		}
		throw gcnew System::FormatException("Некорректный формат числа");
	}

	public: String^ DoubleToStr(double value) {
		String^ str = System::Convert::ToString(value);
		return str;
	}

	public: String^ BoolToStr(bool value) {
		String^ str = System::Convert::ToString(value);
		return str;
	}

	public: void UpdateTextBox(TextBox^ textBox, String^ str) {
		textBox->Text = str;
	}



	public:String^ MassivToStr(ObjectMass objectMass){
		String^ str = "";
		int* array = objectMass.getArray();
		for(int i=0; objectMass.getLen()>i;i++)
		{
			String^ elStr = array[i].ToString();
			str += elStr + "  ";
		}
		return str;
	}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	ObjectMass* newClass = new ObjectMass();
	(*newClass).createMassiv(StrToInt(textBox1));
	saveClass.setWrapper(newClass);
	UpdateTextBox(textBox2, MassivToStr(*newClass));
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	ObjectMass* newClass = saveClass.getWrapper();
	(*newClass).updateMassiv(StrToInt(textBox3));
	saveClass.setWrapper(newClass);
	UpdateTextBox(textBox4, MassivToStr(*newClass));
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	ObjectMass* newClass = saveClass.getWrapper();
	(*newClass).deleteByNum(StrToInt(textBox5));
	saveClass.setWrapper(newClass);
	UpdateTextBox(textBox6, MassivToStr(*newClass));
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	ObjectMass* newClass = saveClass.getWrapper();
	(*newClass).deleteByEl(StrToInt(textBox7));
	saveClass.setWrapper(newClass);
	UpdateTextBox(textBox8, MassivToStr(*newClass));
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	ObjectMass* newClass = saveClass.getWrapper();
	(*newClass).sortedMass();
	saveClass.setWrapper(newClass);
	UpdateTextBox(textBox9, MassivToStr(*newClass));
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}

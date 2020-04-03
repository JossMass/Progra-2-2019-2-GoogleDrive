#pragma once
#include "ArrCursos.h"

namespace CalcuPromedio {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FrmPrincipal
	/// </summary>
	public ref class FrmPrincipal : public System::Windows::Forms::Form
	{
	public:
		FrmPrincipal(void)
		{
			InitializeComponent();
			objManejador = new CArrCursos();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	private:
		CArrCursos *objManejador;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FrmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lblCurso1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  txbNota1;
	private: System::Windows::Forms::TextBox^  txbCredito1;
	private: System::Windows::Forms::TextBox^  txbNota2;
	private: System::Windows::Forms::TextBox^  txbCredito2;
	private: System::Windows::Forms::TextBox^  txbNota3;
	private: System::Windows::Forms::TextBox^  txbCredito3;
	private: System::Windows::Forms::TextBox^  txbNota4;
	private: System::Windows::Forms::TextBox^  txbCredito4;
	private: System::Windows::Forms::TextBox^  txbNota5;
	private: System::Windows::Forms::TextBox^  txbCredito5;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  lblNotaPromedio;
	private: System::Windows::Forms::Button^  button1;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblCurso1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txbNota1 = (gcnew System::Windows::Forms::TextBox());
			this->txbCredito1 = (gcnew System::Windows::Forms::TextBox());
			this->txbNota2 = (gcnew System::Windows::Forms::TextBox());
			this->txbCredito2 = (gcnew System::Windows::Forms::TextBox());
			this->txbNota3 = (gcnew System::Windows::Forms::TextBox());
			this->txbCredito3 = (gcnew System::Windows::Forms::TextBox());
			this->txbNota4 = (gcnew System::Windows::Forms::TextBox());
			this->txbCredito4 = (gcnew System::Windows::Forms::TextBox());
			this->txbNota5 = (gcnew System::Windows::Forms::TextBox());
			this->txbCredito5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lblNotaPromedio = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Calculadora Promedios";
			// 
			// lblCurso1
			// 
			this->lblCurso1->AutoSize = true;
			this->lblCurso1->ForeColor = System::Drawing::Color::Black;
			this->lblCurso1->Location = System::Drawing::Point(26, 75);
			this->lblCurso1->Name = L"lblCurso1";
			this->lblCurso1->Size = System::Drawing::Size(43, 13);
			this->lblCurso1->TabIndex = 1;
			this->lblCurso1->Text = L"Curso 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(26, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Curso 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(26, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Curso 3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(26, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Curso 4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(26, 176);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Curso 5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(109, 49);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Nota";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(204, 49);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Credito";
			// 
			// txbNota1
			// 
			this->txbNota1->Location = System::Drawing::Point(89, 68);
			this->txbNota1->Name = L"txbNota1";
			this->txbNota1->Size = System::Drawing::Size(64, 20);
			this->txbNota1->TabIndex = 8;
			// 
			// txbCredito1
			// 
			this->txbCredito1->Location = System::Drawing::Point(191, 68);
			this->txbCredito1->Name = L"txbCredito1";
			this->txbCredito1->Size = System::Drawing::Size(64, 20);
			this->txbCredito1->TabIndex = 9;
			// 
			// txbNota2
			// 
			this->txbNota2->Location = System::Drawing::Point(89, 96);
			this->txbNota2->Name = L"txbNota2";
			this->txbNota2->Size = System::Drawing::Size(64, 20);
			this->txbNota2->TabIndex = 10;
			// 
			// txbCredito2
			// 
			this->txbCredito2->Location = System::Drawing::Point(191, 93);
			this->txbCredito2->Name = L"txbCredito2";
			this->txbCredito2->Size = System::Drawing::Size(64, 20);
			this->txbCredito2->TabIndex = 11;
			// 
			// txbNota3
			// 
			this->txbNota3->Location = System::Drawing::Point(89, 120);
			this->txbNota3->Name = L"txbNota3";
			this->txbNota3->Size = System::Drawing::Size(64, 20);
			this->txbNota3->TabIndex = 12;
			// 
			// txbCredito3
			// 
			this->txbCredito3->Location = System::Drawing::Point(191, 120);
			this->txbCredito3->Name = L"txbCredito3";
			this->txbCredito3->Size = System::Drawing::Size(64, 20);
			this->txbCredito3->TabIndex = 13;
			// 
			// txbNota4
			// 
			this->txbNota4->Location = System::Drawing::Point(89, 144);
			this->txbNota4->Name = L"txbNota4";
			this->txbNota4->Size = System::Drawing::Size(64, 20);
			this->txbNota4->TabIndex = 14;
			// 
			// txbCredito4
			// 
			this->txbCredito4->Location = System::Drawing::Point(191, 143);
			this->txbCredito4->Name = L"txbCredito4";
			this->txbCredito4->Size = System::Drawing::Size(64, 20);
			this->txbCredito4->TabIndex = 15;
			// 
			// txbNota5
			// 
			this->txbNota5->Location = System::Drawing::Point(89, 169);
			this->txbNota5->Name = L"txbNota5";
			this->txbNota5->Size = System::Drawing::Size(64, 20);
			this->txbNota5->TabIndex = 16;
			// 
			// txbCredito5
			// 
			this->txbCredito5->Location = System::Drawing::Point(191, 169);
			this->txbCredito5->Name = L"txbCredito5";
			this->txbCredito5->Size = System::Drawing::Size(64, 20);
			this->txbCredito5->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(60, 259);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(109, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"La nota promedio es: ";
			// 
			// lblNotaPromedio
			// 
			this->lblNotaPromedio->AutoSize = true;
			this->lblNotaPromedio->Location = System::Drawing::Point(187, 259);
			this->lblNotaPromedio->Name = L"lblNotaPromedio";
			this->lblNotaPromedio->Size = System::Drawing::Size(13, 13);
			this->lblNotaPromedio->TabIndex = 19;
			this->lblNotaPromedio->Text = L"0";
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(125, 212);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Calcular";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FrmPrincipal::button1_Click);
			// 
			// FrmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(312, 314);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblNotaPromedio);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txbCredito5);
			this->Controls->Add(this->txbNota5);
			this->Controls->Add(this->txbCredito4);
			this->Controls->Add(this->txbNota4);
			this->Controls->Add(this->txbCredito3);
			this->Controls->Add(this->txbNota3);
			this->Controls->Add(this->txbCredito2);
			this->Controls->Add(this->txbNota2);
			this->Controls->Add(this->txbCredito1);
			this->Controls->Add(this->txbNota1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lblCurso1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::DarkRed;
			this->Name = L"FrmPrincipal";
			this->Text = L"FrmPrincipal";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		CCurso *curso1 = new CCurso(Convert::ToInt32(txbNota1->Text), Convert::ToInt32(txbCredito1->Text));
		CCurso *curso2 = new CCurso(Convert::ToInt32(txbNota2->Text), Convert::ToInt32(txbCredito2->Text));
		CCurso *curso3 = new CCurso(Convert::ToInt32(txbNota3->Text), Convert::ToInt32(txbCredito3->Text));
		CCurso *curso4 = new CCurso(Convert::ToInt32(txbNota4->Text), Convert::ToInt32(txbCredito4->Text));
		CCurso *curso5 = new CCurso(Convert::ToInt32(txbNota5->Text), Convert::ToInt32(txbCredito5->Text));

		objManejador->AgregarCurso(curso1);
		objManejador->AgregarCurso(curso2);
		objManejador->AgregarCurso(curso3);
		objManejador->AgregarCurso(curso4);
		objManejador->AgregarCurso(curso5);

		lblNotaPromedio->Text = "" + objManejador->CalcularPromedio();

	}
};
}

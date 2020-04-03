#pragma once

namespace Calculadora {

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
			//
			//TODO: agregar código de constructor aquí
			//
		}

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
	private: System::Windows::Forms::Label^  lblTitulo;
	private: System::Windows::Forms::TextBox^  txb1;
	private: System::Windows::Forms::TextBox^  txb2;
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btnMas;
	private: System::Windows::Forms::Button^  btnMenos;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btnMultiplicar;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  btnDividir;
	private: System::Windows::Forms::Button^  btnIgual;
	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btnLimpiar;
	protected:

	protected:

	private:
		double num1, num2;
		char simbolo = ' ';
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->txb1 = (gcnew System::Windows::Forms::TextBox());
			this->txb2 = (gcnew System::Windows::Forms::TextBox());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnMas = (gcnew System::Windows::Forms::Button());
			this->btnMenos = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btnMultiplicar = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->btnDividir = (gcnew System::Windows::Forms::Button());
			this->btnIgual = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(61, 23);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(167, 34);
			this->lblTitulo->TabIndex = 0;
			this->lblTitulo->Text = L"Calculadora";
			// 
			// txb1
			// 
			this->txb1->Location = System::Drawing::Point(48, 60);
			this->txb1->Name = L"txb1";
			this->txb1->Size = System::Drawing::Size(202, 20);
			this->txb1->TabIndex = 1;
			// 
			// txb2
			// 
			this->txb2->Location = System::Drawing::Point(48, 86);
			this->txb2->Name = L"txb2";
			this->txb2->Size = System::Drawing::Size(202, 20);
			this->txb2->TabIndex = 2;
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(48, 113);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(46, 36);
			this->btn1->TabIndex = 3;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &FrmPrincipal::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(100, 113);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(46, 36);
			this->btn2->TabIndex = 4;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &FrmPrincipal::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->Location = System::Drawing::Point(152, 112);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(46, 36);
			this->btn3->TabIndex = 5;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &FrmPrincipal::btn3_Click);
			// 
			// btnMas
			// 
			this->btnMas->Location = System::Drawing::Point(204, 112);
			this->btnMas->Name = L"btnMas";
			this->btnMas->Size = System::Drawing::Size(46, 36);
			this->btnMas->TabIndex = 6;
			this->btnMas->Text = L"+";
			this->btnMas->UseVisualStyleBackColor = true;
			this->btnMas->Click += gcnew System::EventHandler(this, &FrmPrincipal::btnMas_Click);
			// 
			// btnMenos
			// 
			this->btnMenos->Location = System::Drawing::Point(204, 154);
			this->btnMenos->Name = L"btnMenos";
			this->btnMenos->Size = System::Drawing::Size(46, 36);
			this->btnMenos->TabIndex = 10;
			this->btnMenos->Text = L"-";
			this->btnMenos->UseVisualStyleBackColor = true;
			this->btnMenos->Click += gcnew System::EventHandler(this, &FrmPrincipal::btnMenos_Click);
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(152, 154);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(46, 36);
			this->btn6->TabIndex = 9;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &FrmPrincipal::btn6_Click);
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(100, 155);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(46, 36);
			this->btn5->TabIndex = 8;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &FrmPrincipal::btn5_Click);
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(48, 155);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(46, 36);
			this->btn4->TabIndex = 7;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &FrmPrincipal::btn4_Click);
			// 
			// btnMultiplicar
			// 
			this->btnMultiplicar->Location = System::Drawing::Point(204, 196);
			this->btnMultiplicar->Name = L"btnMultiplicar";
			this->btnMultiplicar->Size = System::Drawing::Size(46, 36);
			this->btnMultiplicar->TabIndex = 14;
			this->btnMultiplicar->Text = L"x";
			this->btnMultiplicar->UseVisualStyleBackColor = true;
			this->btnMultiplicar->Click += gcnew System::EventHandler(this, &FrmPrincipal::btnMultiplicar_Click);
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(152, 196);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(46, 36);
			this->btn9->TabIndex = 13;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &FrmPrincipal::btn9_Click);
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(100, 197);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(46, 36);
			this->btn8->TabIndex = 12;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &FrmPrincipal::btn8_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(48, 197);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(46, 36);
			this->button12->TabIndex = 11;
			this->button12->Text = L"7";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &FrmPrincipal::button12_Click);
			// 
			// btnDividir
			// 
			this->btnDividir->Location = System::Drawing::Point(204, 238);
			this->btnDividir->Name = L"btnDividir";
			this->btnDividir->Size = System::Drawing::Size(46, 36);
			this->btnDividir->TabIndex = 18;
			this->btnDividir->Text = L"/";
			this->btnDividir->UseVisualStyleBackColor = true;
			this->btnDividir->Click += gcnew System::EventHandler(this, &FrmPrincipal::btnDividir_Click);
			// 
			// btnIgual
			// 
			this->btnIgual->Location = System::Drawing::Point(152, 238);
			this->btnIgual->Name = L"btnIgual";
			this->btnIgual->Size = System::Drawing::Size(46, 36);
			this->btnIgual->TabIndex = 17;
			this->btnIgual->Text = L"=";
			this->btnIgual->UseVisualStyleBackColor = true;
			this->btnIgual->Click += gcnew System::EventHandler(this, &FrmPrincipal::btnIgual_Click);
			// 
			// btn0
			// 
			this->btn0->Location = System::Drawing::Point(100, 239);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(46, 36);
			this->btn0->TabIndex = 16;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &FrmPrincipal::btn0_Click);
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->Location = System::Drawing::Point(48, 239);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(46, 36);
			this->btnLimpiar->TabIndex = 15;
			this->btnLimpiar->Text = L"CE";
			this->btnLimpiar->UseVisualStyleBackColor = true;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &FrmPrincipal::btnLimpiar_Click);
			// 
			// FrmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(306, 293);
			this->Controls->Add(this->btnDividir);
			this->Controls->Add(this->btnIgual);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnLimpiar);
			this->Controls->Add(this->btnMultiplicar);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->btnMenos);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btnMas);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->txb2);
			this->Controls->Add(this->txb1);
			this->Controls->Add(this->lblTitulo);
			this->Name = L"FrmPrincipal";
			this->Text = L"FrmPrincipal";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (simbolo != ' ')txb2->Text += 1;
		else txb1->Text += 1;
	}
private: System::Void btnMas_Click(System::Object^  sender, System::EventArgs^  e) {
	simbolo = '+';
}
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (simbolo != ' ')txb2->Text += 2;
	else txb1->Text += 2;
}
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (simbolo != ' ')txb2->Text += 3;
	else txb1->Text += 3;
}
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (simbolo != ' ')txb2->Text += 4;
	else txb1->Text += 4;
}
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (simbolo != ' ')txb2->Text += 5;
	else txb1->Text += 5;
}
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (simbolo != ' ')txb2->Text += 6;
	else txb1->Text += 6;
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (simbolo != ' ')txb2->Text += 7;
	else txb1->Text += 7;
}
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (simbolo != ' ')txb2->Text += 8;
	else txb1->Text += 8;
}
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (simbolo != ' ')txb2->Text += 9;
	else txb1->Text += 9;
}
private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
	if (simbolo != ' ')txb2->Text += 0;
	else txb1->Text += 0;
}
private: System::Void btnMenos_Click(System::Object^  sender, System::EventArgs^  e) {
	simbolo = '-';
}
private: System::Void btnMultiplicar_Click(System::Object^  sender, System::EventArgs^  e) {
	simbolo = 'x';
}
private: System::Void btnDividir_Click(System::Object^  sender, System::EventArgs^  e) {
	simbolo = '/';
}
private: System::Void btnIgual_Click(System::Object^  sender, System::EventArgs^  e) {
	num1 = Convert::ToDouble(txb1->Text);
	num2 = Convert::ToDouble(txb2->Text);
	txb1->Clear();
	txb2->Clear();

	if (simbolo == '+')num1 += num2;
	if (simbolo == '-')num1 -= num2;
	if (simbolo == 'x')num1 *= num2;
	if (simbolo == '/')num1 /= num2;

	simbolo = ' ';
	txb1->Text = Convert::ToString(num1);

}
private: System::Void btnLimpiar_Click(System::Object^  sender, System::EventArgs^  e) {
	simbolo = ' ';
	num1 = 0;
	num2 = 0;
	txb1->Clear();
	txb2->Clear();

}
};
}

#pragma once
#include "Elipse.h"
#include "ArrFiguras.h"

namespace Figuritas {

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
			objarreglo = new CArrFiguras();
			g = panel1->CreateGraphics();
			pincel = gcnew Pen(Color::DarkViolet, 3);
			brocha = gcnew SolidBrush(Color::Aquamarine);
		}

	private:
		CArrFiguras *objarreglo;
		Graphics ^g;
		Pen ^pincel;
		SolidBrush ^brocha;

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
	private: System::Windows::Forms::GroupBox^  gpbInicial;
	protected:
	private: System::Windows::Forms::ComboBox^  cmbFigura;
	private: System::Windows::Forms::Button^  btnDibujar;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  gpbPosicion;
	private: System::Windows::Forms::TextBox^  txbPosicionY;
	private: System::Windows::Forms::TextBox^  txbPosicionX;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  gpbElipse;
	private: System::Windows::Forms::Label^  lblAreaElipse;
	private: System::Windows::Forms::TextBox^  txbRadio;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  gpbRectangulo;
	private: System::Windows::Forms::TextBox^  txbLado2;
	private: System::Windows::Forms::TextBox^  txbLado1;
	private: System::Windows::Forms::Label^  lblAreaRectangulo;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Panel^  panel1;

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
			this->gpbInicial = (gcnew System::Windows::Forms::GroupBox());
			this->cmbFigura = (gcnew System::Windows::Forms::ComboBox());
			this->btnDibujar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gpbPosicion = (gcnew System::Windows::Forms::GroupBox());
			this->txbPosicionY = (gcnew System::Windows::Forms::TextBox());
			this->txbPosicionX = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->gpbElipse = (gcnew System::Windows::Forms::GroupBox());
			this->lblAreaElipse = (gcnew System::Windows::Forms::Label());
			this->txbRadio = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->gpbRectangulo = (gcnew System::Windows::Forms::GroupBox());
			this->txbLado2 = (gcnew System::Windows::Forms::TextBox());
			this->txbLado1 = (gcnew System::Windows::Forms::TextBox());
			this->lblAreaRectangulo = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->gpbInicial->SuspendLayout();
			this->gpbPosicion->SuspendLayout();
			this->gpbElipse->SuspendLayout();
			this->gpbRectangulo->SuspendLayout();
			this->SuspendLayout();
			// 
			// gpbInicial
			// 
			this->gpbInicial->Controls->Add(this->cmbFigura);
			this->gpbInicial->Controls->Add(this->btnDibujar);
			this->gpbInicial->Controls->Add(this->label1);
			this->gpbInicial->Location = System::Drawing::Point(13, 13);
			this->gpbInicial->Name = L"gpbInicial";
			this->gpbInicial->Size = System::Drawing::Size(592, 71);
			this->gpbInicial->TabIndex = 0;
			this->gpbInicial->TabStop = false;
			// 
			// cmbFigura
			// 
			this->cmbFigura->FormattingEnabled = true;
			this->cmbFigura->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Elipse", L"Rectangulo" });
			this->cmbFigura->Location = System::Drawing::Point(78, 19);
			this->cmbFigura->Name = L"cmbFigura";
			this->cmbFigura->Size = System::Drawing::Size(126, 21);
			this->cmbFigura->TabIndex = 2;
			this->cmbFigura->SelectedIndexChanged += gcnew System::EventHandler(this, &FrmPrincipal::cmbFigura_SelectedIndexChanged);
			// 
			// btnDibujar
			// 
			this->btnDibujar->Location = System::Drawing::Point(219, 20);
			this->btnDibujar->Name = L"btnDibujar";
			this->btnDibujar->Size = System::Drawing::Size(356, 23);
			this->btnDibujar->TabIndex = 1;
			this->btnDibujar->Text = L"Dibujar";
			this->btnDibujar->UseVisualStyleBackColor = true;
			this->btnDibujar->Click += gcnew System::EventHandler(this, &FrmPrincipal::btnDibujar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Elegir Figura";
			// 
			// gpbPosicion
			// 
			this->gpbPosicion->Controls->Add(this->txbPosicionY);
			this->gpbPosicion->Controls->Add(this->txbPosicionX);
			this->gpbPosicion->Controls->Add(this->label3);
			this->gpbPosicion->Controls->Add(this->label2);
			this->gpbPosicion->Location = System::Drawing::Point(12, 90);
			this->gpbPosicion->Name = L"gpbPosicion";
			this->gpbPosicion->Size = System::Drawing::Size(200, 100);
			this->gpbPosicion->TabIndex = 1;
			this->gpbPosicion->TabStop = false;
			this->gpbPosicion->Text = L"Posicion Inicial";
			// 
			// txbPosicionY
			// 
			this->txbPosicionY->Location = System::Drawing::Point(79, 54);
			this->txbPosicionY->Name = L"txbPosicionY";
			this->txbPosicionY->Size = System::Drawing::Size(100, 20);
			this->txbPosicionY->TabIndex = 3;
			// 
			// txbPosicionX
			// 
			this->txbPosicionX->Location = System::Drawing::Point(79, 28);
			this->txbPosicionX->Name = L"txbPosicionX";
			this->txbPosicionX->Size = System::Drawing::Size(100, 20);
			this->txbPosicionX->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Posicion Y";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Posicion X";
			// 
			// gpbElipse
			// 
			this->gpbElipse->Controls->Add(this->lblAreaElipse);
			this->gpbElipse->Controls->Add(this->txbRadio);
			this->gpbElipse->Controls->Add(this->label6);
			this->gpbElipse->Controls->Add(this->label5);
			this->gpbElipse->Location = System::Drawing::Point(232, 91);
			this->gpbElipse->Name = L"gpbElipse";
			this->gpbElipse->Size = System::Drawing::Size(179, 100);
			this->gpbElipse->TabIndex = 2;
			this->gpbElipse->TabStop = false;
			this->gpbElipse->Text = L"Elipse";
			// 
			// lblAreaElipse
			// 
			this->lblAreaElipse->AutoSize = true;
			this->lblAreaElipse->Location = System::Drawing::Point(55, 60);
			this->lblAreaElipse->Name = L"lblAreaElipse";
			this->lblAreaElipse->Size = System::Drawing::Size(89, 13);
			this->lblAreaElipse->TabIndex = 3;
			this->lblAreaElipse->Text = L"Mostrar area aqui";
			// 
			// txbRadio
			// 
			this->txbRadio->Location = System::Drawing::Point(55, 27);
			this->txbRadio->Name = L"txbRadio";
			this->txbRadio->Size = System::Drawing::Size(100, 20);
			this->txbRadio->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 60);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Area";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Radio";
			// 
			// gpbRectangulo
			// 
			this->gpbRectangulo->Controls->Add(this->txbLado2);
			this->gpbRectangulo->Controls->Add(this->txbLado1);
			this->gpbRectangulo->Controls->Add(this->lblAreaRectangulo);
			this->gpbRectangulo->Controls->Add(this->label9);
			this->gpbRectangulo->Controls->Add(this->label8);
			this->gpbRectangulo->Controls->Add(this->label7);
			this->gpbRectangulo->Location = System::Drawing::Point(431, 91);
			this->gpbRectangulo->Name = L"gpbRectangulo";
			this->gpbRectangulo->Size = System::Drawing::Size(174, 100);
			this->gpbRectangulo->TabIndex = 4;
			this->gpbRectangulo->TabStop = false;
			this->gpbRectangulo->Text = L"Rectangulo";
			// 
			// txbLado2
			// 
			this->txbLado2->Location = System::Drawing::Point(52, 43);
			this->txbLado2->Name = L"txbLado2";
			this->txbLado2->Size = System::Drawing::Size(100, 20);
			this->txbLado2->TabIndex = 6;
			// 
			// txbLado1
			// 
			this->txbLado1->Location = System::Drawing::Point(53, 16);
			this->txbLado1->Name = L"txbLado1";
			this->txbLado1->Size = System::Drawing::Size(100, 20);
			this->txbLado1->TabIndex = 5;
			// 
			// lblAreaRectangulo
			// 
			this->lblAreaRectangulo->AutoSize = true;
			this->lblAreaRectangulo->Location = System::Drawing::Point(68, 73);
			this->lblAreaRectangulo->Name = L"lblAreaRectangulo";
			this->lblAreaRectangulo->Size = System::Drawing::Size(89, 13);
			this->lblAreaRectangulo->TabIndex = 4;
			this->lblAreaRectangulo->Text = L"Mostrar area aqui";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 73);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 13);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Area";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 43);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(40, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Lado 2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Lado 1";
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(13, 197);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(592, 265);
			this->panel1->TabIndex = 5;
			// 
			// FrmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(626, 474);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->gpbRectangulo);
			this->Controls->Add(this->gpbElipse);
			this->Controls->Add(this->gpbPosicion);
			this->Controls->Add(this->gpbInicial);
			this->Name = L"FrmPrincipal";
			this->Text = L"FrmPrincipal";
			this->Load += gcnew System::EventHandler(this, &FrmPrincipal::FrmPrincipal_Load);
			this->gpbInicial->ResumeLayout(false);
			this->gpbInicial->PerformLayout();
			this->gpbPosicion->ResumeLayout(false);
			this->gpbPosicion->PerformLayout();
			this->gpbElipse->ResumeLayout(false);
			this->gpbElipse->PerformLayout();
			this->gpbRectangulo->ResumeLayout(false);
			this->gpbRectangulo->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void cmbFigura_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		if (cmbFigura->Text == "Elipse")
		{
			gpbElipse->Enabled = true;
			gpbRectangulo->Enabled = false;
			gpbPosicion->Enabled = true;
		}
		if (cmbFigura->Text == "Rectangulo")
		{
			gpbRectangulo->Enabled = true;
			gpbElipse->Enabled = false;
			gpbPosicion->Enabled = true;
		}
	}
private: System::Void FrmPrincipal_Load(System::Object^  sender, System::EventArgs^  e) {
	cmbFigura->SelectedItem = -1;
	gpbRectangulo->Enabled = false;
	gpbElipse->Enabled = false;
	gpbPosicion->Enabled = false;
}
private: System::Void btnDibujar_Click(System::Object^  sender, System::EventArgs^  e) {
	if (cmbFigura->Text == "Elipse")
	{
		CElipse *aux = new CElipse(Convert::ToInt32(txbPosicionX->Text),
			Convert::ToInt32(txbPosicionY->Text),
			Convert::ToInt32(txbRadio->Text));
		lblAreaElipse->Text = "" + aux->getArea();

		objarreglo->AgregarElipse(aux);
		g->Clear(Color::WhiteSmoke);
		/*objarreglo->dibujarTodo(g, pincel, brocha);*/
		aux->dibujar(g, pincel);
	}
	if (cmbFigura->Text == "Rectangulo")
	{
		CRectangulo *aux = new CRectangulo(Convert::ToInt32(txbPosicionX->Text),
			Convert::ToInt32(txbPosicionY->Text),
			Convert::ToInt32(txbLado1->Text),
			Convert::ToInt32(txbLado2->Text));
		lblAreaRectangulo->Text = "" + aux->getArea();
		objarreglo->AgregarRectangulo(aux);
		g->Clear(Color::WhiteSmoke);
		/*objarreglo->dibujarTodo(g, pincel, brocha);*/
		aux->dibujar(g, brocha);
	}
}
};
}

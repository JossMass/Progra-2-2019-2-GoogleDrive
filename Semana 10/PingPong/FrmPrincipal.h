#pragma once
#include "Circulo.h"
#include "Rectangulo.h"

namespace PingPongClasico {

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

	private:
		CCirculo *objCirculo;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  lbl1;
	private: System::Windows::Forms::Label^  lblCaidas;


			 CRectangulo *objRectangulo;
	public:
		FrmPrincipal(void)
		{
			InitializeComponent();
			objRectangulo = new CRectangulo();
			objCirculo = new CCirculo();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~FrmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->lblCaidas = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &FrmPrincipal::timer1_Tick);
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Location = System::Drawing::Point(3, 4);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(65, 13);
			this->lbl1->TabIndex = 0;
			this->lbl1->Text = L"Total caidas";
			// 
			// lblCaidas
			// 
			this->lblCaidas->AutoSize = true;
			this->lblCaidas->Location = System::Drawing::Point(75, 4);
			this->lblCaidas->Name = L"lblCaidas";
			this->lblCaidas->Size = System::Drawing::Size(13, 13);
			this->lblCaidas->TabIndex = 1;
			this->lblCaidas->Text = L"0";
			// 
			// FrmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(350, 338);
			this->Controls->Add(this->lblCaidas);
			this->Controls->Add(this->lbl1);
			this->Name = L"FrmPrincipal";
			this->Text = L"FrmPrincipal";
			this->Load += gcnew System::EventHandler(this, &FrmPrincipal::FrmPrincipal_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FrmPrincipal::FrmPrincipal_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		Graphics^ g = this->CreateGraphics();
		BufferedGraphicsContext^espacio = BufferedGraphicsManager::Current;
		BufferedGraphics^ buffer = espacio->Allocate(g, this->ClientRectangle);

		objCirculo->dibujar(buffer->Graphics);
		objCirculo->mover(this->Width, objRectangulo->getY(), objRectangulo->getX(), objRectangulo->getMaxX());
		objRectangulo->dibujar(buffer->Graphics);
		lblCaidas->Text = "" + objCirculo->getContadorCaidas();

		buffer->Render(g);

		delete g;
		delete espacio;

	}
	private: System::Void FrmPrincipal_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

		switch (e->KeyCode)
		{
		case Keys::Right:
			objRectangulo->mover(this->Width, true); break;
		case Keys::Left:
			objRectangulo->mover(this->Width, false); break;
		}
	}
	private: System::Void FrmPrincipal_Load(System::Object^  sender, System::EventArgs^  e) {
		timer1->Enabled = true;
	}
	};
}

#pragma once
#include "Controlador.h"
#include <ctime>
#include "Archivos.h"
namespace Integrador {

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
			srand(time(NULL));
			archivo = new CArchivo();
			archivo->CargarDatos();
			bmpMapa = gcnew Bitmap("fondo.png");
			bmpPersonaje = gcnew Bitmap("rojo.png");
			bmpEnemigo = gcnew Bitmap("proton.png");
			g = pnlLienzo->CreateGraphics();
			espacio = BufferedGraphicsManager::Current;
			buffer = espacio->Allocate(g, pnlLienzo->ClientRectangle);
			controlador = new CControlador(archivo->getX(), archivo->getY(), bmpPersonaje, archivo->getVidas(), bmpEnemigo);
		}
	private:
		Bitmap^ bmpMapa;
		Bitmap^ bmpPersonaje;
		Bitmap^ bmpEnemigo;
		Graphics ^g;
		BufferedGraphicsContext^ espacio;
		BufferedGraphics^ buffer;
		CArchivo *archivo;
	private: System::Windows::Forms::Label^  lblTiempo;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lblVidas;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  timer2;
			 CControlador *controlador;


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
	private: System::Windows::Forms::Panel^  pnlLienzo;
	protected:
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pnlLienzo = (gcnew System::Windows::Forms::Panel());
			this->lblTiempo = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblVidas = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pnlLienzo->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlLienzo
			// 
			this->pnlLienzo->Controls->Add(this->lblTiempo);
			this->pnlLienzo->Controls->Add(this->label2);
			this->pnlLienzo->Controls->Add(this->lblVidas);
			this->pnlLienzo->Controls->Add(this->label1);
			this->pnlLienzo->Location = System::Drawing::Point(3, 2);
			this->pnlLienzo->Name = L"pnlLienzo";
			this->pnlLienzo->Size = System::Drawing::Size(868, 436);
			this->pnlLienzo->TabIndex = 0;
			// 
			// lblTiempo
			// 
			this->lblTiempo->AutoSize = true;
			this->lblTiempo->Location = System::Drawing::Point(165, 11);
			this->lblTiempo->Name = L"lblTiempo";
			this->lblTiempo->Size = System::Drawing::Size(0, 13);
			this->lblTiempo->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(116, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Tiempo";
			// 
			// lblVidas
			// 
			this->lblVidas->AutoSize = true;
			this->lblVidas->Location = System::Drawing::Point(50, 11);
			this->lblVidas->Name = L"lblVidas";
			this->lblVidas->Size = System::Drawing::Size(0, 13);
			this->lblVidas->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Vidas";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &FrmPrincipal::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &FrmPrincipal::timer2_Tick);
			// 
			// FrmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(871, 438);
			this->Controls->Add(this->pnlLienzo);
			this->Name = L"FrmPrincipal";
			this->Text = L"FrmPrincipal";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FrmPrincipal::FrmPrincipal_KeyDown);
			this->pnlLienzo->ResumeLayout(false);
			this->pnlLienzo->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

		lblVidas->Text = "" + controlador->getPersonaje()->getVidas();
		lblTiempo->Text = "" + controlador->getTiempo();
		controlador->colision();
		controlador->moverTodo(buffer->Graphics);
		controlador->dibujarTodo(buffer->Graphics, bmpPersonaje, bmpEnemigo, bmpMapa);

		if (controlador->getPersonaje()->getVidas() == 0)
		{
			timer1->Enabled = false;
			MessageBox::Show("Perdiste");
			this->Close();
		}
		else if (controlador->getTiempo() == archivo->getTiempo()){
			timer1->Enabled = false;
			MessageBox::Show("Ganaste");
			this->Close();
		}
		else
		{
			buffer->Render(g);
		}
	}
	private: System::Void FrmPrincipal_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		switch (e->KeyCode)
		{
		case Keys::A:
			controlador->getPersonaje()->mover(buffer->Graphics, 'A');break;
		case Keys::D:
			controlador->getPersonaje()->mover(buffer->Graphics, 'D');break;
		case Keys::W:
			controlador->getPersonaje()->mover(buffer->Graphics, 'W');break;
		case Keys::S:
			controlador->getPersonaje()->mover(buffer->Graphics, 'S');break;
		}
	}
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
		controlador->aumentarTiempo();
	}
};
}

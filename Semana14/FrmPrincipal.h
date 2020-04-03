#pragma once
#include "Personaje.h"
#include "Controlador.h"
#include <ctime>
namespace MovimientoSprite {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	/// <summary>
	/// Summary for FrmPrincipal
	/// </summary>
	public ref class FrmPrincipal : public System::Windows::Forms::Form
	{
	public:
		FrmPrincipal(void)
		{
			InitializeComponent();
			srand(time(NULL));
			rojo = gcnew Bitmap("rojo.png");
			mapa = gcnew Bitmap("fondo.png");
			bruno = gcnew Bitmap("bruno.png");
			g = pnlLienzo->CreateGraphics();
			espacio = BufferedGraphicsManager::Current;
			buffer = espacio->Allocate(g, pnlLienzo->ClientRectangle);
			sonido = gcnew SoundPlayer("musica.wav");
			imgBala = gcnew Bitmap("pokeball.png");
			imgAlfa = gcnew Bitmap("proton.png");
			controlador = new CControlador(rojo);

			controlador->LlenarAlfas(imgAlfa->Width / 4, imgAlfa->Height / 4 , 5);
		}
	private: System::Windows::Forms::Timer^  timer1;
	public:
	private:
		Graphics ^g;
		Bitmap ^mapa;
		Bitmap ^rojo;
		Bitmap ^bruno;
		BufferedGraphicsContext^ espacio;
		BufferedGraphics^ buffer;
		SoundPlayer^ sonido;
		CControlador* controlador;
		Bitmap ^imgBala;
		CBala * bala;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lblVidas;
	private: System::Windows::Forms::Timer^  timerBalas;
	private: System::Windows::Forms::Label^  lblPuntaje;
	private: System::Windows::Forms::Label^  label2;
			 Bitmap ^imgAlfa;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FrmPrincipal()
		{
			if (components)
			{
				delete components;
				delete espacio;
				delete g;
			}
		}
	private: System::Windows::Forms::Panel^  pnlLienzo;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pnlLienzo = (gcnew System::Windows::Forms::Panel());
			this->lblVidas = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerBalas = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblPuntaje = (gcnew System::Windows::Forms::Label());
			this->pnlLienzo->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlLienzo
			// 
			this->pnlLienzo->Controls->Add(this->lblPuntaje);
			this->pnlLienzo->Controls->Add(this->label2);
			this->pnlLienzo->Controls->Add(this->lblVidas);
			this->pnlLienzo->Controls->Add(this->label1);
			this->pnlLienzo->Location = System::Drawing::Point(0, 0);
			this->pnlLienzo->Name = L"pnlLienzo";
			this->pnlLienzo->Size = System::Drawing::Size(775, 453);
			this->pnlLienzo->TabIndex = 0;
			// 
			// lblVidas
			// 
			this->lblVidas->AutoSize = true;
			this->lblVidas->Location = System::Drawing::Point(53, 13);
			this->lblVidas->Name = L"lblVidas";
			this->lblVidas->Size = System::Drawing::Size(0, 13);
			this->lblVidas->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
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
			// timerBalas
			// 
			this->timerBalas->Enabled = true;
			this->timerBalas->Interval = 5000;
			this->timerBalas->Tick += gcnew System::EventHandler(this, &FrmPrincipal::timerBalas_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(117, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Puntaje";
			// 
			// lblPuntaje
			// 
			this->lblPuntaje->AutoSize = true;
			this->lblPuntaje->Location = System::Drawing::Point(167, 13);
			this->lblPuntaje->Name = L"lblPuntaje";
			this->lblPuntaje->Size = System::Drawing::Size(0, 13);
			this->lblPuntaje->TabIndex = 3;
			// 
			// FrmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(772, 454);
			this->Controls->Add(this->pnlLienzo);
			this->Name = L"FrmPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FrmPrincipal";
			this->Load += gcnew System::EventHandler(this, &FrmPrincipal::FrmPrincipal_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FrmPrincipal::FrmPrincipal_KeyDown);
			this->pnlLienzo->ResumeLayout(false);
			this->pnlLienzo->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		if (controlador->CerrarFormulario()==0)
		{
			buffer->Graphics->Clear(SystemColors::Control);

			lblVidas->Text = "" + controlador->getPersonaje()->getVidas();
			lblPuntaje->Text = "" + controlador->getPersonaje()->getPuntaje();
			controlador->Colision(buffer->Graphics);
			controlador->moverTodo(buffer->Graphics);
			controlador->dibujarTodo(buffer->Graphics, imgBala, imgAlfa, rojo, mapa);

			if (controlador->getPersonaje()->getPuntaje() == 50)
			{
				controlador->CambioDeNivel(bruno, imgAlfa, 10);
				mapa = gcnew Bitmap("fondo2.png");
			}
			buffer->Render(g);
		}
		else
		{
			timer1->Enabled = false;
			MessageBox::Show("Perdiste :C");
			this->Close();
		}
	


	}

	private: System::Void FrmPrincipal_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		switch (e->KeyCode)
		{
		case Keys::A:
			controlador->getPersonaje()->mover('A', buffer->Graphics);break;
		case Keys::W:
			controlador->getPersonaje()->mover('W', buffer->Graphics);break;
		case Keys::D:
			controlador->getPersonaje()->mover('D', buffer->Graphics);break;
		case Keys::S:
			controlador->getPersonaje()->mover('S', buffer->Graphics);break;
		case Keys::Space:
			bala = new CBala(controlador->getPersonaje()->getX(), controlador->getPersonaje()->getY(), imgBala->Width,
				imgBala->Height, controlador->getPersonaje()->getDireccion());
			controlador->AgregarBala(bala);break;


		}
	}
	private: System::Void FrmPrincipal_Load(System::Object^  sender, System::EventArgs^  e) {
		/*sonido->PlayLooping();*/
	}
	private: System::Void timerBalas_Tick(System::Object^  sender, System::EventArgs^  e) {
		for (int i = 0;i < controlador->getAlfas().size();i++)
		{
			bala = new CBala(controlador->getAlfas()[i]->getX(),
				controlador->getAlfas()[i]->getY(), imgBala->Width
				, imgBala->Height, controlador->getAlfas()[i]->getDireeccion());
			controlador->AgregarBalaEnemiga(bala);
		}
	}
};
}
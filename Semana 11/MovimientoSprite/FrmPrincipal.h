#pragma once
#include "Personaje.h"
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
			bulbasaur = gcnew Bitmap("bulbasaur.png");
			personaje = new CPersonaje(bulbasaur->Width/4, bulbasaur->Height/4);
			mapa = gcnew Bitmap("fondo.png");
			g = pnlLienzo->CreateGraphics();
			espacio = BufferedGraphicsManager::Current;
			buffer = espacio->Allocate(g, pnlLienzo->ClientRectangle);
			sonido = gcnew SoundPlayer("musica.wav");
		}
	private: System::Windows::Forms::Timer^  timer1;
	public:
	private:
		Graphics ^g;
		CPersonaje *personaje;
		Bitmap ^mapa;
		Bitmap ^bulbasaur;
		BufferedGraphicsContext^ espacio;
		BufferedGraphics^ buffer;
		SoundPlayer^ sonido;
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
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// pnlLienzo
			// 
			this->pnlLienzo->Location = System::Drawing::Point(0, 0);
			this->pnlLienzo->Name = L"pnlLienzo";
			this->pnlLienzo->Size = System::Drawing::Size(775, 453);
			this->pnlLienzo->TabIndex = 0;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &FrmPrincipal::timer1_Tick);
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
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		
		buffer->Graphics->Clear(SystemColors::Control);
		
		buffer->Graphics->DrawImage(mapa, 0, 0, mapa->Width*2.3, mapa->Height*1.8);
		personaje->dibujar(buffer->Graphics, bulbasaur);

		buffer->Render(g);

	}

	private: System::Void FrmPrincipal_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		switch (e->KeyCode)
		{
		case Keys::A:
			personaje->mover('A',buffer->Graphics);break;
		case Keys::W:
			personaje->mover('W', buffer->Graphics);break;
		case Keys::D:
			personaje->mover('D', buffer->Graphics);break;
		case Keys::S:
			personaje->mover('S', buffer->Graphics);break;

		}
	}
	private: System::Void FrmPrincipal_Load(System::Object^  sender, System::EventArgs^  e) {
		sonido->PlayLooping();
	}
};
}

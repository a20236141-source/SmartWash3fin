#pragma once

namespace SmartWash3View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmMantSuscripcion
	/// </summary>
	public ref class frmMantSuscripcion : public System::Windows::Forms::Form
	{
	public:
		frmMantSuscripcion(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmMantSuscripcion()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// frmMantSuscripcion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(705, 510);
			this->Name = L"frmMantSuscripcion";
			this->Text = L"frmMantSuscripcion";
			this->Load += gcnew System::EventHandler(this, &frmMantSuscripcion::frmMantSuscripcion_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmMantSuscripcion_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

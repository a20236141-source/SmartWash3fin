#pragma once
#include "frmPrincipal.h"

namespace SmartWash3View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SmartWash3Model;

	/// <summary>
	/// Resumen de frmLogin
	/// </summary>
	public ref class frmLogin : public System::Windows::Forms::Form
	{
	public:
		frmLogin(void)
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
		~frmLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textContrasena;
	private: System::Windows::Forms::TextBox^ textUsuario;
	private: System::Windows::Forms::Button^ buttonIngreso;
	private: System::Windows::Forms::Button^ buttonCancelar;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonCancelar = (gcnew System::Windows::Forms::Button());
			this->buttonIngreso = (gcnew System::Windows::Forms::Button());
			this->textContrasena = (gcnew System::Windows::Forms::TextBox());
			this->textUsuario = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->groupBox1->Controls->Add(this->buttonCancelar);
			this->groupBox1->Controls->Add(this->buttonIngreso);
			this->groupBox1->Controls->Add(this->textContrasena);
			this->groupBox1->Controls->Add(this->textUsuario);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(23, 12);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(623, 302);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Identificación del usuario:";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmLogin::groupBox1_Enter);
			// 
			// buttonCancelar
			// 
			this->buttonCancelar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buttonCancelar->Location = System::Drawing::Point(369, 214);
			this->buttonCancelar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonCancelar->Name = L"buttonCancelar";
			this->buttonCancelar->Size = System::Drawing::Size(156, 50);
			this->buttonCancelar->TabIndex = 5;
			this->buttonCancelar->Text = L"Salir";
			this->buttonCancelar->UseVisualStyleBackColor = false;
			this->buttonCancelar->UseWaitCursor = true;
			this->buttonCancelar->Click += gcnew System::EventHandler(this, &frmLogin::button1_Click);
			// 
			// buttonIngreso
			// 
			this->buttonIngreso->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buttonIngreso->Location = System::Drawing::Point(125, 214);
			this->buttonIngreso->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonIngreso->Name = L"buttonIngreso";
			this->buttonIngreso->Size = System::Drawing::Size(156, 50);
			this->buttonIngreso->TabIndex = 4;
			this->buttonIngreso->Text = L"Ingresar";
			this->buttonIngreso->UseVisualStyleBackColor = false;
			this->buttonIngreso->Click += gcnew System::EventHandler(this, &frmLogin::buttonIngreso_Click);
			// 
			// textContrasena
			// 
			this->textContrasena->BackColor = System::Drawing::SystemColors::Info;
			this->textContrasena->Location = System::Drawing::Point(319, 137);
			this->textContrasena->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textContrasena->Name = L"textContrasena";
			this->textContrasena->PasswordChar = '*';
			this->textContrasena->Size = System::Drawing::Size(223, 38);
			this->textContrasena->TabIndex = 3;
			this->textContrasena->Text = L"1234";
			this->textContrasena->UseSystemPasswordChar = true;
			// 
			// textUsuario
			// 
			this->textUsuario->BackColor = System::Drawing::SystemColors::Info;
			this->textUsuario->Location = System::Drawing::Point(319, 59);
			this->textUsuario->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textUsuario->Name = L"textUsuario";
			this->textUsuario->Size = System::Drawing::Size(223, 38);
			this->textUsuario->TabIndex = 2;
			this->textUsuario->Text = L"admin";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(84, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(180, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contraseña:";
			this->label2->Click += gcnew System::EventHandler(this, &frmLogin::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(84, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuario:";
			this->label1->Click += gcnew System::EventHandler(this, &frmLogin::label1_Click);
			// 
			// frmLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(669, 350);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"frmLogin";
			this->Text = L"Sistema de Gestión de Ensamblaje";
			this->Load += gcnew System::EventHandler(this, &frmLogin::frmLogin_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void frmLogin_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonIngreso_Click(System::Object^ sender, System::EventArgs^ e) {
		//valores de los campos de texto
		String^ usuario = this->textUsuario->Text;
		String^ contrasena = this->textContrasena->Text;

		if (usuario->Equals("") || contrasena->Equals("")) {
			MessageBox::Show("Las credenciales no debe estar en blanco...!",
				"Error de credenciales", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			// Por ejemplo, si el usuario y la contraseña son "admin", se permite el acceso
			if (usuario->Equals("admin") && contrasena->Equals("1234"))
			{
				// Si las credenciales son correctas, se puede abrir la ventana principal
				// y cerrar la ventana de inicio de sesión
				frmPrincipal^ ventanaPrincipal = gcnew frmPrincipal();
				ventanaPrincipal->ShowDialog();
				this->Close();
			}
			else
			{
				// Si las credenciales son incorrectas, se muestra un mensaje de error
				// y se puede limpiar los campos de texto
				this->textUsuario->Text = "";
				this->textContrasena->Text = "";
				this->textUsuario->Focus();
				MessageBox::Show("Las credenciales no son válidas", "Error de credenciales",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();// cerrar
	}
	};
}

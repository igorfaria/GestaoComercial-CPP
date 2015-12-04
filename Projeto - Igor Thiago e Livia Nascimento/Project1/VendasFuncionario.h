	/*
								Vendas Funcionário

			Classe para listar vendas por funcionário

	*/

#pragma once
#include "Venda.h"			 // Classe com o objeto Venda().
#include "Produto.h"		 // Classe com o objeto Produto().
#include "Helpers.h"		 // Classe com o objeto Ferramentas() e Ficheiro().
#include "ConsultarVenda.h"  // Classe referente à operação Consultar Vendas

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VendasFuncionario
	/// </summary>
	public ref class VendasFuncionario : public System::Windows::Forms::Form
	{
	public:
		VendasFuncionario(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~VendasFuncionario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::DataGridView^  tabelaVendas;






	private: System::Windows::Forms::ComboBox^  cb_funcionario;
	private: System::Windows::Forms::Label^  Funcionário;

	private: System::Windows::Forms::Button^  btn_OK;







	private: Project1::ConsultarVenda^ janelaConsultarVenda;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nif_cliente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Total;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Data;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox9;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VendasFuncionario::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabelaVendas = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nif_cliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Data = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cb_funcionario = (gcnew System::Windows::Forms::ComboBox());
			this->Funcionário = (gcnew System::Windows::Forms::Label());
			this->btn_OK = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabelaVendas))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(128, 131);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// tabelaVendas
			// 
			this->tabelaVendas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tabelaVendas->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ID, this->nif_cliente,
					this->Total, this->Data
			});
			this->tabelaVendas->Location = System::Drawing::Point(146, 12);
			this->tabelaVendas->Name = L"tabelaVendas";
			this->tabelaVendas->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tabelaVendas->Size = System::Drawing::Size(353, 301);
			this->tabelaVendas->TabIndex = 3;
			this->tabelaVendas->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &VendasFuncionario::tabelaVendas_CellContentClick);
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->Width = 50;
			// 
			// nif_cliente
			// 
			this->nif_cliente->HeaderText = L"NIF Cliente";
			this->nif_cliente->MaxInputLength = 9;
			this->nif_cliente->Name = L"nif_cliente";
			// 
			// Total
			// 
			this->Total->HeaderText = L"Total";
			this->Total->Name = L"Total";
			this->Total->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Total->Width = 80;
			// 
			// Data
			// 
			this->Data->HeaderText = L"Data";
			this->Data->Name = L"Data";
			this->Data->Width = 80;
			// 
			// cb_funcionario
			// 
			this->cb_funcionario->FormattingEnabled = true;
			this->cb_funcionario->Location = System::Drawing::Point(12, 188);
			this->cb_funcionario->Name = L"cb_funcionario";
			this->cb_funcionario->Size = System::Drawing::Size(121, 21);
			this->cb_funcionario->TabIndex = 4;
			this->cb_funcionario->SelectedIndexChanged += gcnew System::EventHandler(this, &VendasFuncionario::cb_funcionario_SelectedIndexChanged);
			this->cb_funcionario->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &VendasFuncionario::cb_funcionario_KeyDown);
			// 
			// Funcionário
			// 
			this->Funcionário->AutoSize = true;
			this->Funcionário->Location = System::Drawing::Point(12, 172);
			this->Funcionário->Name = L"Funcionário";
			this->Funcionário->Size = System::Drawing::Size(62, 13);
			this->Funcionário->TabIndex = 5;
			this->Funcionário->Text = L"Funcionário";
			// 
			// btn_OK
			// 
			this->btn_OK->Location = System::Drawing::Point(58, 215);
			this->btn_OK->Name = L"btn_OK";
			this->btn_OK->Size = System::Drawing::Size(75, 23);
			this->btn_OK->TabIndex = 6;
			this->btn_OK->Text = L"OK";
			this->btn_OK->UseVisualStyleBackColor = true;
			this->btn_OK->Click += gcnew System::EventHandler(this, &VendasFuncionario::btn_OK_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(36, 290);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Fechar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VendasFuncionario::button1_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(12, 238);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(38, 37);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 11;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &VendasFuncionario::pictureBox9_Click);
			// 
			// VendasFuncionario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(509, 321);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_OK);
			this->Controls->Add(this->Funcionário);
			this->Controls->Add(this->cb_funcionario);
			this->Controls->Add(this->tabelaVendas);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"VendasFuncionario";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Vendas Funcionario";
			this->Load += gcnew System::EventHandler(this, &VendasFuncionario::VendasFuncionario_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabelaVendas))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void cb_funcionario_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) { }
	/*
								AO ABRIR JANELA

			Lê ficheiro FUNCIONARIOS.txt armazena em um vetor std::string
			Percorre vetor e adiciona na combobox cb_funcionario
	*/
	private: System::Void VendasFuncionario_Load(System::Object^  sender, System::EventArgs^  e) {
		// Carregar lista de funcionarios
		std::vector<std::string> FUNCIONARIOS = Funcionario().nomeFuncionarios();

		for (int i = 0; i < FUNCIONARIOS.size(); i++) {
			this->cb_funcionario->Items->Add(Ferramentas::sysString(FUNCIONARIOS[i]));
		}
	}
	
	/*
								BOTÃO OK

			Lê ficheiro  VENDAS.txt, armazena os dados referente a venda
			Compara o nome do vendedor com o valor inserido no cb_funcioanario
	*/
	private: System::Void btn_OK_Click(System::Object^  sender, System::EventArgs^  e) {
		if (System::String::IsNullOrEmpty(this->cb_funcionario->Text)){
			MessageBox::Show("Selecione um funcionário", "Erro", MessageBoxButtons::OK);
		}
		else
		{	

			this->tabelaVendas->Rows->Clear();
			std::vector<std::string> VENDAS = Venda().listarVendas();

			for (int i = 0; i < VENDAS.size(); i++) {
				std::vector<std::string> DADOS = Ferramentas::split(VENDAS[i], '|');
				std::string ID = DADOS[0];
				std::string nome = DADOS[1];
				std::string NIF = DADOS[2];
				std::string valor = DADOS[4];
				std::string data = DADOS[5];

				if(nome == Ferramentas::stdString(this->cb_funcionario->Text)){
					this->tabelaVendas->Rows->Add(
						Ferramentas::sysString(ID),
						Ferramentas::sysString(NIF),
						Ferramentas::sysString(Ferramentas::precoFormat(valor)),
						Ferramentas::sysString(Ferramentas::dataFormat(data))
						);
				}
			}
		}
	}

	/*
								CONSULTAR VENDA

			Cria uma nova instância do objeto ConsultarVenda(ID)
			Passando como paramêtro o valor do campo ID referente a linha da tabela selecionada	
	
	*/
	private: System::Void tabelaVendas_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

		int index = this->tabelaVendas->CurrentRow->Index;
		System::String^ argumento = this->tabelaVendas->Rows[index]->Cells[0]->Value->ToString();

		janelaConsultarVenda = (gcnew ConsultarVenda(argumento));
		janelaConsultarVenda->Show();

	
	}

	/*
								BOTÃO CANCELAR

		 Confirma a ação de cancelar a venda.

	*/
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Confirme a saída?", "Sair", MessageBoxButtons::OKCancel) == System::Windows::Forms::DialogResult::OK) {
			this->Close();
		}

	}
		
	/*
								BOTÃO IMPRESSORA

		 A ser implementado :D :D

	*/
	private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Funcionalidade indisponível", "Erro", MessageBoxButtons::OK);
	}
	/*
								TECLA ENTER.

		 Verifica se a tecla premida no teclado corresponde a tecla Enter.

	*/
	private: System::Void cb_funcionario_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == System::Windows::Forms::Keys::Enter) {
			btn_OK_Click(sender, e);
		}
	}
};
}

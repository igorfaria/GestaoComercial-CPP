	/*
									Venda

			Defini��o dos atributos e m�todos do objeto Venda()

	*/

#pragma once
#include "Produto.h" // Classe com o objeto Produto()
#include "Helpers.h" // Classe com o objeto Ferramentas() e Ficheiro()

namespace Project1 {
	public class Venda {
	/*
	Dados privados
	*/
	private:
		int ID; 
		std::string nome_funcionario;
		int nif_cliente;
		std::string produtos;
		double valor;
		std::string data;
	/*
	M�todos p�blicos	
	*/
		/*
			M�todos construtores
		*/
	public:
		Venda() {
			ID = 0; // numeroVenda();
			nome_funcionario = "";
			nif_cliente = 0;
			produtos = "";
			valor = 0;
			data = "";
		}
		/*
				Entradas 
					ID: int
					nome_funcionario: std::string
					nif_cliente: int
					produtos: std::vector<Produto>
					valor: double
		*/
		Venda(int ID, std::string F, int NIF, std::string P, double V) {
			this->ID = ID;//numeroVenda();
			this->nome_funcionario = F;
			this->nif_cliente = NIF;
			this->produtos = P;
			this->valor = V;
		}
		/*
			M�todos setters
		*/
		/*
			M�todo para atribuir ID

			Entrada:
				ID: int
		*/
		void setID(int I) {
			ID = I;
		}
		/*
			M�todo para atribuir nome do funcion�rio

			Entrada:
				nome_funcionario = std::string
		*/
		void setFuncionario(std::string S) {
			nome_funcionario = S;
		}
		/*
			M�todo para atribuir NIF de cliente

			Entrada:
				nif_cliente: std::string
		*/
		void setNIF(int I) {
			nif_cliente = I;
		}
		/*
			M�todo para atribuir lista de produtos

			Entrada:
				produtos: std::string
		*/
		void setProdutos(std::string V) {
			produtos = V;
		}
		/*
			M�todo para atribuir valor 

			Entrada:
				valor: double
		*/
		void setValor(double V) {
			valor = V;
		}
		/*
			M�todo para atribuir data

			Entrada:
				data: std::string
		*/
		void setData(std::string S) {
			data = S;
		}
		/*
			M�todos getters
		*/
		/*
			M�todo para obter ID

			Sa�da:
				ID: int
		*/
		int getID() {
			return ID;
		}
		/*
			M�todo para obter nome de funcion�rio

			Sa�da:
				nome_funcionario: std::string
		*/
		std::string getFuncionario() {
			return nome_funcionario;
		}
		/*
			M�todo para obter NIF de cliente

			Sa�da:
				nif_cliente: int
		*/
		int getNIF() {
			return nif_cliente;
		}
		/*
			M�todo para obter lista de produtos

			Sa�da:
				produtos: std::string
		*/
		std::string getProdutos() {
			return produtos;
		}
		/*
			M�todo para obter vetor de produtos

			Sa�da:
				produtos: std::vector<std::string>
		*/
		std::vector<std::string> getVetorProdutos() {
			return Ferramentas::split(produtos, '#');
		}
		/*
			M�todo para obter o valor da venda

			Sa�da:
				valor: double
		*/
		double getValor() {
			return valor;
		}
		/*
			M�todo para obter a data da venda

			Sa�da:
				data: std::string
		*/
		std::string getData() {
			return data;
		}
		/*
			M�todo para gerar n�mero da venda

			Sa�da: int
		*/
		int numeroVenda() {
			
			int numero = 0;
			std::vector<std::string> CONT = Ficheiro("CONTADOR_V.txt", "L").le();
			
			if (CONT.size() > 0) {
				numero = Ferramentas::toInt(CONT[0]);
				numero++;
			}

			Ficheiro ficheiro = Ficheiro("CONTADOR_V.TXT", "E");
			ficheiro.escrever(std::to_string(numero));
			ficheiro.fechar();

			return numero;
		}
		/*
			M�todo para retirar produtos de estoque (PRODUTOS.txt) ap�s uma venda
			Entrada: std::string
		*/
		void retirarProdutoEstoque(std::string PRODUTOS) {

			std::vector<std::string> V_PROD = Ferramentas::split(PRODUTOS, '#');

			for (int i = 0; i < V_PROD.size(); i++) {

				std::vector<std::string> DADOS = Ferramentas::split(V_PROD[i], 'x');

				int quantidade = Ferramentas::toInt(DADOS[0]);
				std::string ID = DADOS[0];

			}
	}
		/*
			M�todo para listar vendas
			Sa�da: std::vector<std::string> 
		*/
		static std::vector<std::string> listarVendas() {
			return Ficheiro("VENDAS.txt", "L").le();
		}
		/*
			M�todo para gravar vetor de string
			Entrada: std::vector<std::string>
		*/
		void gravar(std::vector<std::string> DADOS) {
			Ficheiro FILE("VENDAS.txt", "A");
			FILE.escrever(DADOS);
		}
		/*
			M�todo para gravar nova venda
		*/
		void gravar() {
			Ficheiro FILE("VENDAS.TXT", "A");
			std::vector<std::string> DADOS;
				DADOS.push_back(std::to_string(getID()));
				DADOS.push_back(getFuncionario());
				DADOS.push_back(std::to_string(getNIF()));
				DADOS.push_back(getProdutos());
				DADOS.push_back(std::to_string(getValor()));
				DADOS.push_back(getData());
			FILE.escrever(DADOS);
		}

		bool operator < (const Venda& val) const {
			return valor < val.valor;
		}
	};

};
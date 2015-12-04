	/*
										Produto

			Defini��o dos atributos e m�todos do objeto Produto

	*/

#pragma once
#include <string>    // Classe para objeto std::string
#include <algorithm> // std::replace(string.begin(), string.end(), 'x', 'y') - Troca X por Y
#include "Helpers.h" // Classe com o objeto Ferramentas() e Ficheiro().

namespace Project1 {
	static class Produto
	{
	private:
		/*
				Atributos do objeto Produto
		*/
		int ID;
		std::string nome;
		double preco;
		int quantidade;
		std::string fabricante;
		std::string descricao;

	public:
		/*
		M�todos construtores
		*/
		Produto() {
			ID = 0;
			nome = "";
			preco = 0;
			quantidade = 0;
			fabricante = "";
			descricao = "";
		};
		Produto(int I, std::string N, double P, int Q, std::string F, std::string D) {
			setID(I);
			setNome(N);
			setPreco(P);
			setQuantidade(Q);
			setFabricante(F);
			setDescricao(D);
		}
		/*
		 M�todo para atribuir ID
		 Entrada: int
		*/
		void setID(int I) {
			ID = I;
		}
		/*
		 M�todo para atribuir nome
		 Entrada: std::string
		*/
		void setNome(std::string S) {
			nome = S;
		}
		/*
		 M�todo para atribuir preco
		 Entrada: double
		*/
		void setPreco(double D) {
			preco = D;
		}
		/*
		 M�todo para atribuir fabricante
		 Entrada: std::string
		*/
		void setFabricante(std::string S) {
			fabricante = S;
		}
		/*
		 M�todo para atribuir quantidade
		 Entrada: int
		*/
		void setQuantidade(int I) {
			quantidade = I;
		}
		/*
		 M�todo para pegar descri��o
		 Entrada: std::string
		*/
		void setDescricao(std::string S) {
			std::replace(S.begin(), S.end(), '\n', '^');
			descricao = S;
		}
		/*
			M�todo para atribuir descri��o sem tratamento de dados
			Entrada: std::string
		*/
		void setRawDescricao(std::string S) {
			descricao = S;
		}
		/*
		 M�todo para pegar ID
		 Sa�da: int
		*/
		int getID() {
			return ID;
		}
		/*
		 M�todo para pegar nome
		 Sa�da: std::string
		*/
		std::string getNome() {
			return nome;
		}
		/*
		 M�todo para pegar preco
		 Sa�da: double
		*/
		double getPreco() {
			return preco;
		}
		/*
		 M�todo para pegar quantidade
		 Sa�da: int
		*/
		int getQuantidade() {
			return quantidade;
		}
		/*
		 M�todo para pegar fabricante
		 Sa�da: std::string
		*/
		std::string getFabricante() {
			return fabricante;
		}
		/*
		 M�todo para pegar descricao
		 Sa�da: std::string
		*/
		std::string getDescricao() {
			std::string AUX = descricao;
			std::replace(AUX.begin(), AUX.end(), '^', '\n');
			return AUX;
		}
		/*
			Metodo para pegar descri��o em linha
			Sa�da: std::string
		*/
		std::string getDescricao_inline() {
			std::string AUX = descricao;
			std::replace(AUX.begin(), AUX.end(), '^', ' ');
			return AUX;
		}
		/*
			M�todo para pegar descri��o sem formata��o
			Sa�da: std::string
		*/
		std::string getRawDescricao() {
			return descricao;
		}
		/*
			M�todo para listar produtos
			Sa�da: std::vector<std::string>
		*/
		static std::vector<std::string> listarProdutos() {
			return  Ficheiro("PRODUTOS.txt", "L").le();
		}
		/*
			M�todo para verificar ID existente
			Entrada: int
			Sa�da: bool
		*/
		bool existe(int I) {
			std::vector<std::string> LINHAS = listarProdutos();
			bool existe = false;
			std::string ID;
			for (int i = 0; i < LINHAS.size(); i++) {
				if (std::to_string(I) == Ferramentas::split(LINHAS[i], '|')[0]) {
					existe = true;
					break;
				}
			}
			return existe;
		}
		/*
			M�todo para gravar vetor de string
			Entrada: std::vector<std::string>
		*/
		void gravar(std::vector<std::string> DADOS) {
			Ficheiro FILE("PRODUTOS.txt", "A"); 
			FILE.escrever(DADOS);
		}
		/*
			M�todo para gravar um produto
		*/
		void gravar() {
			Ficheiro FILE("PRODUTOS.txt", "A");
			std::vector<std::string> DADOS;
				DADOS.push_back(std::to_string(getID()));
				DADOS.push_back(getNome());
				DADOS.push_back(std::to_string(getPreco()));
				DADOS.push_back(std::to_string(getQuantidade()));
				DADOS.push_back(getFabricante());
				DADOS.push_back(getRawDescricao());
			FILE.escrever(DADOS);
		}
		/*
		   M�todo para gravar um vetor de produtos
		   Entrada: std::vector<Produto>
		*/
		void gravar(std::vector<Produto> PRODUTOS) {
			if (PRODUTOS.size() > 0) {
				// Apaga conte�do do ficheiro PRODUTOS.txt :x
				Ficheiro("PRODUTOS.txt", "E").escrever("");
				for (int i = 0; i < PRODUTOS.size(); i++) {
					std::vector<std::string> DADOS;
					// ID | NOME | PRECO | QUANTIDADE | MARCA | DESCRICAO
					DADOS.push_back(std::to_string(PRODUTOS[i].getID()));
					DADOS.push_back(PRODUTOS[i].getNome());
					DADOS.push_back(std::to_string(PRODUTOS[i].getPreco()));
					DADOS.push_back(std::to_string(PRODUTOS[i].getQuantidade()));
					DADOS.push_back(PRODUTOS[i].getFabricante());
					DADOS.push_back(PRODUTOS[i].getRawDescricao()); // getRawDescricao() ?

					gravar(DADOS);
				}
			}
		}
		/*
		  M�todo para alterar produto
		  Entrada: Produto
		  Sa�da: bool
		*/
		bool alterarProduto(Produto produto) {
			std::vector<Produto> PRODUTOS = vectorProduto();
			std::vector<Produto> AUX;
			bool alterado = false;
			for (int i = 1; i < PRODUTOS.size(); i++) {
				if (PRODUTOS[i].getID() == produto.getID()) {
					AUX.push_back(produto);
					alterado = true;
				}
				else {
					AUX.push_back(PRODUTOS[i]);
				}
			}
				// Gravar mudan�a
				gravar(AUX);
			return alterado;
		}
		/*
		  M�todo para retornar um vector com todos produtos
		  Sa�da: std::vector<Produto>
		*/
		std::vector<Produto> vectorProduto() {
			std::string ID;
			std::string nome;
			std::string preco;
			std::string fabricante;
			std::string quantidade;
			std::string descricao;

			std::vector<std::string> V_STRING = Produto().listarProdutos();
			std::vector<Produto> ESTOQUE_PRODUTOS;

			for (int i = 0; i < V_STRING.size(); i++) {
				std::vector<std::string> DADOS = Ferramentas::split(V_STRING[i], '|');
				
				if (DADOS.size() > 6) break;
					ID = DADOS[0];
					nome = DADOS[1];
					preco = DADOS[2];
					quantidade = DADOS[3];
					fabricante = DADOS[4];
					descricao = DADOS[5];
				
				Produto produto = Produto();
						produto.setID(Ferramentas::toInt(ID));
						produto.setNome(nome);
						produto.setPreco(Ferramentas::toDouble(preco));
						produto.setFabricante(fabricante);
						produto.setQuantidade(Ferramentas::toInt(quantidade));
						produto.setDescricao(descricao);

						ESTOQUE_PRODUTOS.push_back(produto);
			}
			return ESTOQUE_PRODUTOS;
		}

		/*
		M�todo para gerar n�mero de produto
		Sa�da: int
		*/
		int numeroProduto() {

			int numero = 0;
			std::vector<std::string> CONT = Ficheiro("CONTADOR_P.txt", "L").le();

			if (CONT.size() > 0) {
				numero = Ferramentas::toInt(CONT[0]);
				numero++;
			}

			Ficheiro ficheiro = Ficheiro("CONTADOR_P.TXT", "E");
			ficheiro.escrever(std::to_string(numero));
			ficheiro.fechar();

			return numero;
		}
	};
};


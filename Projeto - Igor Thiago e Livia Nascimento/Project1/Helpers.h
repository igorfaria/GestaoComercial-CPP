#pragma once
	
	/*

								HELPERS

			Classe com objetos que possuem funcionalidades compartilhadas entre diversas rotinas do sistema.

	*/

#include <string>				// Classe com o objeto do tipo std::string
#include <iomanip>				// Classe com m�todos para manipular entradas e sa�das
#include <vector>				// Classe com o objeto do tipo std::vector
#include <fstream>				// Classe com objetos para a manipula��o de ficheiros
#include "Produto.h"			// Classe com o objeto do tipo Produto()
#include <msclr/marshal_cppstd.h>	// Classe para converter texto do tipo System::String^ para std::string

	static public class Ferramentas {

	public: 
		
		/*

			M�todo para converter valores do tipo System::String^ para std::string

			Entrada: System::String^
			Saida: std::string
		
		*/

		static std::string stdString(System::String^ S) {
			msclr::interop::marshal_context context;
			return context.marshal_as<std::string>(S);
		}

		/*

			M�todo para converter valores do tipo std::string para System::String^
			
			Entrada: std::string
			Saida: System::String^
		
		*/
		
		static System::String^ sysString(std::string s) {
			return gcnew System::String(s.c_str());
		}
		
		/*

			M�todo para converter valores do tipo System::String^ para int

			Entrada: System::String^
			Sa�da: int
		*/

		static int toInt(System::String^ S) {
			return System::Convert::ToInt64(S);
		}

		/*
		
			M�todo para converter valores do tipo std::string para int
			
			Entrada: std::string
			Sa�da: int
		
		*/

		static int toInt(std::string S) {
			return std::stoi(S);
		}

		/*

			M�todo para converter valores do tipo std::string para double

			Entrada: std::string
			Sa�da: double
		*/

		static double toDouble(std::string S) {
			return std::stod(S.c_str());
		}

		/*
			
			M�todo para converter valores do tipo System::String^ para double

			Entrada: System::String^
			Sa�da: double
		
		*/

		static double toDouble(System::String^ S) {
			std::string AUX = stdString(S);
			return std::stod(AUX);
		}

		/*
				
			M�todo que recebe um valor do tipo std::string e um separador do tipo char
			Retorna um vetor de std::string com os valores entre os separadores

			Entrada: std::string, char
			Sa�da: std::vector<std::string>
		*/

		static std::vector<std::string> split(const std::string &text, char sep) {
			std::vector<std::string> tokens;
			int start = 0, end = 0;
			while ((end = text.find(sep, start)) != std::string::npos) {
				tokens.push_back(text.substr(start, end - start));
				start = end + 1;
			}
			tokens.push_back(text.substr(start));
			return tokens;
		}

		/*

			M�todo que recebe uma data do tipo std::string 
			Retorna a data formatada std::string

			Entrada: std::string
			Sa�da: std:string
		*/

	static std::string dataFormat(std::string data) {
		return data.substr(0, 10);
	}

	/*

		M�todo que recebe um pre�o do tipo std::string
		Retorna o pre�o formatado em std::string

		Entrada: std::string
		Sa�da: std::string

	*/
	
	static std::string precoFormat(std::string preco) {
		std::vector<std::string> AUX = split(preco, '.');
		return AUX[0] + "." + AUX[1].substr(0, 2) + " �";
	}

	};

	/*
	
								FICHEIRO

		Defini��o da classe Ficheiro e seus m�todos
	
	*/

	static public class Ficheiro {

	private: std::string nome;
	private: std::vector<std::string> linhas;
	private: std::ifstream ficLeitura;
	private: std::ofstream ficEscrita;
	private: std::string MODO;

	public:
			 /*
				M�todo construtor
				Exemplo de utiliza��o:
				Ferramentas::Ficheiro(nome do ficheiro, modo de abertura);
			 */
			 Ficheiro(std::string S, std::string M) {
			   	 // Atribui valor de S ao atributo nome
				 this->nome = S;
				 this->MODO = M;
				 // E - Escrita
				 // Sobrescreve o conteudo original
				 if (M == "E") {
					 ficEscrita.open(S, std::ios::out);
				 }
				 // A - Adicionar
				 // Adiciona nova linha
				 else if (M == "A") {
					 ficEscrita.open(S, std::ios::out | std::ios::app);
				 }
				 // Abre para leitura
				 else {
					 ficLeitura.open(this->nome, std::ios::in);
				 }
			 };
			 /* Destrutor
			 ~Ficheiro() {
				 this->ficEscrita.close();
				 this->ficLeitura.close();
			 }*/
			 
			 /*

				 M�todo que l� ficheiro e retorna o conte�do em um vetor de std::string 

				 Retorno: std::vector<std::string>
			 
			*/

			 std::vector<std::string> le() {
				 // Vector para armazenar as linhas do ficheiro
				 std::vector<std::string> linhas;
				 for (std::string linha; std::getline(this->ficLeitura, linha);) {
					 // Adiciona linha ao vector
					 linhas.push_back(linha);
				 }
				 return linhas;
			 };

			 /*

			 	M�todo que escreve o conte�do de uma std::string no ficheiro

				Entrada: std::string
			 
			 */

			 void escrever(std::string linha) {
				 this->ficEscrita << std::setprecision(2) << linha;
			 }

			 /*
				M�todo que escreve os dados de um vetor, separados por um caractere

				Entrada: std::vector<std::string>

			*/

			 void escrever(std::vector<std::string> DADOS) {
				 char SEP = '|';

				 for (int i = 0; i < DADOS.size(); i++) {
					 this->ficEscrita << std::setprecision(2) << DADOS[i];

					 if (i < (DADOS.size() - 1)) {
						 this->ficEscrita << SEP;
					 }
				 }

				 // Quebra de linha
				 this->ficEscrita << std::endl;
			 }
			 
			 /*
				M�todo para fechar ficheiro aberto para modo de escrita
			 */
			 
			 void fechar() {
				 this->ficEscrita.close();
			 }
	};

	/*
	
									FUNCIONARIO

			Defini��o da classe Funcion�rio
	
	*/

	static public class Funcionario {
	/*
		Atributos privados
	*/
	private:
		std::string user;
		std::string pass;
		std::string nome;
		/*
			M�todos p�blicos
		*/
	public:
		/*
			M�todo construtor
		*/
		Funcionario() {
			user = "";
			pass = "";
			nome = "";
		}

		/*
		
			M�todo que l� ficheiro UTILIZADORES.txt e retorna um vetor de std::string com os nomes dos funcion�rios

			Sa�da: std::vector<std::string>
		
		*/
		
		static std::vector<std::string> nomeFuncionarios() {
			std::vector<std::string> FUNCIONARIOS;
			std::vector<std::string> UTILIZADORES = Ficheiro("UTILIZADORES.txt", "L").le();
			
			for (int i = 0; i < UTILIZADORES.size(); i++) {
				std::string NOME = Ferramentas::split(UTILIZADORES[i], '|')[2];
				FUNCIONARIOS.push_back(NOME);
			}
			return FUNCIONARIOS;
		}
};
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <locale.h>
using namespace std;

void limparTela(){
    system("clear");
}

void inicia_tabuleiro(char tabuleiro[3][3]){
    int linha,coluna;
    for(linha=0 ; linha <3; linha++){
         for(coluna=0 ; coluna <3; coluna++){
              tabuleiro[linha][coluna] = '-';
     }
   }
}

void exibe_tabuleiro(char tabuleiro[3][3]){
    cout << "\n";
    for(int linha=0 ; linha <3; linha++){
         for(int coluna=0 ; coluna <3; coluna++){
        cout << tabuleiro[linha][coluna];
     }
     cout << "\n";
   }
}

int conferiTabuleiro(char tabuleiro[3][3]){
    int linha, coluna;

for(linha=0; linha <3; linha++){
    if(tabuleiro[linha][0] == 'x' &&  tabuleiro[linha][0] == tabuleiro[linha][1] &&  tabuleiro[linha][1] == tabuleiro[linha][2]){
            return 1;
            exibe_tabuleiro(tabuleiro);
    }else if(tabuleiro[linha][0] == 'o' &&  tabuleiro[linha][0] == tabuleiro[linha][1] &&  tabuleiro[linha][1] == tabuleiro[linha][2]) {
        return 2;
        exibe_tabuleiro(tabuleiro);
          }
        }
    
  for(coluna=0; coluna <3; coluna++){
     if(tabuleiro[0][coluna] == 'x' &&  tabuleiro[0][coluna] == tabuleiro[1][coluna] &&  tabuleiro[1][coluna] == tabuleiro[2][coluna]){
            return 1;
     }else if(tabuleiro[0][coluna] == 'x' &&  tabuleiro[0][coluna] == tabuleiro[1][coluna] &&  tabuleiro[1][coluna] == tabuleiro[2][coluna]) {
          return 2;
         }
        }
    
if(tabuleiro[0][0] != '-' && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[2][2]){
    if(tabuleiro[0][0] == 'x'){
         return 1;
     }else{
          return 2;
          }
      }
if(tabuleiro[0][2] != '-' && tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[2][0]){
      if(tabuleiro[0][2] == 'x'){
           return 1;
       }else{
            return 2;
          }
      }
      return 0;
}
void instrucoes(){
    cout << "\n-Mapa de posições\n\n";
    cout << "7 | 8 | 9\n";
    cout << "__|___|___\n";
    cout << "4 | 5 | 6\n";
    cout << "__|___|___\n";
    cout << "1 | 2 | 3\n\n";


}
void jogo(string nome_jogadorUm, string nome_jogadorDois, int pontuacao_jogadorUm, int pontuacao_jogadorDois){
    char tabuleiro[3][3];
    string nome_jogadorAtual;
    int statusJogo =1;
    int ponteiros; 
    int linhaJogada,colunaJogada;
    int selecionarJogada;
    int rodada=1;
    int opcao_r;
    bool posicionouJogada;
 
}
int main(){
    setlocale(LC_ALL,"");
      
 
    

    return 0;
}

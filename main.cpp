#include <iostream>
#include <locale>
#include "JogoVelha.h"

using namespace std;

int main()
{
    // variáveis e objetos utilizados
    //setlocale (LC_ALL, "");
    char jogarNovamente, opcaoJogo;
    JogoVelha j;

    while(1)
    {
        cout << "Opcoes de jogo:\n";
        cout << " 1 - Jogador VS Jogador\n";
        cout << " 2 - Jogador VS Computador\n";

        cout << "\nDigite a opcao que voce deseja:\n";
        cout << " >>> ";
        cin >> opcaoJogo;
        cin.ignore();

        while(opcaoJogo != '1' && opcaoJogo != '2')
        {
            cout << "opcao invalida.\n";
            cout << "Digite a opcao que voce deseja:\n";
            cout << " >>> ";
            cin >> opcaoJogo;
            cin.ignore();
        }

        if(opcaoJogo == '1')
        {
            j.inicia();
            j.realizaJogadas();
        }

        if(opcaoJogo == '2')
        {
            j.inicia();
            j.realizaJogadasComputador();
        }

        // fim de jogo:
        do
        {
            cout << "Deseja jogar novamente? Digite 1 para \'sim\' // 0 para \'nao\'" << endl;
            cout << " >>> ";
            cin >> jogarNovamente;
            if(jogarNovamente == '1')
            {
                cout << "\nVamos jogar de novo!\n\n";
            }
            else if(jogarNovamente == '0')
            {
                cout << "\nSaindo do programa...\n";
            }
            else
            {
                cout << "Numero digitado invalido.\n";
            }

        } while( jogarNovamente != '0' && jogarNovamente != '1' );

        if(jogarNovamente == '0')
        {
            break;
        }
    }
}

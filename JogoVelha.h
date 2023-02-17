#ifndef JOGOVELHA_H
#define JOGOVELHA_H

#define TAM_MATRIZ 9
/// Se a casa tiver o número 0, ela está vazia. Se tiver o número 1 é porque o jogador 1 jogou lá,
/// e se tiver -1, é porque o jogador 2 jogou naquela posição.

/*
 Matriz 3x3 representa o tabuleiro do jogo da velha. Se a casa tiver o número 0, está vazia.
 Se tiver o número 1 o jogador 1 jogou lá, se tiver -1, o jogador 2 jogou lá.
*/

class JogoVelha
{
    public:
        JogoVelha();
        virtual ~JogoVelha();

        void inicia();                   // inicializa o tabuleiro - 0 em todas as casas;
        void exibeTabuleiro();           // exibe o tabuleiro;
        void printBloco(int l, int c);   // método que mostra um espaço vazio se o valor do elemento na matriz é 0; mostra X, se valor é 1 e O, se valor é -1;
        void realizaJogadas();           // pede ao usuário a linha e coluna em que o jogador vai jogar; verificações são necessárias;
        int checaVencedor();             // verifica se um dos jogadores venceu;
        void realizaJogadasComputador(); // se o usuário escolher jogar contra o computador

    protected:

    private:
        int jogo[3][3];
        int linha, coluna;
        int contQualJogador;            // contador para verificar se é a vez do jogador 1 ou do jogador 2
};

#endif // JOGOVELHA_H

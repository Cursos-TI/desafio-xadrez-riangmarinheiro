#include <stdio.h>

int main(){


    int movimento;         // vai registrar o movimento da peça que o jogador quer fazer
    int opcaojogador = 0;    //Vai registrar a opção do menu escolhida


    while (opcaojogador != 5) {   
    printf("\nXadrez Básico para testes\n");
    printf("Selecione sua opção:\n");
    printf("1. Mover torre\n");    //Conforme requisitos do nivel novato, a torre deve se mover 5 casas a direita
    printf("2. Mover bispo\n");    //Conforme requisitos do nivel novato, o bispo deve se mover 5 casas a diagonal direita (ou seja, 5 cima, e 5 direita)
    printf("3. Mover rainha\n");   //Conforme requisitos do nivel novato, a rainha deve se mover 5 casas a esquerda 
    printf("4. Mover cavalo\n");   //Conforme requisitos do nivel aventureiro, o cavalo se move em L a embaixo-direita (duas baixo, 1 esquerda)
    printf("5. Sair do jogo\n");
    
    scanf("%d", &opcaojogador);
    if (opcaojogador == 5)           //Se o jogador digitar 5, o jogo encerra ou reinicia
    {
    printf("Saindo do jogo, obrigado por testar\n");
    break;          //Break para caso o jogador não decida encerrar o jogo
    }
    switch (opcaojogador)     //Opções de jogo começam
    {
    case 1:    // Movimento Torre ---------
        for (int movimentotorre = 0; movimentotorre < 5; movimentotorre++){   //Instrução for vai repetir o movimento 5x
        printf("Direita\n"); 
    }
    break;
    
    //---------------------- Movimento Bispo
    case 2:
        for(int movimentocimabispo = 0; movimentocimabispo < 5; movimentocimabispo++) {           // Observar comentários da linha abaixo
        printf("Cima\n"); }
        for(int movimentodireitabispo = 0; movimentodireitabispo <5; movimentodireitabispo++)  {  // É utilizado 2 for's para expressar o que foi requisitado sobre a diagonal direita ser "cima e direita" individualmente
        printf("Direita\n"); }
     
    break;
  
    //---------------------Movimento Rainha
    case 3:
        for(int movimentoesquerdarainha = 0; movimentoesquerdarainha < 5; movimentoesquerdarainha++) {
            printf("Esquerda\n");
    }
    break;
    //---------------------Movimento Cavalo
    case 4:
            int movimentoCavaloBaixoDireita = 1;
        while (movimentoCavaloBaixoDireita--)
        {
            for (int movimentoLBaixoDirCavalo = 0; movimentoLBaixoDirCavalo < 2; movimentoLBaixoDirCavalo++){ // Comentarios da linha abaixo
                printf("Baixo\n"); // Imprime "baixo" 2 vezes. Seria mais facil apenas com uma sequencia de for como nas outras peças. Mas foi requisito
            }                       
            printf("Direita\n");    //Após o encerramento do for para baixo, imprime Direita uma unica vez 
           
        break;
        
//Se encerra as opções de peças

    default:
    printf("Opção inválida! Tente novamente\n"); //Caso o jogador insira um numero além de 5
    break;
    }
}
}


    return 0;
}


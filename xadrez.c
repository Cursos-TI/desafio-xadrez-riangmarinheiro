#include <stdio.h>

  void movetorre(int casas) {        //Comandos e lógica para o movimento da torre
        if (casas > 0){
            printf("Direita\n");
            movetorre(casas - 1);
        }
    }
    void movebispocima (int casas) {  //Move o bispo 5 casas para a diagonal cima-direita (ou seja, 5 pra cima e 5 direita.)
        if (casas > 0) {
            printf("Cima\n");
            movebispocima(casas -1);
        }
    }
    void movebispodireita (int casas) {     //Comandos e lógica para o movimento do bispo
        if (casas > 0) {
            printf("Direita\n");
            movebispodireita(casas - 1);
         }       
    }
    


int main(){


   /* int movimento;          registra movimento da peça - não está sendo utilizado, mas vai servir de backup */
    int opcaojogador = 0;    //Vai registrar a opção do menu escolhida
    
  

    while (opcaojogador != 5) {   
    printf("\nXadrez Básico para testes\n");
    printf("Selecione sua opção:\n");
    printf("1. Mover torre\n");    //Conforme requisitos do nivel novato, a torre deve se mover 5 casas a direita
    printf("2. Mover bispo\n");    //Conforme requisitos do nivel novato, o bispo deve se mover 5 casas a diagonal direita (ou seja, 5 cima, e 5 direita)
    printf("3. Mover rainha\n");   //Conforme requisitos do nivel novato, a rainha deve se mover 5 casas a esquerda 
    printf("4. Mover cavalo\n");   //Conforme requisitos do nivel aventureiro, o cavalo se move em L a embaixo-direita (duas baixo, 1 direita). E mudou no nivel mestre, para o sentido inverso (2 cima 1 direita)
    printf("5. Sair do jogo\n");
    
    scanf("%d", &opcaojogador);
    if (opcaojogador == 5)           //Se o jogador digitar 5, o jogo encerra ou reinicia
    {
    printf("Saindo do jogo, obrigado por testar\n");
    break;
    }
    switch (opcaojogador)
    {
    case 1:    // Movimento Torre ---------
    printf("\nVocê escolheu: Torre\n");
    printf("Quantas casas quer mover a torre?\n"); // a direita apenas
    
    int casastorre;               //Vai permitir o jogador a escolher a quant. de casas, junto com o scanf abaixo
    scanf("%d", &casastorre);
        movetorre (casastorre);  //Executa a ação (teoricamente)
    break;

    case 2:    //Movimento Bispo ---------
    printf("\nVocê escolheu: Bispo\n");
    printf("Quantas casas quer mover o bispo?\n");   // a diagonal direita apenas

    int casasbispo;                //Vai permitir o jogador a escolher a quant. de casas, junto com o scanf abaixo
    scanf("%d", &casasbispo);
         movebispocima (casasbispo);          //Executa a ação (teoricamente) , movendo primeiro para cima e depois para a direita (linha abaixo)
         movebispodireita (casasbispo);
    break;
   
    case 3:           //Movimento Rainha ------------------------- (com tentativa de usar while e continue)

    printf("\nVocê escolheu: Rainha\n");
    printf("Quantas casas quer mover a rainha?\n");  // a esquerda apenas

    int casasrainha;       //Vai permitir o jogador a escolher a quant. de casas, junto com o scanf abaixo
    scanf("%d", &casasrainha);

    while (casasrainha > 0) {   //Executa a ação (teoricamente)
        if (casasrainha > 0)
        {
            printf("Esquerda\n");
            casasrainha--;
            continue;
        }
        
    }

    break;

    case 4:    //Movimento Cavalo  (movimento deve ser o mesmo antigo de L, exceto que agora é um L inverso. 2 casas acima e 1 a direita)

    printf("\nVocê escolheu: Cavalo\n"); // não é possivel escolher a orientação ou casas devido aos requisitos          
    for (int i = 0; i < 2; i++) {             //Executa a ação (teoricamente)
        printf("Cima\n");
    }
        for (int i = 0; i < 1; i++) {      //Completa a ação movendo também para a direita, como esperado
        printf("Direita\n");
    }
   
    


    break;

    default:
    printf("Opção inválida! Tente novamente\n"); //Caso o jogador insira um numero além de 5
    break;
    }
}
   return 0;
}


 



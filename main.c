#include <stdio.h>
#include <stdlib.h>

void DesenhaMatriz(char str[3][3])
{
    system("cls");

    printf("\n\t_____|_____|_____");
    printf("\n\t     |     |      \n");
    printf("\t  %c  |  %c  |  %c",str[0][0],str[0][1],str[0][2]);


    printf("\n\t_____|_____|_____");
    printf("\n\t     |     |      \n");
    printf("\t  %c  |  %c  |  %c",str[1][0],str[1][1],str[1][2]);



     printf("\n\t_____|_____|_____");
    printf("\n\t     |     |      \n");
    printf("\t  %c  |  %c  |  %c",str[2][0],str[2][1],str[2][2]);


    printf("\n\t_____|_____|_____");
    printf("\n\t     |     |      ");

    printf("\n\n");


}

 PegarPosicao(char matriz[3][3], int controle)
{
    int num = 0;
    if(controle == 1)printf("Digite a posicao player1:\n");
    if(controle == 0)printf("Digite a posicao player2:\n");
    scanf("%d",&num);

    if(controle == 1)
    {
        if(num == 1 && VerificarPosicao(matriz[0][0])!= 1)matriz[0][0] = 'x';

         if(num == 2 && VerificarPosicao(matriz[0][1]) != 1) matriz[0][1] = 'x';
         if(num == 3 && VerificarPosicao(matriz[0][2]) != 1) matriz[0][2] = 'x';
         if(num == 4 && VerificarPosicao(matriz[1][0]) != 1) matriz[1][0] = 'x';
         if(num == 5 && VerificarPosicao(matriz[1][1]) != 1) matriz[1][1] = 'x';
         if(num == 6 && VerificarPosicao(matriz[1][2]) != 1) matriz[1][2] = 'x';
         if(num == 7 && VerificarPosicao(matriz[2][0]) != 1) matriz[2][0] = 'x';
         if(num == 8 && VerificarPosicao(matriz[2][1]) != 1) matriz[2][1] = 'x';
         if(num == 9 && VerificarPosicao(matriz[2][2]) != 1) matriz[2][2] = 'x';


    }
    else if(controle == 0)
    {
        if(num == 1 && VerificarPosicao(matriz[0][0])!= 1)matriz[0][0] = 'o';
         if(num == 2 && VerificarPosicao(matriz[0][1]) != 1)matriz[0][1] = 'o';
        else if(num == 3 && VerificarPosicao(matriz[0][2]) != 1)matriz[0][2] = 'o';
        else if(num == 4 && VerificarPosicao(matriz[1][0]) != 1)matriz[1][0] = 'o';
        else if(num == 5 && VerificarPosicao(matriz[1][1]) != 1)matriz[1][1] = 'o';
        else if(num == 6 && VerificarPosicao(matriz[1][2]) != 1)matriz[1][2] = 'o';
        else if(num == 7 && VerificarPosicao(matriz[2][0]) != 1)matriz[2][0] = 'o';
        else if(num == 8 && VerificarPosicao(matriz[2][1]) != 1)matriz[2][1] = 'o';
        else if(num == 9 && VerificarPosicao(matriz[2][2]) != 1)matriz[2][2] = 'o';



    }




}

int VerificarPosicao(char matriz[3][3], int controle2)
{
    int result;
    if('o' == matriz || 'x' == matriz)
    {
        result = 1;
        controle2 = 0;
    }
    else result = 0;
    return result;
}

void Jogar(char matriz[3][3], int controle)
{
    DesenhaMatriz(matriz);
    PegarPosicao(matriz,controle);
    DesenhaMatriz(matriz);
}

int Empate(char matriz[3][3], int controle)
{

    int result = 1;

     if(result == 0) controle = 3;
        return result;
}

int vencedor(char matriz[3][3])
{
    int result = 1;
    //linhas em 'o'
    if(matriz[0][0] == 'o' && matriz[0][1] == 'o' && matriz[0][2] == 'o'  ) result = 0;
    else if(matriz[1][0] == 'o' && matriz[1][1] == 'o' && matriz[1][2] == 'o'  ) result = 0;
    else if(matriz[2][0] == 'o' && matriz[2][1] == 'o' && matriz[2][2] == 'o'  ) result = 0;

    //colunas em 'o'
    if(matriz[0][0] == 'o' && matriz[1][0] == 'o' && matriz[2][0] == 'o'  ) result = 0;
    else if(matriz[0][1] == 'o' && matriz[1][1] == 'o' && matriz[2][1] == 'o'  ) result = 0;
    else if(matriz[0][2] == 'o' && matriz[1][2] == 'o' && matriz[2][2] == 'o'  ) result = 0;

    //diagonais e 'o'
    if(matriz[0][2] == 'o' && matriz[1][1] == 'o' && matriz[2][0] == 'o'  ) result = 0;
    if(matriz[0][0] == 'o' && matriz[1][1] == 'o' && matriz[2][2] == 'o'  ) result = 0;

    //linhas em 'x'
    if(matriz[0][0] == 'x' && matriz[0][1] == 'x' && matriz[0][2] == 'x'  ) result = 0;
    else if(matriz[1][0] == 'x' && matriz[1][1] == 'x' && matriz[1][2] == 'x'  ) result = 0;
    else if(matriz[2][0] == 'x' && matriz[2][1] == 'x' && matriz[2][2] == 'x'  ) result = 0;

     //colunas em 'x'
    if(matriz[0][0] == 'x' && matriz[1][0] == 'x' && matriz[2][0] == 'x'  ) result = 0;
    else if(matriz[0][1] == 'x' && matriz[1][1] == 'x' && matriz[2][1] == 'x'  ) result = 0;
    else if(matriz[0][2] == 'x' && matriz[1][2] == 'x' && matriz[2][2] == 'x'  ) result = 0;

    //diagonais e 'x'
    if(matriz[0][2] == 'x' && matriz[1][1] == 'x' && matriz[2][0] == 'x'  ) result = 0;
    if(matriz[0][0] == 'x' && matriz[1][1] == 'x' && matriz[2][2] == 'x'  ) result = 0;




    return result;
}

int main()
{

    char matriz[3][3] = {'1','2','3','4','5','6','7','8','9'};
    int controle = 1,game = 0,draw[3][3];
    printf("\n\nCaso o jogador jogar em uma casa que o outro ja possui uma marcacao aquele perdera a vez.\n\nDigite 1  para confirmar ciencia:\n ");
    scanf("%d",&game);


    while(game)
    {
        Jogar(matriz,controle);
        if(controle == 1) controle = 0; else controle = 1;
        game = vencedor(matriz);
        for(int i =0;i<3;i++)for(int j =0; j<3;j++) if(matriz[i][j] == 'x' || matriz[i][j] == 'o') draw[i][j] = 1;
         if(draw[0][0] == 1 && draw[0][1] == 1  && draw[0][2] == 1)
            if(draw[1][0] == 1 && draw[1][1] == 1  && draw[1][2] == 1)
                if(draw[2][0] == 1 && draw[2][1] == 1  && draw[2][2] == 1)
                {
                    game = 0;
                    controle = 3;

                }

    for(int i =0; i< 3;i++)for(int j =0; j<3;j++)draw[i][j]=0;


    }
    if(controle == 1) printf("\nO Player 2 e o vencedor!!!\n\n"); else if(controle == 0) printf("\nO Player 1 e o vencedor!!!\n\n"); else if(controle ==3)
    printf("\nEmpate!!!\n\n");

    return 0;
}

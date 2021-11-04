#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char jugador1, jugador2;
int main(int argc, char const *argv[]) {
   printf("Escribe el nombre del jugador1: ");
   scanf("%c", &jugador1);

    printf("Escribe el nombre del jugador2: ");
    scanf("%c", &jugador2);

int main();
    srand(time(NULL));

    int matriz [9][9];
    int i, j;

    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            matriz[i][j] = 1 + rand() % 9;
        }
        
    }

    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            printf("%d\t ",matriz[i][j]);
            
    
    return 0; 
        }
    }




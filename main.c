#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 1
#define FALSE 0

int main(){
    
    srand(time(NULL));
    int matriz[9][9];
    int matrizb[9][9];
    int opcion;
    char repetir = TRUE;
    
    do {
        
        // Texto del menú
        printf("Tablero\n");
        printf("\n\nMenu de Opciones:\n\n");
        printf("1. Jugar\n");
        printf("2. Puntuacion\n");
        printf("3. Intrucciones\n");
        printf("0. Salir\n");
        
        printf("\nSeleccione una opcion:");
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1: 
            printf("\n\nusted ha seleccionado la opcion:Jugar\n");
            for (int i = 1; i < 10; i++)
            {
                for (int j = 1; j < 10; j++)
                {
                    matriz[i][j] = rand() % (9 + 1 - 1) + 1;
                    printf("|%d|", matriz[i][j]);
                    
                }
                printf("\n");
            }
            
                break;
                
            case 2:
                printf("Instrucciones de la opcion 2\n");
                system("pause>nul"); // Pausa
                break;
                
            case 3:
                printf("Instrucciones de la opcion 3\n");
                system("pause>nul"); // Pausa            
                break;
            
            case 0:
            	repetir = FALSE;
            	break;
        }        
    } while (repetir);
	 
    return 0;
}
    




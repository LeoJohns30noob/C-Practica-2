#include <stdio.h>

int main(){
    //Este es un comentario 
    printf("\nHola Mundo\n¿Como va el día?\n");
     printf("\nEl programador\nPragmático\n");
     char libro[] = "El programador pragmático";
     printf("Libro: %s\n", libro);
     char telf[] = "7731482079";
     printf("Teléfono: %s\n", telf);
    char color[] = "Amarillo";
     printf("Color: %s\n", color);
     int entero = 100;
     printf("%d\n", entero);
     float decimal = 1.4352345;
     printf("%f\n", decimal);
     int número[] = {1,2,3,4,5};
     printf("%d\n", número[0]);
     char *animales [] = { "perro","gato","tigre"};
     printf("%s\n",animales[1]);
     float pi = 3.14;
     pi = 3.151234452345;
     printf("%f\n", pi);

     //Operadores

     printf("%d\n", 1+1); //2
     printf("%d\n", 1-1); //0
     printf("%d\n", 10*2); //20
     printf("%d\n", 10/2); //5

     //Operadores comparativos
     printf("%d\n", 4 == 4); // 1
     printf("%d\n", 4 == '4'); // 0
     printf("%d\n", 4 != 5); // 1
     printf("%d\n", 4<5); // 1 
     printf("%d\n", 4 >= 50); // 0

     //Operadores lógicos
     printf("%d\n", 1 && 1); // 1
     printf("%d\n", 1 && 0); // 0
     printf("%d\n", 0 && 1); // 0
     printf("%d\n", 0 && 0); // 0
     printf("%d\n", 1 || 1); // 1
     printf("%d\n", 1 || 0); // 1
     printf("%d\n",  0||1); // 1
     printf("%d\n",  0|| 0); // 0

     int autorizado = 1;

    if (autorizado) {
    printf("Puede ingresar\n");
    } else {
    printf("No puede ingresar\n");
    }
    entero = 90;
    if (entero == 99) {
        printf("Es 99\n");
    } else if (entero == 100) {
        printf("Es 100\n");
    } else {
        printf("No es 99 ni 100\n");// Si el número es 90, se ejecutará esta parte
    }

    { char color = 'V';
     // switch acepta int y char
     switch (color) {
        case 'V':
            printf("Éxito\n");
            break;
        case 'A':
            printf("Advertencia\n");
            break;
        default:
            printf("Error\n");
            break;
     }
    }

    return 0;
    
}
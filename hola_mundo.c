#include <stdio.h>
#include "restart.h" //Funcion restart
void sumar(int primero, int segundo) {
    printf("%d\n", primero + segundo);
}

int multiplicar(int primero, int segundo) {
    return primero * segundo; 
}
//Función con struct
typedef struct Lenguaje {
char* nombre;
int año;
} Lenguaje;

void descripcion(Lenguaje lenguaje) {
printf("%s fue creado en %d\n", lenguaje.nombre,lenguaje.año);
}

// Función restart.c
int restar(int a, int b) {
        return a + b;
        }

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
     int numeros[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
     printf("%d\n", numeros[0]);
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

        // Usamos el arreglo animales definido antes char *animales [] = { "perro","gato","tigre"};
        // iniciamos i con 0
        // mientras i sea menor que 3
        // aumentamos i + 1 en cada iteración con i++ para el ciclo FOR
    for (int i = 0; i < 3; i++) {
        printf("%s\n", animales[i]);
        }

        //Usamos valores numeros en for
        for (int i = 0; i < 10; i++) {
        printf("%d\n", numeros[i] + 10);
      }
      //Ahora aplicamos ejemplo con bucle WHILE
      //Usamos int entero definido antes y nombramos una nueva variable
        int emergencia = 111;
        while (entero <= emergencia) {
        printf("%d\n", entero);
        entero++;  
        }
      // Crear una nueva función utilizando void para imprimir un mensaje personalizado
         {  sumar(2, 2); // 4
            sumar(3, 4); // 7 
         }
       //Nueva función con return para multiplicar dos números y mostrar el resultado
         {
       int resultado = multiplicar(3, 2);
            printf("%d\n", resultado); // 6 
        }  

        // Función con struct
        Lenguaje html;
        html.nombre = "HTML";
        html.año = 1993;
        Lenguaje css;
        css.nombre = "CSS";
        css.año = 1996;
        descripcion(html); // 'HTML fue creado en 1993'
        descripcion(css); // 'CSS fue creado en 1996'

        // Función restart
        { int resultado = restar(10, 2);
            printf("%d\n", resultado); // 8
        } 

    return 0;
    
}
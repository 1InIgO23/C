#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    /*Hello world*/
    printf("Hello world!\n");

    /*Data types*/
    int integer = 40; /*Un numero entero*/
    double decimal_numbers = 4.6; /*Numeros decimales*/
    char multiple_letters [] = "Wazap"; /*Se usan los [] para meter más de una letra*/

    /*Variables*/
    char name [] = "John"; /*char es para decir que es un caracter y hay que poner los [] para decir que se van a poner más de uno*/
    int age = 35;
    printf("There was a man named %s.\n", name); /*El %s es para insertar una variable string*/
    printf("He was %d years old.\n", age); /*EL %d es para insertar una variable de numero entero*/
    age = 40; /*Para cambair una variable no hace falta poner lo de char o int*/

    /*Printf*/
    printf("Hello\n"); /*El \n es para crear una nueva línea*/
    printf("Hello\"world\n"); /*El \" es para poner unas comillas"*/
    printf("%d\n", 500); /*Con el %d haces que ponga el valor que está detras de la coma, en este caso un número entero*/
    printf("My favourite %s is %d\n", "number", 10);
    printf("%f\n", 10,88); /*El %f es para números decimales*/

    /*Working with numbers*/
    printf("%f", 4 + 8); /*El %f va a convertir ese resultado en un float*/
    printf("%d", pow(2, 3)); /*Va a imprimir 2^3*/

    return 0;
}
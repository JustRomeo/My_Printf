/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** header
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int my_printf(char *str, ...);

char *main(int ac, char **argv)
{
    int i = 42;
    int h = 8945;
    char c = 'p';
    double d = 567;
    char S[] = "salut";
    char *s = "Epitech";
    long l = 3000000000;
    unsigned int ui = 9800;

    S[1] = 6;
    my_printf("------------Test Basique-------------\n");
    my_printf("  : chaine simple\n");
    my_printf("%% : modulo = %%\n");
    my_printf("b : base binaire = %b\n", h);
    my_printf("c : char = %c\n", c);
    my_printf("d : int = %d\n", i);
    my_printf("f : double = %f\n", d);
    my_printf("l : long basique = %l\n", l);
    my_printf("n : bytes = %n\n");
    my_printf("p : pointer = %p\n", i);
    my_printf("o : Octal number = %o\n", 10);
    my_printf("s : str = %s\n", s);
    my_printf("u : unsigned int = %u\n", ui);
    my_printf("x : hexadecimal = %x\n", h);
    my_printf("S : STR Special = %S\n", S);
    my_printf("X : HEXADECIMAL = %X\n", h);
    my_printf("\n-----------Test Format-------------\n");
    my_printf("format d\' \' : int = % d\n", i);
    my_printf("format d\'  \' : int = %  d\n", i);
    my_printf("format d\'   \' : int = %   d\n", i);
    my_printf("\n-----------Test phrase-------------\n");
    my_printf("Bienvenue a %s, bien meilleur que %d, d'au moins %l de points, mais y'a un bemole, on a pas le droit a la fonction commencant par %c, et dans les salles il fait %f degres c'est chiant\n", s, i, l, c, d);
    my_printf("-----------------------------------\n\n");

    return (0);
}

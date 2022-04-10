/*
** EPITECH PROJECT, 2018
** my_octal.c
** File description:
** header
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *my_putint_in_str(int z);
int my_getnbr(char const *str);
char *my_revstr(char *str);

char *my_octal(int nbr)
{
    int res = 0;
    int i = 0;
    char *resultat = malloc(sizeof(char) * 10);
    
    while (nbr > 0) {
        res = nbr % 8;
        nbr = nbr / 8;
        switch(res) {
        case 0: resultat[i] = '0'; break;
        case 1: resultat[i] = '1'; break;
        case 2: resultat[i] = '2'; break;
        case 3: resultat[i] = '3'; break;
        case 4: resultat[i] = '4'; break;
        case 5: resultat[i] = '5'; break;
        case 6: resultat[i] = '6'; break;
        case 7: resultat[i] = '7'; break;
        }
        i++;
    }
    return(my_revstr(resultat));
}

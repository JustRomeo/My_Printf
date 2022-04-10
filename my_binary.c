/*
** EPITECH PROJECT, 2018
** my_hexa.c
** File description:
** header
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *my_putint_in_str(int z);
int my_getnbr(char const *str);
char *my_revstr(char *str);

char *my_binary(int nbr)
{
    int res = 0;
    int i = 0;
    char *resultat = malloc(sizeof(char) * 10);
    
    while (nbr > 0) {
        res = nbr % 2;
        nbr = nbr / 2;
        switch(res) {
        case 0: resultat[i] = '0'; break;
        case 1: resultat[i] = '1'; break;
        }
        i++;
    }
    return(my_revstr(resultat));
}

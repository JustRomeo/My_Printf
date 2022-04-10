/*
** EPITECH PROJECT, 2018
** test.c
** File description:
** gcc test.c -I../include -L../lib/my -lmy --coverage -lcriterion && clear && ./a.out
*/

#include <criterion/redirect.h>
#include <criterion/criterion.h>

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("hello world\n");
    cr_assert_stdout_eq_str("hello world\n");
}

Test(my_printf, simple_string2, .init = redirect_all_std)
{
    my_printf("abcdefghijklmnopqrstuvwxyz0123456789()+-*/%\n");
    cr_assert_stdout_eq_str("abcdefghijklmnopqrstuvwxyz0123456789()+-*/%\n");
}

Test(my_printf, simple_string3, .init = redirect_all_std)
{
    my_printf("je fais une phrase, pour tester un cas courant...!?\n");
    cr_assert_stdout_eq_str("je fais une phrase, pour tester un cas courant...!?\n");
}

Test(my_printf, simple_string_modulo, .init = redirect_all_std)
{
    my_printf("modulo %%\n");
    cr_assert_stdout_eq_str("modulo %\n");
}

Test(my_printf, simple_string_modulo2, .init = redirect_all_std)
{
    my_printf("le symbole %% est un simple modulo\n");
    cr_assert_stdout_eq_str("le symbole % est un simple modulo\n");
}

Test(my_printf, simple_string_modulo3, .init = redirect_all_std)
{
    my_printf("on peut mettre plusieurs %% a la suite, regarder %% %% %%\n");
    cr_assert_stdout_eq_str("on peut mettre plusieurs % a la suite, regarder % % %\n");
}

Test(my_printf, simple_string_binary, .init = redirect_all_std)
{
    int ui = 29659143;

    my_printf("binary = %b\n", ui);
    cr_assert_stdout_eq_str("binary = 1110001001001000000000111\n");
}

Test(my_printf, simple_string_binary2, .init = redirect_all_std)
{
    int ui = 19462507;

    my_printf("binary = %b\n", ui);
    cr_assert_stdout_eq_str("binary = 1001010001111100101101011\n");
}

Test(my_printf, simple_string_binary3, .init = redirect_all_std)
{
    int ui = 93773055;

    my_printf("binary = %b\n", ui);
    cr_assert_stdout_eq_str("binary = 101100101101101110011111111\n");
}

Test(my_printf, simple_string_char, .init = redirect_all_std)
{
    char c = 'c';

    my_printf("char = %c\n", c);
    cr_assert_stdout_eq_str("char = c\n");
}

Test(my_printf, simple_string_char2, .init = redirect_all_std)
{
    char c = 'q';

    my_printf("char = %c\n", c);
    cr_assert_stdout_eq_str("char = q\n");
}

Test(my_printf, simple_string_char3, .init = redirect_all_std)
{
    char c = 'r';

    my_printf("char = %c\n", c);
    cr_assert_stdout_eq_str("char = r\n");
}

Test(my_printf, simple_string_intd, .init = redirect_all_std)
{
    int i = 42;

    my_printf("int = %d\n", i);
    cr_assert_stdout_eq_str("int = 42\n");
}

Test(my_printf, simple_string_intd2, .init = redirect_all_std)
{
    int i = 84000;

    my_printf("int = %d\n", i);
    cr_assert_stdout_eq_str("int = 84000\n");
}

Test(my_printf, simple_string_intd3, .init = redirect_all_std)
{
    int i = 1000000000;

    my_printf("int = %d\n", i);
    cr_assert_stdout_eq_str("int = 1000000000\n");
}

Test(my_printf, simple_string_double, .init = redirect_all_std)
{
    double l = 54321;

    my_printf("double = %f\n", l);
    cr_assert_stdout_eq_str("double = 54321\n");
}

Test(my_printf, simple_string_double2, .init = redirect_all_std)
{
    double l = 504321;

    my_printf("double = %f\n", l);
    cr_assert_stdout_eq_str("double = 504321\n");
}

Test(my_printf, simple_string_double3, .init = redirect_all_std)
{
    double l = 7654321;

    my_printf("double = %f\n", l);
    cr_assert_stdout_eq_str("double = 7654321\n");
}

Test(my_printf, simple_string_inti, .init = redirect_all_std)
{
    int i = 42;

    my_printf("int = %i\n", i);
    cr_assert_stdout_eq_str("int = 42\n");
}

Test(my_printf, simple_string_inti2, .init = redirect_all_std)
{
    int i = 84000;

    my_printf("int = %i\n", i);
    cr_assert_stdout_eq_str("int = 84000\n");
}

Test(my_printf, simple_string_inti3, .init = redirect_all_std)
{
    int i = 1000000000;

    my_printf("int = %i\n", i);
    cr_assert_stdout_eq_str("int = 1000000000\n");
}

Test(my_printf, simple_string_long, .init = redirect_all_std)
{
    long l = 42000000000;

    my_printf("long = %l\n", l);
    cr_assert_stdout_eq_str("long = 42000000000\n");
}

Test(my_printf, simple_string_long2, .init = redirect_all_std)
{
    long l = 42000000000000;

    my_printf("long = %l\n", l);
    cr_assert_stdout_eq_str("long = 42000000000000\n");
}

Test(my_printf, simple_string_long3, .init = redirect_all_std)
{
    long l = 987654321123456789;

    my_printf("long = %l\n", l);
    cr_assert_stdout_eq_str("long = 987654321123456789\n");
}

Test(my_printf, simple_string_bytes, .init = redirect_all_std)
{
    my_printf("bytes = %n\n");
    cr_assert_stdout_eq_str("bytes = 11\n");
}

Test(my_printf, simple_string_bytes2, .init = redirect_all_std)
{
    my_printf("hello world %n\n");
    cr_assert_stdout_eq_str("hello world 15\n");
}

Test(my_printf, simple_string_bytes3, .init = redirect_all_std)
{
    my_printf("abcdefghijklmnopqrstuvwxyz0123456789()+-*%n\n");
    cr_assert_stdout_eq_str("abcdefghijklmnopqrstuvwxyz0123456789()+-*44\n");
}

Test(my_printf, simple_string_bytes4, .init = redirect_all_std)
{
    my_printf("je fais une phrase, pour tester un cas courant...!?%n\n");
    cr_assert_stdout_eq_str("je fais une phrase, pour tester un cas courant...!?54\n");
}

Test(my_printf, simple_string_octal, .init = redirect_all_std)
{
    int ui = 29659143;

    my_printf("Octa = %o\n", ui);
    cr_assert_stdout_eq_str("Octa = 161110007\n");
}

Test(my_printf, simple_string_octal2, .init = redirect_all_std)
{
    int ui = 19462507;

    my_printf("Octa = %o\n", ui);
    cr_assert_stdout_eq_str("Octa = 112174553\n");
}

Test(my_printf, simple_string_octal3, .init = redirect_all_std)
{
    int ui = 93773055;

    my_printf("Octa = %o\n", ui);
    cr_assert_stdout_eq_str("Octa = 545556377\n");
}

Test(my_printf, simple_string_pointer, .init = redirect_all_std)
{
    int ui = 93773055;

    my_printf("pointer = %p\n", ui);
    cr_assert_stdout_eq_str("pointer = 0x596dcff\n");
}

Test(my_printf, simple_string_pointer2, .init = redirect_all_std)
{
    int ui = 19462507;

    my_printf("pointer = %p\n", ui);
    cr_assert_stdout_eq_str("pointer = 0x128f96b\n");
}

Test(my_printf, simple_string_pointer3, .init = redirect_all_std)
{
    int ui = 29659143;

    my_printf("pointer = %p\n", ui);
    cr_assert_stdout_eq_str("pointer = 0x1c49007\n");
}

Test(my_printf, simple_string_str, .init = redirect_all_std)
{
    char *str = "Epitech";

    my_printf("str = %s\n", str);
    cr_assert_stdout_eq_str("str = Epitech\n");
}

Test(my_printf, simple_string_str2, .init = redirect_all_std)
{
    char *str = "ABCDEFGHIJKLMNOPQRSTUVWXYZzyxwvutsrqponmlkjihgfedcba";

    my_printf("str = %s\n", str);
    cr_assert_stdout_eq_str("str = ABCDEFGHIJKLMNOPQRSTUVWXYZzyxwvutsrqponmlkjihgfedcba\n");
}

Test(my_printf, simple_string_str3, .init = redirect_all_std)
{
    char *str = "A%+-5)5Ghl3e5/ge!t7(?\"pK=";

    my_printf("str = %s\n", str);
    cr_assert_stdout_eq_str("str = A%+-5)5Ghl3e5/ge!t7(?\"pK=\n");
}

Test(my_printf, simple_string_unsigned_int, .init = redirect_all_std)
{
    unsigned int ui = 29000000;

    my_printf("unsigned int = %u\n", ui);
    cr_assert_stdout_eq_str("unsigned int = 29000000\n");
}

Test(my_printf, simple_string_unsigned_int2, .init = redirect_all_std)
{
    unsigned int ui = 42000024;

    my_printf("unsigned int = %u\n", ui);
    cr_assert_stdout_eq_str("unsigned int = 42000024\n");
}

Test(my_printf, simple_string_unsigned_int3, .init = redirect_all_std)
{
    unsigned int ui = 84000000;

    my_printf("unsigned int = %u\n", ui);
    cr_assert_stdout_eq_str("unsigned int = 84000000\n");
}

Test(my_printf, simple_string_hexadecimal, .init = redirect_all_std)
{
    int ui = 29659143;

    my_printf("Hexa = %x\n", ui);
    cr_assert_stdout_eq_str("Hexa = 1c49007\n");
}

Test(my_printf, simple_string_hexadecimal2, .init = redirect_all_std)
{
    int ui = 19462507;

    my_printf("Hexa = %x\n", ui);
    cr_assert_stdout_eq_str("Hexa = 128f96b\n");
}

Test(my_printf, simple_string_hexadecimal3, .init = redirect_all_std)
{
    int ui = 93773055;

    my_printf("Hexa = %x\n", ui);
    cr_assert_stdout_eq_str("Hexa = 596dcff\n");
}

Test(my_printf, simple_string_STR, .init = redirect_all_std)
{
    char str[] = "Epitech";
    str[2] = 4;

    my_printf("STR = %S\n", str);
    cr_assert_stdout_eq_str("STR = Ep\004tech\n");
}

Test(my_printf, simple_string_STR2, .init = redirect_all_std)
{
    char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
    str[2] = 4;
    str[4] = 3;
    str[6] = 1;

    my_printf("STR = %S\n", str);
    cr_assert_stdout_eq_str("STR = AB\004D\003F\001HIJKLMNOPQRSTUVWXYZ\n");
}

Test(my_printf, simple_string_STR3, .init = redirect_all_std)
{
    char str[] = "A%+-5)5Ghl3e5/ge!t7(?\"pK=";
    str[1] = 6;
    str[2] = 5;
    str[3] = 4;
    str[4] = 3;
    str[5] = 2;
    str[6] = 1;

    my_printf("STR = %S\n", str);
    cr_assert_stdout_eq_str("STR = A\006\005\004\003\002\001Ghl3e5/ge!t7(?\"pK=\n");
}

Test(my_printf, simple_string_HEXADECIMAL, .init = redirect_all_std)
{
    int ui = 29659143;

    my_printf("Hexa = %X\n", ui);
    cr_assert_stdout_eq_str("Hexa = 1C49007\n");
}

Test(my_printf, simple_string_HEXADECIMAL2, .init = redirect_all_std)
{
    int ui = 19462507;

    my_printf("Hexa = %X\n", ui);
    cr_assert_stdout_eq_str("Hexa = 128F96B\n");
}

Test(my_printf, simple_string_HEXADECIMAL3, .init = redirect_all_std)
{
    int ui = 93773055;

    my_printf("Hexa = %X\n", ui);
    cr_assert_stdout_eq_str("Hexa = 596DCFF\n");
}

Test(my_printf, simple_string_hard1, .init = redirect_all_std)
{
    int i = 42;
    long l = 3000000000;
    char c = 'p';
    char *s = "Epitech";
    double d = 567;

    my_printf("Bienvenue a %s, bien meilleur que %d, d'au moins %l de points, mais y'a un bemole, on a pas le droit a la fonction commencant par %c, et dans les salles il fait %f degres c'est chiant\n", s, i, l, c, d);
    cr_assert_stdout_eq_str("Bienvenue a Epitech, bien meilleur que 42, d'au moins 3000000000 de points, mais y'a un bemole, on a pas le droit a la fonction commencant par p, et dans les salles il fait 567 degres c'est chiant\n");
}

Test(my_printf, simple_string_hard2, .init = redirect_all_std)
{
    int i = 844221;
    unsigned int ui = 844221042;
    long l = 3000000000;
    char c = 'p';
    char *s = "Epitech";
    double d = 567;

    my_printf("%% %b %c %d %f %l %p %s %u %x %X\n", i, c, i, d, l, i, s, ui, i, i);
    cr_assert_stdout_eq_str("% 11001110000110111101 p 844221 567 3000000000 0xce1bd Epitech 844221042 ce1bd CE1BD\n");
}

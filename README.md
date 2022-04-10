
# My_Printf


## Balises
- : chaine simple
- % : modulo (ex: "%")
- b : base binaire (ex: 10001011110001)
- c : char (ex: "p")
- d : int (ex: 42)
- f : double (ex: 567)
- l : long basique (ex: 3000000000)
- n : bytes (ex: 15)
- p : pointer (ex: 0x2a)
- o : Octal number (ex: 12)
- s : str (ex: Epitech)
- u : unsigned int (ex: 9800)
- x : hexadecimal (ex: 22f1)
- S : STR Special (ex: \006)
- X : HEXADECIMAL (ex: 22F1)




## Makefile
Le Makefile comporte plusieurs règle d'utilisation. Leur nom et utilisation est listée ci-dessous.

- all: Compile la librairie intégralement.
- clean: Remove les ".o" généré lors de la compilation.
- fclean: Remove les ".o" généré lors de la compilation et la librairie (en .a).
- re: Remove les ".o" généré lors de la compilation et la librairie (en .a) puis recompile la librairie intégralement.
- tests_run: Compile et lance les Tests relatif à la librairie de my_printf.



## Tests
- 51 tests fonctionnel
- 47 Succès
- 4 Fails
- 3 Crash

Fichier | Ligne | Exec | Cover
------- | ----- | ---- | -----
| src/my_binary.c | 12 | 12 | 100% |
| src/my_getdouble.c | 17 | 0 | 0% |
| src/my_getlong.c | 17 | 0 | 0% |
| src/my_getnbr.c | 17 | 0 | 0% |
| src/my_getunbr.c | 17 | 0 | 0% |
| src/my_hexa.c | 26 | 24 | 92% |
| src/my_octal.c | 18 | 18 | 100% |
| src/my_printf.c | 39 | 28 | 71% |
| src/my_put_double.c | 13 | 11 | 84% |
| src/my_put_long.c | 13 | 11 | 84% |
| src/my_put_nbr.c | 13 | 11 | 84% |
| src/my_putchar.c | 3 | 3 | 100% |
| src/my_putint_in_str.c | 23 | 0 | 0% |
| src/my_putpointer.c | 4 | 4 | 100% |
| src/my_putspecstr.c | 16 | 16 | 100% |
| src/my_putstr.c | 6 | 6 | 100% |
| src/my_revstr.c | 14 | 14 | 100% |
| src/my_strcat.c | 14 | 0 | 0% |
| src/my_strlen.c | 5 | 5 | 100% |
| src/my_strlowercase.c | 7 | 7 | 100% |
| src/my_strncat.c | 14 | 0 | 0% |
| src/my_strncmp.c | 2 | 0 | 0% |
| src/my_strncpy.c | 4 | 0 | 0% |
| tests/test.c | 264 | 252 | 95% |
|------------------------|-----|-----|----- |
|TOTAL | 578 | 422 | 73% |
|------------------------|-----|-----|----- |
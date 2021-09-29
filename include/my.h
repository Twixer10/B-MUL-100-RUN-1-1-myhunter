/*
** EPITECH PROJECT, 2020
** MY LIB
** File description:
** NO DESCRIPTION FOR YOU <3
*/

typedef int my_bool;
#define false 0
#define true  1


void my_putchar(char c);
char *my_strstr(char *str, char const *to_find);
int my_isneg(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(int nb);
int my_strncmp(char const *s1, char const *s2, int n);
void my_swap(int *a, int *b);
char *my_strupcase(char *str);
int my_putstr(char const *str);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
char *my_strcapitalize(char *str);
int my_getnbr(char const *str);
int my_str_isalpha(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isnum(char const *str);
int my_compute_power_rec(int nb, int power);
int my_str_islower(char const *str);
int my_compute_square_root(int nb);
int my_str_isupper(char const *str);
int my_is_prime(int nb);
int my_str_isprintable(char const *str);
int my_find_prime_sup(int nb);
int my_showstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_showmem(char const *str, int size);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *str , char const *to_add);
char *my_revstr(char *str);
char *my_strncat(char *dest, char const *src, int nb);
char my_charlowcase(char str);
int my_str_isalphanum(char c);
int my_strlen_alphanum(char *str);
void put_unsigned_int(unsigned int n);
void put_long_int(long int n);
void to_binary(int n);
void to_hexadecimal_min(int n);
void to_hexadecimal_maj(int n);
void address(long long n);
void to_octal(int n);
void my_printf(char const *s, ...);
char *my_itoa(int nb);
int get_int_len (int value);
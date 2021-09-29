/*
** EPITECH PROJECT, 2020
** B-MUL-100-RUN-1-1-myhunter-thomas.techer
** File description:
** get_int_len
*/

int get_int_len (int value)
{
    int l = 1;

    while (value > 9) { 
        l++;
        value /= 10;
    }
    return l;
}
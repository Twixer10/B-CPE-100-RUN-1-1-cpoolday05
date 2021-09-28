/*
** EPITECH PROJECT, 2020
** My Compute Factory Recursive
** File description:
** No Description
*/

int my_compute_factorial_rec(int nb)
{
    if (nb < 0)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    int to_return = nb;
    to_return = to_return *  my_compute_factorial_rec(nb - 1);
    return (to_return);
}

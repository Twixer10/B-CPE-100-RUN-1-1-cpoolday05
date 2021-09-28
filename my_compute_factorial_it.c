/*
** EPITECH PROJECT, 2020
** My Compute Factory
** File description:
** No Description
*/

int my_compute_factorial_it(int nb)
{
    if (nb < 0)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    int to_return = 1;
    while (nb > 1)
    {
        to_return = to_return * nb;
        nb = nb - 1;
    }
    return (to_return);
}

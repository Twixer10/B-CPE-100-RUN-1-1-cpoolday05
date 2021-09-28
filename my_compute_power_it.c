/*
** EPITECH PROJECT, 2020
** My Compute Power It
** File description:
** No description
*/
int my_compute_power_it(int nb, int p)
{
    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    int i = 1;
    while (p != 0)
    {
        i = i * nb;
        p = p - 1;
    }
    return (i);
}

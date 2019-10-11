
/*
** EPITECH PROJECT, 2019
** header
** File description:
** derder
*/

int my_show_param_array(struct info_param const *par)
{
    int k;

    k = 0;
    while (par[i].str)
    {
        my_put_nbr(par[k].length);
        my_putchar('\n');
        my_putstr(par[k].str);
        my_putchar('\n');
        my_putstr(par[k].copy);
        my_putchar('\n');
        my_show_word_array(par[k].word_array);
        my_putchar('\n');
        k++;
    }
    return (0);
}


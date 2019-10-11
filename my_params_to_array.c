/*
** EPITECH PROJECT, 2019
** header
** File description:
** deader
*/

struct info_param *my_params_to_array(int ac, char **av)
{

    int i  = 0;
    struct info_param **table;
    table = malloc(sizeof(struct info_param*)  + 1);

    if (table == 0){
        return (0);
    }

    while (i < ac){
        table[i] = malloc(sizeof(struct info_param));
        table[i]->length = my_strlen(av[k]);
        table[i]->str = av[k];
        table[i]->copy = my_strcpy(av[k]);
        table[i]->word_array = my_show_word_array(av[k]);
        i++;
    }
    table[i] = 0;
    return (*table);
}

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_puterror(void)
{
    write(1, "Error\n", 6);
}

int main(int argc, char **argv)
{
    int i = 0, counter = 0, size = 4, pers_size = size * size;
    char *perspective = (char *)malloc(pers_size * sizeof(char));

    if (argc != 2)
    {
        ft_puterror();
        free(perspective);
        return (1);
    }
    while (argv[1][i] != '\0')
    {
        if (argv[1][i] == ' ')
            i++;
        else if (argv[1][i] >= '1' && argv[1][i] <= size + '0')
            perspective[counter++] = argv[1][i++];
        else
        {
            ft_puterror();
            free(perspective);
            return (1);
        }
    }
    if (counter != pers_size)
    {
        ft_puterror();
        free(perspective);
        return (1);
    }
    for (i = 0; i < pers_size; i++)
    {
        ft_putchar(perspective[i]);
        if (i < pers_size - 1)
            ft_putchar(',');
    }
    free(perspective);
    return (0);
}

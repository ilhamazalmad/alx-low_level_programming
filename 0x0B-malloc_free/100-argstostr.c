#include "main.h"

char *argstostr(int ac, char **av)
{
    char *s;
    int i;

    if ((ac == 0) || (av == NULL))
        return (NULL);
    s = malloc (ac * sizeof(char *));
    if (s == NULL)
        return (NULL);
    for (i = 0; i < ac; i++)
        s[i] = *av[i];
    return s;
}

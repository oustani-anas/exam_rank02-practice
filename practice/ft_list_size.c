

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
    int i;
    t_list *list;

    i = 0;
    list = begin_list;
    while (list)
    {
        i++;
        list = list->next;
    }
    return (i);
}
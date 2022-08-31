
#include <stdlib.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
}   t_list;

t_list *ft_lstnew(void *content)
{
    t_list *new;

    new = (t_list *)malloc(sizeof(t_list));
    if(!new)
        return(NULL);
    new->content = content;
    new->next = NULL;
    return(new);
}
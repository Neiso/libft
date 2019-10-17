#include "libft.h"

int main()
{
    t_list *list;
    t_list *node;
    t_list *node_a;
    char *str = "YO";

    list = ft_lstnew(str);
    str = "BA";
    node = ft_lstnew(str);
    ft_lstadd_front(&list, node);
    node_a = ft_lstlast(node);
    printf("%s\n", node_a->content);
}
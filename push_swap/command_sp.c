#include "push_swap.h"

void	command_sab(t_DoublyList *dList, int flag)
{
	t_DoublyListNode	*temp;
	t_DoublyListNode	*next;

	if (dList->currentElementCount < 2)
		return ;
	temp = pop_dl(dList);
	next = pop_dl(dList);
	add_dl_element(dList, temp->data);
	add_dl_element(dList, next->data);
	free(temp);
	free(next);
	if (flag == SA)
		write(1, "sa\n", 3);
	else if (flag == SB)
		write(1, "sb\n", 3);
}

void	command_ss(t_DoublyList *a, t_DoublyList *b)
{
	command_sab(a, SS);
	command_sab(b, SS);
	write(1, "ss\n", 3);
}

void	command_pab(t_DoublyList *a, t_DoublyList *b, int flag)
{
	t_DoublyListNode	*buf;

	if (flag == PA && b->currentElementCount != 0)
	{
		buf = pop_dl(b);
		add_dl_element(a, buf->data);
		free(buf);
		write(1, "pa\n", 3);
	}
	else if (flag == PB && a->currentElementCount != 0)
	{
		buf = pop_dl(a);
		add_dl_element(b, buf->data);
		free(buf);
		write(1, "pb\n", 3);
	}
}

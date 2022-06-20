#include "push_swap.h"

void	sort_two_elements(t_DoublyList *a)
{
	if (a->headerNode->data > a->headerNode->next->data)
		command_sab(a, SA);
}

void	sort_three_elements(t_DoublyList *a)
{
	int		head;
	int		bottom;
	int		middle;

	head = a->headerNode->data;
	bottom = a->tailNode->data;
	middle = a->headerNode->next->data;
	if (head > middle && bottom > head && middle < bottom)
		command_sab(a, SA);
	if (head > middle && bottom < head && bottom > middle)
		command_rab(a, RA);
	if (head < middle && head > bottom)
		command_rrab(a, RRA);
	if (head > middle && middle > bottom)
	{
		command_sab(a, SA);
		command_rrab(a, RRA);
	}
	if (head < middle && head < bottom && bottom < middle)
	{
		command_sab(a, SA);
		command_rab(a, RA);
	}
}

void	sort_five_elements(t_DoublyList *a, t_DoublyList *b)
{
	
}

void	sorting(t_DoublyList *a, t_DoublyList *b)
{
	if (a->currentElementCount == 2)
		sort_two_elements(a);
	if (a->currentElementCount == 3)
		sort_three_elements(a);
	if (a->currentElementCount == 5)
		sort_five_elements(a, b);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:56:56 by tpicoule          #+#    #+#             */
/*   Updated: 2023/04/03 11:35:15 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int			i;
	t_dblist	*pilea;
	t_dblist	*pileb;

	if (argc <= 1)
		return (write(1, "Error\n", 6));
	if (ft_check_args_3(argv) != 0)
		return (write(1, "Error\n", 6));
	if (ft_check_args(argv) != 0)
		return (write(1, "Error\n", 6));
	if (ft_check_args_2(argc, argv) != 0)
		return (write(1, "Error\n", 6));
	i = 1;
	pilea = dlist_new();
	pileb = dlist_new();
	while (argv[i])
	{
		pilea = ft_add_bot(pilea, ft_atoi(argv[i]));
		i++;
	}
	ft_algo(argc, pilea, pileb);
	/* if (argc == 3)
		ft_two(pilea);
	else if (argc == 4)
		ft_tree(pilea);
	else if (argc == 5 || argc == 6)
		ft_five(pilea, pileb);
	else if (pilea->length <= 100)
		ft_sort(pilea, pileb, 18);
	else if (pilea->length <= 500)
		ft_sort(pilea, pileb, 50); */
	system("leaks a.out");
	return (0);
}

int	ft_algo(int argc, t_dblist *pilea, t_dblist *pileb)
{
	if (argc == 3)
		ft_two(pilea);
	else if (argc == 4)
		ft_tree(pilea);
	else if (argc == 5 || argc == 6)
		ft_five(pilea, pileb);
	else if (pilea->length <= 100)
		ft_sort(pilea, pileb, 18);
	else if (pilea->length <= 500)
		ft_sort(pilea, pileb, 50);
	return (0);
}
	//ft_print_pile(pilea);
	//printf("\n pilea \n\n\n");
	//ft_print_pile(pileb);
	//printf("\n pileb \n\n\n");
	//instru
	//printf("pilea->length=%d\n", pilea->length);
	//printf("\n===========after algo==========\n\n");
	//printf("pilea->length=%d\n", pilea->length);
	//ft_print_pile(pilea);
	//printf("\n pilea\n\n\n");
	//ft_print_pile(pileb);
	//printf("\n pileb\n\n\n");

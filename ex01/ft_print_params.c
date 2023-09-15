/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 08:53:55 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/15 08:53:56 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0; 
	while (*str)
	{
		i ++;
		str ++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < (argc))
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i ++;
	}
	return (0);
}

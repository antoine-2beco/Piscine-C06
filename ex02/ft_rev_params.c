/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:26:39 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/15 09:26:41 by ade-beco         ###   ########.fr       */
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
	while ((argc - i) > 0)
	{
		write(1, argv[argc - i], ft_strlen(argv[argc - i]));
		write(1, "\n", 1);
		i ++;
	}
	return (0);
}

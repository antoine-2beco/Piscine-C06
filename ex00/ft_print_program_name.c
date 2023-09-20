/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:43:31 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/14 16:44:04 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	temp;

	i = 0;
	argc = 0;
	while (argv[0][i] != '\0')
	{
		temp = argv[0][i];
		write(1, &temp, 1);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:36:48 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/15 09:36:50 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0; 
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if ((s1[i] > s2[i]) || (s1[i] < s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s1[i] == '\0') && (s2[i] == '\0'))
		return (0);
	else
		return (s1[i] - s2[i]);
}

char ft_strsort(int size, char *str[])
{
	int		i;
	int 	j;
	char	*a;
	char	*b;
	
	i = 0;
	j = 1;
	while (i != (size - 1))
	{
		while ((j < (size - 1)) && (i != (size - 1)))
		{
			a = str[i];
			b = str[j];
			if (ft_strcmp(a, b) > 0)
			{
				str[i] = b;
				str[j] = a;
			}
			j ++;
		}
		i++;
		j = i;
	}
	return (**str);
}

// int argc, char *argv[]
int	main(int argc, char *argv[])
{
	int	i;
	//char argv[5][8] = {"./a.out", "test1", "test2", "test3"};
	//int argc = 4;
	char *args[argc];

	*argv[8] = ft_strsort(argc - 1, argv);
	i = 0;
	while (i < (argc - 1))
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i ++;
	}
	return (0);
}
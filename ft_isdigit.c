/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:47:02 by martaga2          #+#    #+#             */
/*   Updated: 2024/01/08 10:02:55 by martaga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	while (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;

	c = '3';
	printf("elresultado con la función mía: %d\n", ft_isdigit(c));
	printf("el resultado con la función original es: %d\n", isdigit(c));
	return (0);
}
*/
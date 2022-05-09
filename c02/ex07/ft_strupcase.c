/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 23:27:09 by mfeldman          #+#    #+#             */
/*   Updated: 2022/02/11 10:49:35 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char	*a;

	a = str;
	while (*a)
	{
		if (*a >= 'a' && *a <= 'z')
		{
			*a -= 32;
		}
		a++;
	}
	return (str);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyou <tyou@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 11:34:43 by tyou              #+#    #+#             */
/*   Updated: 2021/01/08 15:05:58 by tyou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;
	size_t	cnt;
	char	*save;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		n = 0;
		cnt = 0;
		while (big[i] == little[n] && i < len)
		{
			save = (char *)big + i - cnt;
			i++;
			n++;
			cnt++;
			if (little[n] == '\0')
				return (save);
		}
		i++;
	}
	return (NULL);
}
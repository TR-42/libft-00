/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujita <kfujita@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:57:26 by kfujita           #+#    #+#             */
/*   Updated: 2022/04/07 00:25:15 by kfujita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*p_c_dst;
	unsigned char	*p_c_src;
	signed char		direction;

	if (src == dst || n == 0)
		return (dst);
	p_c_dst = (unsigned char *)dst;
	p_c_src = (unsigned char *)src;
	if (dst < src)
	{
		p_c_dst += n - 1;
		p_c_src += n - 1;
		direction = -1;
	}
	else
		direction = 1;
	while (n-- > 0)
	{
		*p_c_dst = *p_c_src;
		p_c_dst += direction;
		p_c_src += direction;
	}
	return (dst);
}

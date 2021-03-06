/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlaine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 16:09:08 by arlaine           #+#    #+#             */
/*   Updated: 2019/03/03 16:09:09 by arlaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	if (nb < 0)
		return (0);
	else
	{
		i = 1;
		while (i < nb)
		{
			if ((i * i) == nb)
				return (i);
			i++;
		}
		return (0);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 17:10:23 by nchin             #+#    #+#             */
/*   Updated: 2018/09/20 11:59:16 by nchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int nb;
	int negat;

	i = 0;
	nb = 0;
	negat = 0;
	while ((str[i] == ' ') || (str[i] == '\f') || (str[i] == '\t') || (str[i] == '\n') \
	|| (str[i] == '\r') || (str[i] == '\v'))
		i++;
	if (str[i] == '-')
		negat = 1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	if (negat == 1)
		return (-nb);
	else
		return (nb);
}

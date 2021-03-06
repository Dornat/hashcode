/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_res_u_flags.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpolosuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/25 15:01:48 by dpolosuk          #+#    #+#             */
/*   Updated: 2018/01/01 13:09:46 by dpolosuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

char	*ft_pf_res_u_flags(char *s, t_format *all)
{
	char	*res;

	res = s;
	if (!(*all).flag_apostrophe && !(*all).flag_minus && !(*all).flag_plus && \
	!(*all).flag_space && !(*all).flag_zero && !(*all).flag_hash)
		return (s);
	if ((*all).flag_apostrophe && (*all).len_of_raw_s > 3)
		res = ft_pf_res_d_i_flags_apostrophe(s, all);
	if ((*all).flag_zero)
		res = ft_pf_res_d_i_flags_zero(res, all);
	if ((*all).flag_minus)
		res = ft_pf_res_u_flags_minus(res);
	return (res);
}

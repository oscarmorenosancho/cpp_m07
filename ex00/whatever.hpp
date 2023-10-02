/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:07:20 by omoreno-          #+#    #+#             */
/*   Updated: 2023/10/02 11:52:22 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WHATEVER_HPP_
# define _WHATEVER_HPP_

template <typename T>
void swap(T &arg1, T &arg2)
{
	T	temp;

	temp = arg1;
	arg1 = arg2;
	arg2 = temp;
}

template <typename T>
T min(T arg1, T arg2)
{
	if (arg1 < arg2)
		return (arg1);
	return (arg2);
}

template <typename T>
T max(T arg1, T arg2)
{
	if (arg1 > arg2)
		return (arg1);
	return (arg2);
}

#endif
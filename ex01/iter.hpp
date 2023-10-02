/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:07:20 by omoreno-          #+#    #+#             */
/*   Updated: 2023/10/02 12:38:03 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WHATEVER_HPP_
# define _WHATEVER_HPP_
# include <iostream>

template <typename T>
void iter(T *addr, size_t size, void (*funct)(T& el))
{
	for (size_t	i = 0; i<size; i++)
		funct(addr[i]);
}

template <typename T>
void print_arg(T& el)
{
	std::cout << el <<std::endl;
}

#endif
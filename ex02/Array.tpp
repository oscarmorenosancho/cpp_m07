/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:24:29 by omoreno-          #+#    #+#             */
/*   Updated: 2023/10/04 13:38:54 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <class T> Array<T>::Array(): sizeTooLowException(STLE),
	indexOutOfRangeException(IOORE)
{
	size = 0;
	data = nullptr;
}

template <class T> Array<T>::Array(int n): sizeTooLowException(STLE),
		indexOutOfRangeException(IOORE)
{
	if (n < 0)
		throw sizeTooLowException;
	size = n;
	data = new T[size];
}

template <class T> Array<T>::~Array()
{
	if (data)
	{
		delete[](data);
		size = 0;
		data = nullptr;
	}
}

template <class T> Array<T>::Array(const Array<T>& b): sizeTooLowException(STLE),
		indexOutOfRangeException(IOORE)
{
	(void)b;
}

template <class T> Array<T>& Array<T>::operator=(const Array<T>& b)
{
	return new Array<T>(b);
}

template <class T> T& Array<T>::operator[](int i)
{
	if (i < 0 || i > size)
		throw indexOutOfRangeException;
	return (data[i]);
}

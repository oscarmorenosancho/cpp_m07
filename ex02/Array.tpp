/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:24:29 by omoreno-          #+#    #+#             */
/*   Updated: 2023/10/05 10:42:27 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <class T> Array<T>::Array(): negativeSizeException(STLE),
	indexOutOfRangeException(IOORE)
{
	size = 0;
	data = nullptr;
}

template <class T> Array<T>::Array(int n): negativeSizeException(STLE),
		indexOutOfRangeException(IOORE)
{
	if (n < 0)
		throw negativeSizeException;
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

template <class T> Array<T>::Array(const Array<T>& b): negativeSizeException(STLE),
		indexOutOfRangeException(IOORE)
{
	size = b.size;
	data = new T[size];
	for(int i = 0; i < size; i++)
		data[i] = b.data[i];
}

template <class T> Array<T>& Array<T>::operator=(const Array<T>& b)
{
	if (data)
		delete[](data);
	size = b.size;
	data = new T[size];
	for(int i = 0; i < size; i++)
		data[i] = b.data[i];
	return (*this);
}

template <class T> T& Array<T>::operator[](int i)
{
	if (i < 0 || i > size - 1 || !data)
		throw indexOutOfRangeException;
	return (data[i]);
}

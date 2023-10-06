/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:24:29 by omoreno-          #+#    #+#             */
/*   Updated: 2023/10/06 14:30:49 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_TPP_
# define _ARRAY_TPP_
#include "Array.hpp"

template <class T> Array<T>::Array(): negativeSizeException(STLE),
	indexOutOfRangeException(IOORE)
{
	_size = 0;
	data = nullptr;
}

template <class T> Array<T>::Array(int n): negativeSizeException(STLE),
		indexOutOfRangeException(IOORE)
{
	if (n < 0)
		throw negativeSizeException;
	_size = n;
	data = new T[_size];
}

template <class T> Array<T>::~Array()
{
	if (data)
	{
		delete[](data);
		_size = 0;
		data = nullptr;
	}
}

template <class T> Array<T>::Array(const Array<T>& b): negativeSizeException(STLE),
		indexOutOfRangeException(IOORE)
{
	_size = b._size;
	data = new T[_size];
	for(int i = 0; i < _size; i++)
		data[i] = T(b.data[i]);
}

template <class T> Array<T>& Array<T>::operator=(const Array<T>& b)
{
	if (data)
		delete[](data);
	_size = b._size;
	data = new T[_size];
	for(int i = 0; i < _size; i++)
		data[i] = T(b.data[i]);
	return (*this);
}

template <class T> T& Array<T>::operator[](int i)
{
	if (i < 0 || i > _size - 1 || !data)
		throw indexOutOfRangeException;
	return (data[i]);
}

template <class T> int Array<T>::size(void) const
{
	return (_size);
}


#endif
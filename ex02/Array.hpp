/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:24:19 by omoreno-          #+#    #+#             */
/*   Updated: 2023/10/06 14:29:33 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_HPP_
# define _ARRAY_HPP_
# include <stdexcept>
# include <string>
# define STLE "Exception: Size too Low"
# define IOORE "Exception: Array Index Out Of Range"

template <class T>
class Array
{
private:
	int							_size;
	T*							data;
	const std::underflow_error 	negativeSizeException;
	const std::out_of_range 	indexOutOfRangeException;
	
public:
	Array();
	Array(int n);
	~Array();
	Array(const Array<T>& b);
	Array<T>& operator=(const Array<T>& b);
	T& operator[](int i);
	int	size(void) const;
};

# include "Array.tpp"

#endif
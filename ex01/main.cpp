/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:06:28 by omoreno-          #+#    #+#             */
/*   Updated: 2023/10/04 13:44:45 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iter.hpp>

void fill_int(int& i)
{
	static int count = 0;
	i = count;
	count++;
}

void fill_str(std::string& str)
{
	static int count = 0;
	str = "string_" + std::to_string(count);
	count++;
}

typedef 	struct s_data
{
	int			i;
	std::string	str;
}	t_data;

std::ostream& operator<<(std::ostream& os, const t_data& b)
{
	os << "str: " << b.str << " int: " << b.i;
	return (os);
}

void fill_data(t_data& data)
{
	static int count = 0;
	data.i = count;
	data.str = "string_" + std::to_string(count);
	count++;
}

int	main(void) 
{
	int			int_ar[10];
	std::string	str_ar[10];
	t_data		data_ar[10];

	iter(int_ar, 10, fill_int);
	iter(int_ar, 10, print_arg);
	iter(str_ar, 10, fill_str);
	iter(str_ar, 10, print_arg);
	iter(data_ar, 10, fill_data);
	iter(data_ar, 10, print_arg);
	return (0);
}

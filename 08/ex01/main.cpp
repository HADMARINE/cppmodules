/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhojoon <lhojoon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:45:11 by lhojoon           #+#    #+#             */
/*   Updated: 2025/07/23 14:52:38 by lhojoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int	main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "\nCopy assignment from first element\n";
	Span sp2 = sp;
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << "\nCopy operator from first element\n";
	Span sp3 = Span(2);
	sp3.addNumber(1);
	sp3.addNumber(1);
	sp3 = sp;
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << "\nCreation of 10001 element vector and filling span(10001)\n";
	std::vector<int> v(10001, 5);
	Span	sp4(10001);
	sp4.addNumber(v.begin(), v.end());
	std::cout << sp4.shortestSpan() << std::endl;
	std::cout << sp4.longestSpan() << std::endl;
	try
	{
		std::cout << "\nTrying to fill span(10000) with 10001 elements\n";
		Span sp5(10000);
		sp5.addNumber(v.begin(), v.end());
		std::cout << "reached end\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}


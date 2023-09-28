/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:49:52 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/28 13:59:58 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_H
#define BRAIN_H
#include <iostream>
#include <string>

class Brain{
    private :
        std :: string ideas[100];
    public:
        Brain();
        Brain(const Brain &obj);
        Brain &operator =(const Brain &obj);
        ~Brain();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fileonar <fileonar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 19:14:01 by fileonar          #+#    #+#             */
/*   Updated: 2026/10/08 19:21:25 by fileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void swap(T& a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
const T& min(T& a, T& b)
{
    if (a < b)
        return a;
    return b;
}

template <typename T>
const T& max(T& a, T& b)
{
    if (a > b)
        return a;
    return b;
}
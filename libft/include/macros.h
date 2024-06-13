/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   macros.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angsanch <angsanch@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:49:15 by angsanch          #+#    #+#             */
/*   Updated: 2024/06/13 18:49:15 by angsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MACROS_H_
    #define MACROS_H_

    #ifndef ABS
        #define ABS(num)    ((num >= 0) ? num : -num)
    #endif
    #ifndef MAX
        #define MAX(n1, n2) ((n1 >= n2) ? (n1) : (n2))
    #endif

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:18:41 by pmedina-          #+#    #+#             */
/*   Updated: 2022/02/16 21:19:01 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_H
# define FWOOSH_H

#include "ASpell.hpp"

class Fwoosh : public ASpell {
	public:
		Fwoosh();
		virtual ~Fwoosh();
		Fwoosh* clone() const;
};

#endif

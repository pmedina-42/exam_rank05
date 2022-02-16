/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:18:41 by pmedina-          #+#    #+#             */
/*   Updated: 2022/02/16 22:16:47 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_H
# define FIREBALL_H

#include "ASpell.hpp"

class Fireball : public ASpell {
	public:
		Fireball();
		virtual ~Fireball();
		Fireball* clone() const;
};

#endif

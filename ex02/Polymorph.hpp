/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:18:41 by pmedina-          #+#    #+#             */
/*   Updated: 2022/02/16 22:20:03 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_H
# define POLYMORPH_H

#include "ASpell.hpp"

class Polymorph : public ASpell {
	public:
		Polymorph();
		virtual ~Polymorph();
		Polymorph* clone() const;
};

#endif

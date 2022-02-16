/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:18:41 by pmedina-          #+#    #+#             */
/*   Updated: 2022/02/16 23:07:30 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_H
# define BRICKWALL_H

#include "ATarget.hpp"

class BrickWall : public ATarget {
	public:
		BrickWall();
		virtual ~BrickWall();
		BrickWall* clone() const;
};

#endif

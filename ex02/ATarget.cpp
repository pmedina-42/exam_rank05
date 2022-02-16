/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:40:34 by pmedina-          #+#    #+#             */
/*   Updated: 2022/02/16 21:52:36 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(std::string type) : _type(type) { }

ATarget::~ATarget() { }

std::string const& ATarget::getType() const {
	return _type;
}

void ATarget::getHitBySpell(ASpell const &spell) const {
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
	return ;
}

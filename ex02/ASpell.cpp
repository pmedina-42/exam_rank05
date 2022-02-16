/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:40:34 by pmedina-          #+#    #+#             */
/*   Updated: 2022/02/16 21:52:28 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects) { }

ASpell::~ASpell() { }

std::string const& ASpell::getName() const {
	return _name;
}

std::string const& ASpell::getEffects() const {
	return _effects;
}

void ASpell::launch(ATarget const &target) const {
	target.getHitBySpell(*this);
	return ;
}

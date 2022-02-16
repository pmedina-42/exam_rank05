/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:27:41 by pmedina-          #+#    #+#             */
/*   Updated: 2022/02/16 23:18:21 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell *spell) {
	_spells.insert(std::pair<std::string, ASpell*>(spell->getName(), spell));
	return ;
}

void SpellBook::forgetSpell(std::string const &sName) {
	std::map<std::string, ASpell*>::iterator it = _spells.find(sName);
	if (it != _spells.end()) {
		delete it->second;
		_spells.erase(sName);
	}
	return ;
}

ASpell* SpellBook::createSpell(std::string const &sName) {
	std::map<std::string, ASpell*>::iterator it = _spells.find(sName);
	if (it != _spells.end()) {
		if (!sName.compare("Fwoosh"))
			return new Fwoosh();
		if (!sName.compare("Fireball"))
			return new Fireball();
		if (!sName.compare("Polymorph"))
			return new Polymorph();
	}
	return NULL;
}

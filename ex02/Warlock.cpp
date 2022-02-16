/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:07:27 by pmedina-          #+#    #+#             */
/*   Updated: 2022/02/16 23:16:21 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) { 
	std::cout << _name << ": this looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << _name << ": My job here is done!" << std::endl;
}

std::string Warlock::getName() const {
	return _name;
}

std::string Warlock::getTitle() const {
	return _title;
}

void Warlock::setTitle(std::string title) {
	_title = title;
	return ;
}

void Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell) {
	spellBook.learnSpell(spell);
	return ;
}
void Warlock::forgetSpell(std::string sName) {
	spellBook.forgetSpell(sName);
	return ;
}
void Warlock::launchSpell(std::string sName, ATarget &target) {
	ASpell *spell = spellBook.createSpell(sName);
	if (spell)
		spell->launch(target);
	return ;
}

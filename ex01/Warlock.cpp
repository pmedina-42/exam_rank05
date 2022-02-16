/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:07:27 by pmedina-          #+#    #+#             */
/*   Updated: 2022/02/16 22:10:02 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) { 
	std::cout << _name << ": this looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << _name << ": My job here is done!" << std::endl;
	std::map<std::string, ASpell*>::iterator it_begin = _spells.begin();
	std::map<std::string, ASpell*>::iterator it_end = _spells.end();
	while (it_begin != it_end) {
		delete it_begin->second;
		it_begin++;
	}
	_spells.clear();
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
	_spells.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
	return ;
}
void Warlock::forgetSpell(std::string sName) {
	std::map<std::string, ASpell*>::iterator it = _spells.find(sName);
	if (it != _spells.end()) {
		delete it->second;
		_spells.erase(sName);
	}
	return ;
}
void Warlock::launchSpell(std::string sName, ATarget &target) {
	ASpell *spell = _spells[sName];
	if (spell)
		spell->launch(target);
	return ;
}

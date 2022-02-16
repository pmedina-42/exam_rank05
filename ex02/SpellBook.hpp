/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:24:37 by pmedina-          #+#    #+#             */
/*   Updated: 2022/02/16 23:03:24 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_H
# define SPELLBOOK_H

#include <map>
#include <string>
#include <iostream> 
#include "ASpell.hpp"
#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"

class ASpell;

class SpellBook {
	private:
		std::map<std::string, ASpell*> _spells;
	public:
		SpellBook();
		virtual ~SpellBook();
		void learnSpell(ASpell*);
		void forgetSpell(std::string const&);
		ASpell* createSpell(std::string const&);
};

#endif

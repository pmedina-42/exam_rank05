/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:04:42 by pmedina-          #+#    #+#             */
/*   Updated: 2022/02/16 23:15:33 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_H
# define WARLOCK_H

#include <string>
#include <iostream>
#include <map>
#include "SpellBook.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

class ASpell;
class ATarget;

class Warlock {
	private:
		std::string _name;
		std::string _title;
		SpellBook spellBook;
	
	public:
		Warlock(std::string, std::string);
		virtual ~Warlock();
		std::string getName() const;
		std::string getTitle() const;
		void setTitle(std::string);
		void introduce() const;
		void learnSpell(ASpell*);
		void forgetSpell(std::string);
		void launchSpell(std::string, ATarget&);
};

#endif

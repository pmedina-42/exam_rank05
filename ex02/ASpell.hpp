/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:18:41 by pmedina-          #+#    #+#             */
/*   Updated: 2022/02/16 21:23:25 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_H
# define ASPELL_H

#include <string>
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
	private:
		std::string _name;
		std::string _effects;
	
	public:
		ASpell(std::string, std::string);
		virtual ~ASpell();
		std::string const& getName() const;
		std::string const& getEffects() const;
		virtual ASpell* clone() const = 0;
		void launch(ATarget const&) const;
};

#endif

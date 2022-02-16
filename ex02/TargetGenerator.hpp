/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:24:37 by pmedina-          #+#    #+#             */
/*   Updated: 2022/02/16 23:06:33 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_H
# define TARGETGENERATOR_H

#include <map>
#include <string>
#include <iostream> 
#include "ATarget.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"

class ATarget;

class TargetGenerator {
	private:
		std::map<std::string, ATarget*> _targets;
	public:
		TargetGenerator();
		virtual ~TargetGenerator();
		void learnTargetType(ATarget*);
		void forgetTargetType(std::string const&);
		ATarget* createTarget(std::string const&);
};

#endif

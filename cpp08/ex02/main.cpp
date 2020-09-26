/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <louis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 12:08:24 by louis             #+#    #+#             */
/*   Updated: 2020/08/20 12:08:24 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

void explains()
{
	std::stack<int> basic_stack;
	basic_stack.push(42);
	std::cout << "basic_stack.push(42) -- Nous ajoutons la valeur 42 en haut de la stack." << std::endl;
	std::cout
			<< "Essayons tout d'abord avec la classe stack de la lib std. \n[ Le seul moyen à notre disposition pour récupérer la valeur 42 depuis la stack est d'utiliser la fonction top() qui nous renvoie l'objet en haut de la stack. ]"
			<< std::endl;
	std::cout << " -> basic_stack.top() = " << basic_stack.top() << std::endl << std::endl;
	std::cout << "Ajoutons maintenant une nouvelle valeur : 1337 " << std::endl;
	std::cout << "basic_stack.push(1337)" << std::endl;
	basic_stack.push(1337);
	std::cout
			<< "Avec une stack basique de la lib std, nous n'avons maintenant plus aucun moyen d'accéder à la valeur 42 précédemment poussée sur la stack."
			<< std::endl;
	std::cout
			<< "Si nous voulons récupérer cette valeur, il va nous falloir supprimer la valeur 1337 que nous venons de pousser."
			<< std::endl;
	std::cout << " -> basic_stack.pop(); -- Suppression de la valeur en haut de la stack (1337) " << std::endl;
	basic_stack.pop();
	std::cout << " -> basic_stack.top() = " << basic_stack.top() << std::endl << std::endl;
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		if (static_cast<std::string>(av[1]) == "explains")
		{
			explains();
		}
	}

	std::cout << "[Mutantstack] Récupérer les valeurs précédemment rentrées (int) via un itérateur" << std::endl;
	MutantStack<int> mutantStack;
	for (int i = 0; i < 5; ++i)
	{ mutantStack.push(i * i); }
	MutantStack<int>::iterator begin = mutantStack.begin();
	MutantStack<int>::iterator end = mutantStack.end();
	std::cout << "mutantStack.top() = " << mutantStack.top() << std::endl;
	std::cout << "mutantStack.size() = " << mutantStack.size() << std::endl;
	while (begin != end) {
		std::cout << " *begin = " << *begin << std::endl;
		begin++;
	}

	std::cout << "[Mutantstack] Récupérer les valeurs précédemment rentrées (string) via un itérateur [ à l'envers ]" << std::endl;
	MutantStack<std::string> mutantStackString;
	mutantStackString.push("Bonjour, ça va ?");
	mutantStackString.push("Oui très bien et toi ?");
	mutantStackString.push("ça va plutôt bien.");
	MutantStack<std::string>::iterator sbegin = mutantStackString.begin();
	MutantStack<std::string>::iterator send = mutantStackString.end();
	std::cout << "mutantStackString.top() = " << mutantStackString.top() << std::endl;
	std::cout << "mutantStackString.size() = " << mutantStackString.size() << std::endl;
	while (sbegin != send) {
		send--;
		std::cout << " *end = " << *send << std::endl;
	}
	return 0;
}

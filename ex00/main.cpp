/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:33:48 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/16 11:10:31 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}

/*
#include <iostream>

 class A final
{
	 private:
	 std::string nome;
   public:
	A () {
	 std::cout << "A default constructor: used internally to initialize objects and data members when no other value is available.\n";
	}
	A (const A &a) {
		std::cout << "A copy constructor: used in the implementation of call-by-value parameters.\n";

	}
	~A (){
		 std::cout << "A destructor: Invoked when an object is deleted.\n";
	}
	A & operator = (const A &a) {
	   std::cout << "An assignment operator: used to assign one value to another.\n";
		this->nome = a.nome + " blablabla bla";
		return *this;
	}
	 void setNome(std::string nome){
		 this->nome = nome;
	 }
	 void print(){
		   std::cout << this->nome << "\n";
	 }
};


int main()
{
   A test;
	test.setNome("AAAAA");
	test.print();
	A test2;
	  test2.setNome("BBBBB");
	 test2.print();
	test = test2;
	 test.print();
		  test2.print();

}

*/
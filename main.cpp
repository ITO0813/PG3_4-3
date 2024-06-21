#include<stdio.h>
#include"oya.h"
#include"kodomo.h"

int main(void) {

	Oya* number[2] = { new kodomoA,new kodomoB };

	number[0]->Voice();
	number[1]->Voice();

	delete number[0];
	delete number[1];

	return 0;
}
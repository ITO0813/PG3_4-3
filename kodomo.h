#pragma once
#include<stdio.h>
#include"oya.h"

class kodomoA :public Oya {
public:
	void Voice() {
		printf("子供Aです\n");
	};
};

class kodomoB :public Oya {
public:
	void Voice() {
		printf("子供Bです\n");
	};
};
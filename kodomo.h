#pragma once
#include<stdio.h>
#include"oya.h"

class kodomoA :public Oya {
public:
	void Voice() {
		printf("�q��A�ł�\n");
	};
};

class kodomoB :public Oya {
public:
	void Voice() {
		printf("�q��B�ł�\n");
	};
};
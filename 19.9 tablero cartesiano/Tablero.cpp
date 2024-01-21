#include <iostream>
#include "Tablero.h"
using namespace std;

void Tablero::arriba(int n){
	y += n;
}

void Tablero::abajo(int n){
	y -= n;
}

void Tablero::izquierda(int n){
	x -= n;
}

void Tablero::derecha(int n){
	x += n;
}

int Tablero::getx(){
	return x;
}

int Tablero::gety(){
	return y;
}

#pragma once
class Pacman
{
private:
	float posicionX;
	float posicionY;
	int color;
	float velocidadX;
	float velocidadY;
public:
	void move(float _velocidadX, float _velocidadY)
};

class fantasma {
public:
	int x, y;
	int color;
	bool levantado; //si pacman es invencible y lo levanto
	fantasma(int xx, int yy, int c) { x = xx; y = yy; color = c; levantado = false; }
	void direccionar();
	void randomizar_();
	void dibujar();
};
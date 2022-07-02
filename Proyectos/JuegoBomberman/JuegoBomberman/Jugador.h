#ifndef __JUGADOR__H__
#define __JUGADOR__H__
using namespace System::Drawing;
enum Direcciones {Arriba, Abajo, Izquierda, Derecha, Ninguna};



class CJugador
{
public:
	CJugador(int x, int y);
	~CJugador();
	void dibujarJugador(Graphics^ g, Bitmap^ bmpJugador) {
		CDI = Rectangle(x+2*3+dx, y+15*3, (ancho - 4)*3, (alto - 15)*3);

		Rectangle PorcionUsar = Rectangle(indiceX* ancho, indiceY* alto, ancho, alto);
		Rectangle Aumento = Rectangle(x, y, ancho*3, alto*3);
		g->DrawImage(bmpJugador, Aumento, PorcionUsar, GraphicsUnit::Pixel);
		x += dx;
		y += dy;
	}

	void moverJugador(Graphics^ g, Bitmap^ bmpJugador) {
		direccion == Arriba ? ancho = 17 : ancho = 18; 
		switch (direccion)
		{
			case Direcciones::Arriba:
				indiceY = 0;
				if (indiceX >= 1 && indiceX < 3)
					indiceX++;
				else
					indiceX = 1;
				dx = 0;
				dy = -10;
				ultima = Arriba;
				break;
			case Direcciones::Abajo:
				indiceX = 0;
				if (indiceY >= 1 && indiceY < 3)
					indiceY++;
				else
					indiceY = 1;
				dx = 0;
				dy = 10;
				ultima = Abajo;
				break;
			case Direcciones::Izquierda:
				indiceY = 3;
				if (indiceX >= 1 && indiceX < 3)
					indiceX++;
				else
					indiceX = 1;
				dx = -10;
				dy = 0;
				ultima = Izquierda;
				break;
			case Direcciones::Derecha:
				indiceY = 1;
				if (indiceX >= 1 && indiceX < 3)
					indiceX++;
				else
					indiceX = 1;
				dx = 10;
				dy = 0;
				ultima = Derecha;
				break;
			case Direcciones::Ninguna:
				dx = dy = 0;
				if (ultima == Direcciones::Abajo) {
					indiceX = 0;
					indiceY = 2;
				}
				if (ultima == Direcciones::Arriba) {
					indiceX = 0;
					indiceY = 0;
				}
				if (ultima == Direcciones::Derecha) {
					indiceX = 1;
					indiceY = 1;
				}
				if (ultima == Direcciones::Izquierda) {
					indiceX = 1;
					indiceY = 3;
				}
				break;
		default:
			break;
		}
		dibujarJugador(g, bmpJugador);
	}

	void setDireccion(Direcciones direccion) {
		this->direccion = direccion;
	}

private:
	int x;// posicion x
	int y;// posicion y
	int dx;// donde se va a mover el jugador, en este caso izquierda o derecha en x
	int dy;// donde se va a mover el jugador, en este caso arriba o abajo en y
	int ancho;// ancho de la imagen
	int alto;//	alto de la imagen
	int indiceX;// para hacer la animacion
	int indiceY;// para hacer la animacion
	Direcciones direccion;
	Direcciones ultima;

	Rectangle CDI;//DERECHA IZQUIERDA
	Rectangle CAA;//ARRIBA ABAJO
};

CJugador::CJugador(int _x, int _y)
{
	//Posicion del jugador
	this->x = _x;
	this->y = _y;
	//Movimiento del jugador
	dx = 0;
	dy = 0;
	//Animacion sprite
	ancho = 18;
	alto = 26;
	indiceX = 0;
	indiceY = 0;
	direccion = Direcciones::Ninguna;
	ultima = Direcciones::Abajo;
}
 
CJugador::~CJugador()
{
}

#endif // __JUGADOR__H__


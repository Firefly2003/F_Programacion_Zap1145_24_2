#include <iostream>
#include <locale>

int main()
{


	int pokemon = 0;
	int PS1 = 16;
	int PS2 = 16;
	int accion = 0;
	int movimiento = 0;
	int pociones = 5;
	std::cout << "Hola entrenador Pokemon, estos son los pokemon que puedes escoger como tu primer compañero: \n Bulbasaur, pokemon tipo planta, Squirtle, Pokemon tipo Agua y Charmander, Pokemon tipo Fuego.\nEscribe 1 si quieres escoger a Bulbasaur. \nEscribe 2 si quieres escoger a Squirtle. \nEscribe 3 si quieres escoger a Charmander.\n";
	std::cin >> pokemon;


	if (pokemon == 1) {
		std::cout << "Haz escogido a Bulbasaur\nJunto a el recibes 5 pociones!\nTu rival acaba de llegar, y escoge a Squirtle \n";
	}

	else if (pokemon == 2) {
		std::cout << "Haz escogido a Squirtle\nJunto a el recibes 5 pociones!\nTu rival acaba de llegar, y escoge a Charmander \n";

	}


	else if (pokemon == 3) {
		std::cout << "Haz escogido a Charmander\nJunto a el recibes 5 pociones!\nTu rival acaba de llegar, y escoge a Bulbasaur \n";
	}

	else {
		std::cout << "No haz escogido a un pokemon, de alguna manera te las arreglaste para perder antes de que el juego empezara\n GAME OVER";
		exit(-1);
	}


	std::cout << "Tu rival te reta a un combate! La batalla comienza!\n";



	while (PS1 >= 1) {


		std::cout << "Tienes 3 opciones: Luchar, Objetos, Huir\n Presiona 1 para luchar Presiona 2 para Objetos Presiona 3 para huir\n";
		std::cin >> accion;
		if (accion == 1) {
			if (pokemon == 1) {
				std::cout << "Tienes los siguientes movimientos disponibles: Placaje (Tipo normal) Latigo sepa (Tipo planta) Cabeza de hierro (tipo acero)\n";
				std::cout << "Presiona 1 para usar Placaje Presiona 2 para usar Latigo sepa Presiona 3 para usar Cabeza de hierro\n";
			}
			else if (pokemon == 2) {
				std::cout << "Tienes los siguientes movimientos disponibles: Placaje (Tipo normal) Pistola de agua (Tipo agua) Giro bola (tipo acero)\n";
				std::cout << "Presiona 1 para usar Placaje Presiona 2 para usar Pistola de agua Presiona 3 para usar Giro bola\n";
			}
			else if (pokemon == 3) {
				std::cout << "Tienes los siguientes movimientos disponibles: Aranazo (Tipo normal) Ascuas (Tipo fuego) Golpe trueno (Tipo electrico)\n";
				std::cout << "Presiona 1 para usar Aranazo Presiona 2 para usar Ascuas Presiona 3 para usar Golpe trueno\n";
			}
			std::cin >> movimiento;

			if (movimiento == 1) {
				std::cout << "Tu pokemon ataca y le resta 4 puntos de 16 puntos de salud al pokemon adversario\n";
				PS2 = PS2 - 4;
				if (PS2 <= 1) {
					std::cout << "Tu pokemon a ganado, haz ganado el combate! Felicidades!, THE END";
					exit(-1);
				}
			}

			else if (movimiento == 2) {
				std::cout << "Tu pokemon ataca y le resta 8 puntos de 16 puntos de salud al pokemon adversario! Es supereficaz!\n";
				PS2 = PS2 - 8;
				if (PS2 <= 1) {
					std::cout << "Tu pokemon a ganado, haz ganado el combate! Felicidades!, THE END";
					exit(-1);
				}
			}
			else if (movimiento == 2) {
				std::cout << "Tu pokemon ataca y le resta 2 puntos de 16 puntos de salud al pokemon adversario! No es muy eficaz...\n";
				PS2 = PS2 - 8;
				if (PS2 <= 1) {
					std::cout << "Tu pokemon a ganado, haz ganado el combate! Felicidades!, THE END";
					exit(-1);
				}
			}
		}
		else if (accion == 2) {
			if (pociones >= 1) {
				std::cout << "Haz sacado una pocion de tu bolsa y con ella curas a tu pokemon completamente! Tu pokemon tiene Puntos de Salud de 16! \n";
				PS1 = 16;
				pociones = pociones - 1;
			}
			else {
				std::cout << "No te quedan pociones! Pierdes tu turno! \n";
			}
		}
		else if (accion == 3) {
			std::cout << "No puedes huir de un combate contra un entrenador! Pierdes tu turno!";
		}
		else {
			std::cout << "Tu pokemon no entiende que quieres hacer... Pierdes tu turno!";
		}
		std::cout << "El pokemon rival te ataca! Restandole 4 puntos de salud de 16 a tu pokemon!";
		PS1 = PS1 - 4;
	}
	std::cout << "Tu pokemon a sido debilitado, pierdes el combate! GAME OVER";
}
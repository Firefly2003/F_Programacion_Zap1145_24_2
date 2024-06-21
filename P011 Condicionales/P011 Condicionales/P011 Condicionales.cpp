

#include <iostream>

int main()
{
	int pregunta1 = 0;
	int pregunta2 = 0;	
	int pregunta3 = 0;
	int pregunta4 = 0;
	int pregunta5 = 0;

	std::cout << "Este programa es un adivina quien de juegos, tratara de adivinar en que juego estas pensando haciendo una serie de preguntas de si o no.\nEscribe 1 si tu juego es multijugador, escribe 2 si tu juego es de un solo jugador" << std::endl;
	
	std::cin >> pregunta1;

	while (pregunta1 != 1 && pregunta1 != 2) {
		std::cout << "Por favor ingresa 1 o 2.";
		std::cin >> pregunta1;
	}

	std::cout << "Tu juego es un shooter? 1 si 2 no" << std::endl;
	std::cin >> pregunta2;

	while (pregunta2 != 1 && pregunta2 != 2) {
		std::cout << "Por favor ingresa 1 o 2.";
		std::cin >> pregunta2;
	}

	std::cout << "Tu juego es tiene elementos de fantasia o ciencia ficcion? 1 si 2 no" << std::endl;
	std::cin >> pregunta3;

	while (pregunta3 != 1 && pregunta3 != 2) {
		std::cout << "Por favor ingresa 1 o 2.";
		std::cin >> pregunta3;
	}

	std::cout << "Tu juego tiene un aspecto fotorealista? 1 si 2 no" << std::endl;
	std::cin >> pregunta4;

	while (pregunta4 != 1 && pregunta4 != 2) {
		std::cout << "Por favor ingresa 1 o 2.";
		std::cin >> pregunta4;
	}
	std::cout << "Tu juego tiene monstruos? 1 si 2 no" << std::endl; 
	std::cin >> pregunta5;

	while (pregunta5 != 1 && pregunta5 != 2) {
		std::cout << "Por favor ingresa 1 o 2.";
		std::cin >> pregunta5;
	}
	if (pregunta1 == 1 && pregunta2 ==1 && pregunta3 ==1 && pregunta4 ==1 && pregunta5 ==1) {
		std::cout << "Creo que tu juego es Call of Duty";
		return 0;
	}
	if (pregunta1 == 2 && pregunta2 == 1 && pregunta3 == 1 && pregunta4 == 1 && pregunta5 == 1) {
		std::cout << "Creo que tu juego es Doom eternal";
		return 0;
	}
	if (pregunta1 == 1 && pregunta2 == 2 && pregunta3 == 1 && pregunta4 == 1 && pregunta5 == 1) {
		std::cout << "Creo que tu juego es Lethal Company";
		return 0;
	}
	if (pregunta1 == 1 && pregunta2 == 1 && pregunta3 == 2 && pregunta4 == 1 && pregunta5 == 1) {
		std::cout << "Creo que tu juego es Rainbow 6 siege";
		return 0;
	}
	if (pregunta1 == 1 && pregunta2 == 1 && pregunta3 == 1 && pregunta4 == 2 && pregunta5 == 1) {
		std::cout << "Creo que tu juego es Fortnite";
		return 0;
	}
	if (pregunta1 == 1 && pregunta2 == 1 && pregunta3 == 1 && pregunta4 == 1 && pregunta5 == 2) {
		std::cout << "Creo que tu juego es PUBG";
		return 0;
	}
	if (pregunta1 == 1 && pregunta2 == 1 && pregunta3 == 1 && pregunta4 == 2 && pregunta5 == 2) {
		std::cout << "Creo que tu juego es Valorant";
		return 0;
	}
	if (pregunta1 == 1 && pregunta2 == 1 && pregunta3 == 2 && pregunta4 == 1 && pregunta5 == 2) {
		std::cout << "Creo que tu juego es counter Strike";
		return 0;
	}
	if (pregunta1 == 1 && pregunta2 == 1 && pregunta3 == 2 && pregunta4 == 2 && pregunta5 == 1) {
		std::cout << "Creo que tu juego no existe ya que no hay un juego que si tenga monstruos y estos no sean ciencia ficcion o fantasia";
		return 0;
	}
	if (pregunta1 == 1 && pregunta2 == 1 && pregunta3 == 2 && pregunta4 == 2 && pregunta5 == 2) {
		std::cout << "Creo que tu juego es Krunker";
		return 0;
	}
	if (pregunta1 == 1 && pregunta2 == 2 && pregunta3 == 1 && pregunta4 == 1 && pregunta5 == 2) {
		std::cout << "Creo que tu juego es For Honor";
		return 0;
	}
	if (pregunta1 == 1 && pregunta2 == 2 && pregunta3 == 1 && pregunta4 == 2 && pregunta5 == 1) {
		std::cout << "Creo que tu juego es World of Warcraft";
		return 0;
	}
	if (pregunta1 == 1 && pregunta2 == 2 && pregunta3 == 1 && pregunta4 == 2 && pregunta5 == 2) {
		std::cout << "Creo que tu juego es Fall Guys";
		return 0;
	}
	if (pregunta1 == 1 && pregunta2 == 2 && pregunta3 == 2 && pregunta4 == 1 && pregunta5 == 1) {
		std::cout << "Creo que tu juego no existe ya que no hay un juego que si tenga monstruos y estos no sean ciencia ficcion o fantasia";
		return 0;
	}
	if (pregunta1 == 1 && pregunta2 == 2 && pregunta3 == 2 && pregunta4 == 1 && pregunta5 == 2) {
		std::cout << "Creo que tu juego es FIFA";
		return 0;
	}
	if (pregunta1 == 1 && pregunta2 == 2 && pregunta3 == 2 && pregunta4 == 2 && pregunta5 == 1) {
		std::cout << "Creo que tu juego no existe ya que no hay un juego que si tenga monstruos y estos no sean ciencia ficcion o fantasia";
		return 0;
	}
	if (pregunta1 == 1 && pregunta2 == 2 && pregunta3 == 2 && pregunta4 == 2 && pregunta5 == 2) {
		std::cout << "Creo que tu juego es Ajedrez";
		return 0;
	}
	if (pregunta1 == 2 && pregunta2 == 1 && pregunta3 == 1 && pregunta4 == 1 && pregunta5 == 1) {
		std::cout << "Creo que tu juego es BioShock";
		return 0;
	}
	if (pregunta1 == 2 && pregunta2 == 1 && pregunta3 == 1 && pregunta4 == 2 && pregunta5 == 1) {
		std::cout << "Creo que tu juego es ULTRAKILL";
		return 0;
	}
	if (pregunta1 == 2 && pregunta2 == 1 && pregunta3 == 1 && pregunta4 == 2 && pregunta5 == 2) {
		std::cout << "Creo que tu juego es SuperHOT";
		return 0;
	}
	if (pregunta1 == 2 && pregunta2 == 1 && pregunta3 == 2 && pregunta4 == 1 && pregunta5 == 1) {
		std::cout << "Creo que tu juego no existe ya que no hay un juego que si tenga monstruos y estos no sean ciencia ficcion o fantasia";
		return 0;
	}
	if (pregunta1 == 2 && pregunta2 == 1 && pregunta3 == 2 && pregunta4 == 1 && pregunta5 == 2) {
		std::cout << "Creo que tu juego es Medal of Honor";
		return 0;
	}
	if (pregunta1 == 2 && pregunta2 == 1 && pregunta3 == 2 && pregunta4 == 2 && pregunta5 == 1) {
		std::cout << "Creo que tu juego no existe ya que no hay un juego que si tenga monstruos y estos no sean ciencia ficcion o fantasia";
		return 0;
	}
	if (pregunta1 == 2 && pregunta2 == 1 && pregunta3 == 2 && pregunta4 == 2 && pregunta5 == 2) {
		std::cout << "Creo que tu juego no existe ya que no puedo encontrar un juego que tenga los criterios que me diste";
		return 0;
	}
	if (pregunta1 == 2 && pregunta2 == 2 && pregunta3 == 1 && pregunta4 == 1 && pregunta5 == 1) {
		std::cout << "Creo que tu juego es Nier:Replicant";
		return 0;
	}
	if (pregunta1 == 2 && pregunta2 == 2 && pregunta3 == 1 && pregunta4 == 1 && pregunta5 == 2) {
		std::cout << "Creo que tu juego es Nier:Automata";
		return 0;
	}
	if (pregunta1 == 2 && pregunta2 == 2 && pregunta3 == 1 && pregunta4 == 1 && pregunta5 == 2) {
		std::cout << "Creo que tu juego es Assasins Creed";
		return 0;
	}
	if (pregunta1 == 2 && pregunta2 == 2 && pregunta3 == 1 && pregunta4 == 2 && pregunta5 == 1) {
		std::cout << "Creo que tu juego es Honkai Star Rail";
		return 0;
	}
	if (pregunta1 == 2 && pregunta2 == 2 && pregunta3 == 1 && pregunta4 == 2 && pregunta5 == 2) {
		std::cout << "Creo que tu juego es Fallout 1 o 2";
		return 0;
	}
	if (pregunta1 == 2 && pregunta2 == 2 && pregunta3 == 2 && pregunta4 == 1 && pregunta5 == 1) {
		std::cout << "Creo que tu juego no existe ya que no hay un juego que si tenga monstruos y estos no sean ciencia ficcion o fantasia";
		return 0;
	}
	if (pregunta1 == 2 && pregunta2 == 2 && pregunta3 == 2 && pregunta4 == 1 && pregunta5 == 2) {
		std::cout << "Creo que tu juego es Kingdom Come: Deliverance";
		return 0;
	}
	if (pregunta1 == 2 && pregunta2 == 2 && pregunta3 == 2 && pregunta4 == 2 && pregunta5 == 1) {
		std::cout << "Creo que tu juego no existe ya que no hay un juego que si tenga monstruos y estos no sean ciencia ficcion o fantasia";
		return 0;
	}
	if (pregunta1 == 2 && pregunta2 == 2 && pregunta3 == 2 && pregunta4 == 2 && pregunta5 == 2) {
		std::cout << "Creo que tu juego es Papers, Please";
		return 0;
	}
}
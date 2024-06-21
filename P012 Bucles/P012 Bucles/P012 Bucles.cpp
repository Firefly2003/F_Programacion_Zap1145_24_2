#include <iostream>

int main()
{
	int timer = 100;
	int vidas = 3;
	int continuar = 1;
	std::cout << "haz iniciado una partida cuentas con:"<<vidas<<" vidas. \n";

	do
	{
		timer = 100;
		vidas = vidas - 1;
		std::cout << "
			Oh no, haz perdido 1 vida, deseas continuar?\nPresiona 1 si quieres continuar.\nPresiona 2 si quieres darte por vencido.\n";
		std::cout << "Numero de vidas: " << vidas<<"\n";
		do {
			std::cout << "Timer: " << timer << "\n";
			timer = timer - 1;
			std::cin >> continuar;
		} while (continuar != 1 && continuar != 2 && timer >>0);
			if (continuar == 1) {
				std::cout << "haz decidido continuar!\n";
		}

	} while (timer >> 0 && vidas >> 0 && continuar!=2);

	if (vidas <= 0) {
		std::cout << "haz perdido todas tus vidas, GAME OVER";
	}
	if (timer <= 0)
	{
		std::cout << "El tiempo se acabo, GAME OVER";
	}
	if (continuar == 2) {
		std::cout << "haz decidido dar por terminada tu partida, GAME OVER";
	}
}




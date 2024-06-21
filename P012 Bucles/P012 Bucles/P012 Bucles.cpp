#include <iostream>
#include<ctime>
void delay(int secs) {
	for (int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
}
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
		std::cout << "Oh no, haz perdido 1 vida!\n";
		std::cout << "Numero de vidas: " << vidas<<"\n";
		do {
			std::cout << timer << "\n";
			delay(1);
			timer = timer - 1;
			if (timer == -1)
			{
				std::cout << "Presiona 1 si quieres continuar.\nPresiona 2 si quieres darte por vencido.\n";
			}
		} while (timer >= 0);
		std::cin >> continuar;
			if (continuar == 1) {
				std::cout << "haz decidido continuar!\n";
		}

	} while (vidas >> 0 && continuar!=2);

	if (vidas <= 0) {
		std::cout << "haz perdido todas tus vidas, GAME OVER";
	}
	if (continuar == 2) {
		std::cout << "haz decidido dar por terminada tu partida, GAME OVER";
	}
}




#include <stdio.h>

int main(){

	int respuesta=0;
	printf("Cual es la opcion correcta:\n\nNever gonna....\n\n");
	printf("1)Give you up\n");
	printf("2)Let you down\n");
	printf("3)Run around and desert you\n");
	printf("4)Make you cry\n");
	printf("5)Say goodbye\n");
	printf("6)Tell a lie and hurt you\n");
	printf("7)Todas las anteriores\n\n");
	printf("Respuesta: ");
	scanf("%d",&respuesta);
	switch(respuesta){
		case 1:{
			printf("Es correcta pero no solo esta\n");
			break;
		}
		case 2:{
			printf("Es correcta pero no solo esta\n");
			break;
		}
		case 3:{
			printf("Es correcta pero no solo esta\n");
			break;
		}
		case 4:{
			printf("Es correcta pero no solo esta\n");
			break;
		}
		case 5:{
			printf("Es correcta pero no solo esta\n");
			break;
		}
		case 6:{
			printf("Es correcta pero no solo esta\n");
			break;
		}
		case 7:{
			printf("Correcto:\n");
			printf("Never gonna give you up\n");
			printf("Never gonna let you down\n");
			printf("Never gonna run around and desert you\n");
			printf("Never gonna make you cry\n");
			printf("Never gonna say goodbye\n");
			printf("Never gonna tell a lie and hurt you\n\n");
			break;
		}
		default:{
			printf("Esa respuesta no existe\n\n");
			break;
		}

	}




	return 0;
}

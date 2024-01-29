#include <stdio.h>

int buscAtr(char *ptrEnt,char *ptrAt,char *ptrSal);
int PalOcur(char *ptrEnt,char *ptrAt,char *ptrSal);
int PrefEn(char *ptrEnt,char *ptrAt,char *ptrSal);
int SufEn(char *ptrEnt,char *ptrAt,char *ptrSal);
int ListRen(char *ptrEnt,char *ptrSal);
int interc(char *ptrEnt,char *ptrAt,char *ptrSal);

int main(int argc, char *argv[]){
	buscAtr(argv[1],argv[2],argv[3]);
	return 0;
}


int buscAtr(char *ptrEnt,char *ptrAt,char *ptrSal){
	if(*ptrAt=='-'){
		ptrAt++;
		if(*ptrAt=='r'){
			ptrAt++;
			if(*ptrAt=='f'){
				ptrAt++;
				if(*ptrAt=='_'){
					//printf("Es -rf\n");
					ptrAt++;
					PalOcur(ptrEnt,ptrAt,ptrSal);
				}else
					printf("No es atributo\n");
			}else if(*ptrAt=='p'){
				ptrAt++;
				if(*ptrAt=='_'){
					//printf("Es -rp\n");
					ptrAt++;
					PrefEn(ptrEnt,ptrAt,ptrSal);
				}else
					printf("No es atributo\n");
				}else if(*ptrAt=='s'){
					ptrAt++;
					if(*ptrAt=='_'){
					//printf("Es -rs\n");
						ptrAt++;
						SufEn(ptrEnt,ptrAt,ptrSal);
				}else
					printf("No es atributo\n");
					}else{
						printf("No es atributo\n");
					}
		}else if(*ptrAt=='n'){
				ptrAt++;
				if(*ptrAt=='l'){
					ptrAt++;
					if(*ptrAt=='\0'){
						//printf("Es -nl\n");
						ListRen(ptrEnt,ptrSal);
					}else
						printf("No es atributo\n");
				}else{
					printf("No es atributo\n");
				}
			}else if(*ptrAt=='s'){
					ptrAt++;
					if(*ptrAt=='w'){
						ptrAt++;
						if(*ptrAt=='_'){
							ptrAt++;
							//printf("Es -sw\n");
							interc(ptrEnt,ptrAt,ptrSal);
					}else
						printf("No es atributo\n");
					}else{
						printf("No es atributo\n");
					}
			}else{
				printf("No es atributo\n");
			}
	}
	else
		return 0;
}

int PalOcur(char *ptrEnt,char *ptrAt,char *ptrSal){ //arreglar bug sufijo
	char palabra[50],*ptrPal;
	int cont=0, contRen=1,car,espat=1,espad=0,pasada=0;
	ptrPal=palabra;
	for(;*ptrAt!='\0';ptrAt++,ptrPal++)
		*ptrPal=*ptrAt;
	*ptrPal='\0';
	ptrPal=palabra;
	printf("La palabra a buscar es: %s\n",palabra);
	FILE *ent;
	FILE *sal;
	sal=fopen(ptrSal,"w");
	ent = fopen(ptrEnt,"r");
	while((car=getc(ent))!=EOF){
		if(espat==1){
			if(*ptrPal!='\0'){
				if(car==*ptrPal){
					//printf("Es la misma letra\n");
					ptrPal++;
				}else{
					ptrPal=palabra;
					espat=0;
					espad=0;
					//printf("no es la misma letra\n");
				}
			}
			
		}
		if(*ptrPal=='\0'){
			if(espad==0 && espat==1){
				if(car==' ' || car=='\0' || car=='\n' || car==EOF)
					espad=1;
			}
			//printf("%c\n",car);
			if(pasada<2){
				if(espat==1 && espad==1){
					ptrPal=palabra;
					fprintf(sal,"Palabra: %s en el Renglon: %d\n",ptrPal,contRen);
					cont++;
					espat=0;
					espad=0;
					pasada=0;
				}else{
					pasada++;
				}
			}else{
				ptrPal=palabra;
				espat=0;
				espad=0;
				pasada=0;
			}
		}
		if(espat==0 && espad==0){
			if(car==' ' || car=='\0' || car=='\n' || car==EOF){
				espat=1;
				espad=0;
			}
		}
		
		if(car=='\n')
			contRen++;
		//printf("%c",car);

	}
	if(*ptrPal=='\0'){
		ptrPal=palabra;
		fprintf(sal,"Palabra: %s en el Renglon: %d\n",ptrPal,contRen);
		cont++;
	}
	fprintf(sal,"Se encontaron: %d palabras %s\n",cont,palabra);
	fclose(ent);
	fclose(sal);
}

int PrefEn(char *ptrEnt,char *ptrAt,char *ptrSal){
		char palabra[50],*ptrPal;
	int cont=0, contRen=1,car,espat=1;
	ptrPal=palabra;
	for(;*ptrAt!='\0';ptrAt++,ptrPal++)
		*ptrPal=*ptrAt;
	*ptrPal='\0';
	ptrPal=palabra;
	printf("El prefijo a buscar es: %s\n",palabra);
	FILE *ent;
	FILE *sal;
	sal=fopen(ptrSal,"w");
	ent = fopen(ptrEnt,"r");
	while((car=getc(ent))!=EOF){
		if(espat==1){
			if(*ptrPal!='\0'){
				if(car==*ptrPal){
					//printf("Es la misma letra\n");
					ptrPal++;
				}else{
					ptrPal=palabra;
					espat=0;
					//printf("no es la misma letra\n");
				}
			}
			
		}
		if(*ptrPal=='\0'){
			//printf("%c\n",car);
				if(espat==1){
					ptrPal=palabra;
					fprintf(sal,"Prefijo: %s en el Renglon: %d\n",ptrPal,contRen);
					cont++;
					espat=0;
				}
		}
		if(espat==0){
			if(car==' ' || car=='\0' || car=='\n' || car==EOF){
				espat=1;
			}
		}
		
		if(car=='\n')
			contRen++;
		//printf("%c",car);

	}
	if(*ptrPal=='\0'){
		ptrPal=palabra;
		fprintf(sal,"Palabra: %s en el Renglon: %d\n",ptrPal,contRen);
		cont++;
	}
	fprintf(sal,"Se encontaron: %d palabras %s\n",cont,palabra);
	fclose(ent);
	fclose(sal);
}

int SufEn(char *ptrEnt,char *ptrAt,char *ptrSal){
	char palabra[50],*ptrPal;
	int cont=0, contRen=1,car,espad=0,pasada=0;
	ptrPal=palabra;
	for(;*ptrAt!='\0';ptrAt++,ptrPal++)
		*ptrPal=*ptrAt;
	*ptrPal='\0';
	ptrPal=palabra;
	printf("La palabra a buscar es: %s\n",palabra);
	FILE *ent;
	FILE *sal;
	sal=fopen(ptrSal,"w");
	ent = fopen(ptrEnt,"r");
	while((car=getc(ent))!=EOF){
			if(*ptrPal!='\0'){
				if(car==*ptrPal){
					//printf("Es la misma letra\n");
					ptrPal++;
				}else{
					ptrPal=palabra;
					espad=0;
					//printf("no es la misma letra\n");
				}
			}
		if(*ptrPal=='\0'){
			if(espad==0){
				if(car==' ' || car=='\0' || car=='\n' || car==EOF)
					espad=1;
			}
			//printf("%c\n",car);
			if(pasada<2){
				if(espad==1){
					ptrPal=palabra;
					fprintf(sal,"Palabra: %s en el Renglon: %d\n",ptrPal,contRen);
					cont++;
					espad=0;
					pasada=0;
				}else{
					pasada++;
				}
			}else{
				ptrPal=palabra;
				espad=0;
				pasada=0;
			}
		}

		
		if(car=='\n')
			contRen++;
		//printf("%c",car);

	}
	if(*ptrPal=='\0'){
		ptrPal=palabra;
		fprintf(sal,"Palabra: %s en el Renglon: %d\n",ptrPal,contRen);
		cont++;
	}
	fprintf(sal,"Se encontaron: %d palabras %s\n",cont,palabra);
	fclose(ent);
	fclose(sal);
}
int ListRen(char *ptrEnt,char *ptrSal){
	int contRen=1,car,BanRen=1;
	FILE *ent;
	FILE *sal;
	sal=fopen(ptrSal,"w");
	ent = fopen(ptrEnt,"r");
	while((car=getc(ent))!=EOF){
		if(BanRen==1){
			fprintf(sal, "%d. %c",contRen,car);
			BanRen=0;
		}else
			fprintf(sal, "%c",car);

		if(car=='\n'){
			BanRen=1;
			contRen++;
		}
	}
	fclose(ent);
	fclose(sal);
}

int interc(char *ptrEnt,char *ptrAt,char *ptrSal){
	char palabra[50],remplazo[50],auxiliar,*ptrPal,*ptrRem;
	int cont=0, contRen=1,car,espat=1,espad=0,pasada=0,cam=0,Bloqueo=0;
	ptrPal=palabra;
	ptrRem=remplazo;
	for(;*ptrAt!='_';ptrAt++,ptrPal++)
		*ptrPal=*ptrAt;
	*ptrPal='\0';
	ptrAt++;
	for(;*ptrAt!='\0';ptrAt++,ptrRem++)
		*ptrRem=*ptrAt;
	*ptrRem='\0';

	ptrPal=palabra;
	ptrRem=remplazo;
	printf("La palabra a buscar es: %s\n",palabra);
	FILE *ent;
	FILE *sal;
	sal=fopen(ptrSal,"w");
	ent = fopen(ptrEnt,"r");
	while((car=getc(ent))!=EOF){
		if(Bloqueo==0){
			if(espat==1){
				if(*ptrPal!='\0'){
					if(car==*ptrPal){
						//printf("Es la misma letra\n");
						ptrPal++;
					}else{
						ptrPal=palabra;
						//ptrAux=auxiliar;
						//Bloqueo=1;
						espat=0;
						espad=0;
						fprintf(sal,"%c",car);

						//printf("no es la misma letra\n");
					}
				}else{	
					Bloqueo=1;
					//fprintf(sal,"%c",ptrPal);
				}
			}else{
				fprintf(sal,"%c",car);
			}
		}
		if(*ptrPal=='\0'){
			if(espad==0 && espat==1){
				if(car==' ' || car=='\0' || car=='\n' || car==EOF){
					espad=1;
				}
			}
			//printf("%c\n",car);
			if(pasada<2){
				if(espat==1 && espad==1){
					ptrPal=palabra;
					fprintf(sal,"%s",ptrRem);
					cont++;
					Bloqueo=0;
					espat=0;
					espad=0;
					pasada=0;
					cam=1;
				}else{
					pasada++;
				}
			}
		}

		if(espat==0 && espad==0){
			if(car==' ' || car=='\0' || car=='\n' || car==EOF){
				espat=1;
				espad=0;
				if(cam==1){
					fprintf(sal,"%c",car);
					cam=0;
				}
			}
		}
		if(car=='\n'){
			contRen++;
		}
	}
	if(*ptrPal=='\0'){
		ptrRem=remplazo;
		fprintf(sal,"%s",ptrRem);
	}
	//fprintf(sal,"Se encontaron: %d palabras %s\n",cont,palabra);
	fclose(ent);
	fclose(sal);
}
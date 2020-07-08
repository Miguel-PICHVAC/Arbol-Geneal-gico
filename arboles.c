#include <stdio.h>

int main()
{
	int op;
	do{
	printf("Generaciones");
	printf("\n\n1.-1ra Generacion:");
	printf("\n2.-2da Generacion:");
	printf("\n3.-3ra Generacion:");
	printf("\n4.-4ta Generacion:");
	printf("\n5.-5ta Generacion:");
	printf("\n6.-6ta Generacion");
	printf("\n7- Imprimir el arbol completo");
	printf("\n\nElegine una generacion (1-7): ");
	fflush(stdin);
	scanf("%d", &op);
	
	if(op <=0 || op >=8)
	{
		printf("\n\nOpción incorrecta\n\n");
	}
	}while(op <=0 || op >=8);
	
	switch(op)
	{
		case 1:
			printf("\n\n\t\t\t1ra GENERACION\n\n");
			printf("     ______________   ______________   ______________   ______________   ______________   ______________    ______________   _____________\n");
			printf("    |              | |              | |              | |              | |              | |              |  |              | |             |\n");
			printf("    | *Desconocido | | *Desconocido | | *Desconocido | | *Desconocido | | *Desconocido | | *Desconocido |  | *Desconocido | | Desconocido |\n");
			printf("    |______________| |______________| |______________| |______________| |______________| |______________|  |______________| |_____________|\n");
			printf("\n");
			printf(" _____________   _____________     ______________   ______________    ______________   ______________    ______________   ______________\n");
			printf("|             | |             |   |              | |              |  |              | |              |  |              | |              |\n");
			printf("| Desconicido | | Desconocido |   | *Desconocido | | *Desconocido |  | *Desconocido | | *Desconocido |  | *Desconocido | | *Desconocido |\n");
			printf("|_____________| |_____________|   |______________| |______________|  |______________| |______________|  |______________| |______________|\n");
			break;
		case 2:
			printf("\n\n\t\t\t3ra GENERACION\n\n");
			printf("        __________     ______________      ___________    _________    ______________    ______________   ______________    ______________\n");
			printf("       |          |   |              |    |           |  |         |  |              |  |              | |              |  |              |\n");
			printf("       | *Librada |   | *Desconocido |    | *Tiburcio |  | *Ursula |  | *Desconocido |  | *Desconocido | | *Desconocido |  | *Desconocido |\n");
			printf("       |__________|   |______________|    |___________|  |_________|  |______________|  |______________| |______________|  |______________|\n");
			break;
		case 3:
			printf("\n\n\t\t\t4ta GENERACION\n\n");
			printf("             ______________                    ______________                  _________________            ___________________\n");
			printf("            |              |                  |              |                |                 |          |                   |\n");
			printf("	    | *Erasto Vaca |                  | *Maria lopez |                | *Celia Dorantes |          | *Cerafin Pichardo |\n");
			printf("            |______________|                  |______________|                |_________________|          |___________________|\n");
			break;
		case 4:
			printf("\n\n\t\t\t\t\t\t\t5ta GENERACION\n\n");
			printf("		    _________________________________                    	         ________________________\n");
			printf("		   |                                 |                 			|                        |\n");
			printf("		   | *Maria Luisa    *Marco Antonio  |                  		| *Marta      *Magos     |\n");
			printf("	           | *Ernesto        *Javier         |                                  | *Miguel     *Maricela  |\n");
			printf("	           | *Benito         *Gabriel        |                                  |________________________|\n");
			printf("	           | *Laura          *Cristina       |			     		     \n");
			printf("	           |_________________________________|                                       \n");
			break;
		case 5:
			printf("\n\n\t\t\t\t\t\t\t6ta GENERACION\n\n");
			printf("	                   		       _______________________________\n");
			printf("	             			      |                               |\n");
			printf("        	    		     	      | *Laura    *Karla     *Miguel  |\n");
			printf("	                	              |_______________________________|\n");
			break;
		case 6:
			printf("                                                      ______________\n");
			printf("                                                     |              |\n");
			printf("                                                     | *Desconocido |\n");
			printf("                                                     |______________|\n");
			break;
		case 7:
			printf("     ______________   ______________   ______________   ______________   ______________   ______________    ______________   _____________\n");
			printf("    |              | |              | |              | |              | |              | |              |  |              | |             |\n");
			printf("    | *Desconocido | | *Desconocido | | *Desconocido | | *Desconocido | | *Desconocido | | *Desconocido |  | *Desconocido | | Desconocido |\n");
			printf("    |______________| |______________| |______________| |______________| |______________| |______________|  |______________| |_____________|\n");
			printf("          |_________________|              |_________________|              |_________________|                 |_________________|\n");
			printf("                   |_____________                    |_______________                 |__________________                 |__________________\n");
			printf(" _____________   _____________   |  ______________   ______________  |  ______________   ______________  |  ______________   ______________  |\n");
			printf("|             | |             |  | |              | |              | | |              | |              | | |              | |              | |\n");
			printf("| Desconicido | | Desconocido |  | | *Desconocido | | *Desconocido | | | *Desconocido | | *Desconocido | | | *Desconocido | | *Desconocido | |\n");
			printf("|_____________| |_____________|  | |______________| |______________| | |______________| |______________| | |______________| |______________| |\n");
			printf("      |_________________|      __|        |_________________|  ______|        |_______________|     _____|        |________________|         |\n");
			printf("             |                |                  |             |               _________|        ___|             ___________|               |\n");
			printf("             |                |                  |             |              |                 |                |                  _________|\n");
			printf("        _____|____     _______|______      ______|____    _____|___    _______|______    _______|______   _______|______    _______|______\n");
			printf("       |          |   |              |    |           |  |         |  |              |  |              | |              |  |              |\n");
			printf("       | *Librada |   | *Desconocido |    | *Tiburcio |  | *Ursula |  | *Desconocido |  | *Desconocido | | *Desconocido |  | *Desconocido |\n");
			printf("       |__________|   |______________|    |___________|  |_________|  |______________|  |______________| |______________|  |______________|\n");
			printf("             |________________|                 |_____________|              |__________________|               |__________________|\n");
			printf("             ________|_____                    ________|_____                  ________|________            _____________|_____\n");
			printf("            |              |                  |              |                |                 |          |                   |\n");
			printf("	    | *Erasto Vaca |                  | *Maria lopez |                | *Celia Dorantes |          | *Cerafin Pichardo |\n");
			printf("            |______________|                  |______________|                |_________________|          |___________________|\n");
			printf("	            |                                |                                 |                             |\n");
			printf("	            |________________________________|                                 |_____________________________|\n");
			printf("	                            |                                                 		      |\n");
			printf("		    ________________|________________                    	         _____________|__________\n");
			printf("		   |                                 |                 			|                        |\n");
			printf("		   | *Maria Luisa    *Marco Antonio  |                  		| *Marta      *Magos     |\n");
			printf("	           | *Ernesto        *Javier         |                                  | *Miguel     *Maricela  |\n");
			printf("	           | *Benito         *Gabriel        |                                  |________________________|\n");
			printf("	           | *Laura          *Cristina       |			     		     |\n");
			printf("	           |_________________________________|                                       |\n");
			printf("	                |                                                                    |\n");
			printf("	                |                                                 		     |\n");
			printf("	                |____________________________________________________________________|\n");
			printf("	                                                     |\n");
			printf("	                   		       ______________|________________\n");
			printf("	             			      |                               |\n");
			printf("        	    		     	      | *Laura    *Karla     *Miguel  |\n");
			printf("	                	              |_______________________________|\n");
			printf("                                                            |\n");
			printf("                                                      ______|_______\n");
			printf("                                                     |              |\n");
			printf("                                                     | *Desconocido |\n");
			printf("                                                     |______________|\n");
			break;
	}
	return 0;
}

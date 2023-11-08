
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
		float N1, N2, res;
			int op, cont;

				cont =1;
					
						while (cont==1){
										printf("\t\t\t calculator\n\n");
													printf("\t \t \t Operations \n 1 \t \t \t Sum \n 2 \t \t \t Subtraction \n 3 \t \t \t Multiplication \n 4 \t \t \t Division \n \n");
																scanf("%d", &op);
																			
																			if(op == 1 || op == 2 || op == 3 || op == 4){
																							printf("Enter the firt number:");
																										scanf("%f", &N1);
																													printf("Enter the second number:");
																																scanf("%f", &N2);
																																			
																																			
																																			switch(op){
																																								case 1:
																																														res=N1+N2;
																																																			printf("the result of operation is: %.2f \n\n", res);
																																																								break;
																																																												case 2:
																																																													res=N1-N2;
																																																																		printf("the result of operation is: %.2f \n\n", res);
																																																																							break;
																																																																											case 3:
																																																																												res=N1*N2;
																																																																																	printf("the result of operation is: %.2f \n\n", res);
																																																																																						break;
																																																																																										case 4:
																																																																																											if(N2 != 0)
																																																																																																	{ res=N1/N2; 
																																																																																																							printf("the result of operation is: %.2f \n\n", res);}
																																																																																																else{ printf("Invalid number for division \n\n");}
																																																																																																					break;
																																																																																																						
																																																																																																								};
																																						}
																						else{
																												printf("Enter a operation that exists\n\n");
																															}
																									
																							
																												}
									
							return 0;
}

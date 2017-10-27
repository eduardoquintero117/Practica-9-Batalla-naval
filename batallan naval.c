// Eduardo Quintero Juan 1120  Fundamentos de programacion //


#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <windows.h>
char usuario[20]={};	
char matrix[4][4]={{'0','0','0','0'}, // coloque sus Naves
                   {'0','0','0','0'},
				   {'0','0','0','0'},
				   {'0','0','0','0'}};
char vis[4][4]={{'-','-','-','-'},{'-','-','-','-'},{'-','-','-','-'},{'-','-','-','-'}};
char maq[4][4]={{'0','0','0','0'},{'0','0','0','0'},{'0','0','0','0'},{'0','0','0','0'}};
char sky[4][4]={{'-','-','-','-'},{'-','-','-','-'},{'-','-','-','-'},{'-','-','-','-'}};
int s,c,r,b,i,j;
int g,p;
int usu=0;
int numero,m,a,k;



int main(){
while(usu<8){
	
	if(k==0){
		  // maquina coloca dos numeros coordenadas 
         printf("BATALLA NAVAL \n");
          printf("Sky \n");	     
          while(k<8){
          	
	        srand(time(NULL));
	        m = rand() % 4;
	        Sleep(1561); //1101
	        srand(time(NULL));
	        a = rand() % 4;
	        
            maq[m][a]='X';
            k=0;
            for(r=0;r<4;r++){ // el programa hace un escaneo para ver el numero de barcos que a puestuesto pues solo pude poner 8
	          for(c=0;c<4;c++){
	              if(maq[r][c]=='X'){
				      k++;}
	   	        }
	        }
	        
	        srand(time(NULL));
	        a = rand() % 4;
	        Sleep(576); //1101
	        srand(time(NULL));
	        m = rand() % 4;
	        
            maq[m][a]='X';
            
            k=0;
            for(r=0;r<4;r++){ 
	          for(c=0;c<4;c++){
	              if(maq[r][c]=='X'){
				      k++;
				     
				   	}
	   	        }
	        }
	        
	        
	        //---------------------- se proyecta en la pantalla una pocentaje decarga
			if(k==2){system("cls");printf ("25 ");}
			if(k==4){system("cls");printf ("\n50 ",m);}
		    if(k==6){system("cls");printf ("\n\n75 ",m);}
		    if(k==8){system("cls");printf ("\n\n\n100 ",m);Sleep(2000);system("cls");}
			  
           }
   /*  for(r=0;r<4;r++){  // se usa para visualisar las pociciones del tablero de la maquina
	   for(c=0;c<4;c++){
	   printf("%c", maq[r][c]);}
     printf("\n"); } */
    }
	
	// ususario
	if(k==8){printf("Bienvenido");
	  printf("\n ¿cual es tu nombre?\n");
	  scanf("%s",usuario);
	  k++;}
	system("cls");
    if(k==9){
	  //(Naves colocadas);
	  b=0;
      while(b<8){
 	     system("cls");
 	       for(r=0;r<4;r++){
		    for(c=0;c<4;c++){
		     printf("%c",matrix[r][c]);}
		     printf("\n");}  
			
		 printf("Naves colocadas %d \n",b);	
		 printf("Elige las coordenadas de tus barcos pudes colocar 8 Y,X: \n");
         scanf("%d, %d", &r,&c);
        
		 matrix[r][c]='X';
		 b=0;
		 for(r=0;r<4;r++){
		   for(c=0;c<4;c++){
			if(matrix[r][c]=='X'){b++; }}	
         }
        
	    }
	k++;
	system("cls");
    }
   
	
	printf("trampa barcos de sky\n");
	for(r=0;r<4;r++){
	 for(c=0;c<4;c++){
	   printf("%c", maq[r][c]);
       }
     printf("\n");
   }
  //--------- coordenadas que selecciona el usuario	
  printf("Capitan %s \n",usuario);
  
   for(r=0;r<4;r++){
	  for(c=0;c<4;c++){ printf("%c", vis[r][c]);
       }
    printf("\n");
    }
    
   //printf("Elige una cordenada Y,X: \n");
   //scanf("%d, %d", &i,&j);
c=0;
 while(c<1){
 	printf("Elige una cordenada Y,X: \n");
    scanf("%d, %d", &i,&j);
     if(vis[i][j]=='-') {c=2;}
     else{printf("Esa coordenada ya la usaste intenta con otra\n");
     scanf("%d, %d", &i,&j);}
   
 }  
 
 if (maq[i][j]=='X'){
	vis[i][j]='X';
	printf("BOOOOM \n");
	usu++; 
    } 
    
 else{vis[i][j]='O';}
 
   g=0;
   for(r=0;r<4;r++){
	   for(c=0;c<4;c++){
	     if(vis[r][c]=='X'){g++;}
	    }
	}
   
	printf("Naves undidas %d \n",g); // para ver si al coordenada era correcta;
	for(r=0;r<4;r++){
	   for(c=0;c<4;c++){
	    printf("%c", vis[r][c]);
        }
      printf("\n");
     }
		
  if(g==8){break; }
  
  //----------------------------------sky---------------------------
  if(k==10){
  	Sleep(2000);
  	system("cls");
   printf("Sky\n");  // pantalla de sky
   for(r=0;r<4;r++){
	  for(c=0;c<4;c++){
	     printf("%c", sky[r][c]);
        }
     printf("\n");
    }
    s=0;
    while(s==0){
    	    m,a=0; 
          	//Sleep(97); //100 999
	        srand(time(NULL));
	        m = rand() % 4;
	        Sleep(1563); //1101
	        srand(time(NULL));
	        a = rand() % 4;
	        printf("%d,",m);
            printf("%d\n",a);
	        if(sky[m][a]=='-') {
	        	s=2;}
	        		
            else{
            	if(s==0){
            	srand(time(NULL));
	        a = rand() % 4;
	        Sleep(501); //1101
	        srand(time(NULL));
	        m = rand() % 4;
	        printf("%d,",m);
	        printf("%d\n",a);
            	if(sky[m][a]=='-') {s=2;}
	         }	
			}
	        
			
    }
    
    
    
   printf("\nSky Elige una cordenadas:");
   printf("%d,",m);
   printf("%d\n",a);
   Sleep(2000);
   //system("cls");
 
 
 
 if (matrix[m][a]=='X'){
	sky[m][a]='X';
	printf("BOOOOM \n");
	 
    } 
    
 else{sky[m][a]='O';}
 
   p=0;
   for(r=0;r<4;r++){
	   for(c=0;c<4;c++){
	     if(sky[r][c]=='X'){p++;}
	    }
	}
   
   
	printf("Naves undidas por sky %d \n",p);	
	for(r=0;r<4;r++){
	   for(c=0;c<4;c++){
	    printf("%c", sky[r][c]);
        }
      printf("\n");
     }
	 
	Sleep(2000);
	
 if(p==8){break; }
  	
  }

  
  
  //------------------------------------------------------------- fin de sky
  
   }// aqui termina en while
   
Sleep(2000);
 system("cls");
 if(p==8){printf("Game over\n Ganan las maquinas \n");
    printf("%s \n",usuario);
    for(r=0;r<4;r++){
	   for(c=0;c<4;c++){printf("%c", matrix[r][c]);}
      printf("\n");
      }
 	printf("sky\n");
     for(r=0;r<4;r++){
	   for(c=0;c<4;c++){
	    printf("%c", sky[r][c]);}
      printf("\n");
      }
  }
  
  if(usu==8){printf("Ganaste \n"); 
  printf("sky\n");
  for(r=0;r<4;r++){
	   for(c=0;c<4;c++){
	    printf("%c", maq[r][c]);
       }
       printf("\n");
      }
 	 printf("%s\n",usuario);
     for(r=0;r<4;r++){
	   for(c=0;c<4;c++){
	    printf("%c", vis[r][c]);
        }
      printf("\n");
     }
  }
return 0;	
	
	
}

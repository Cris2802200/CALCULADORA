#include<stdio.h>
#include<math.h>
int main(){
	
int a,r,z;
int b,c;
float d,e,g;
int x;

while(z==0){


     printf("ingrese que operacion desea realizar\n1.suma\n2.resta\n3.multiplicacion\n4.division\n5.modulo\n6.potencia\n7.raiz\n");
	 scanf("%d", &a);
	 
	 switch(a){
	 	case 1:
	 		printf("ingrese los valores a sumar\n");
	 		scanf("%d""%d",&c,&b);
	 		r=c+b;
	 		printf("el resultado es : %d",r);
	 		break;
	 	
		 case 2:
		 	printf("ingrese los valores a restar\n");
		 	scanf("%d %d",&c,&b);
		 	r=c-b;
		 	printf("el resultado es : %d\n",r);
		 	break;
		 
		 case 3:
		 	printf("ingrese los valores a multiplicar\n");
		 	scanf("%d %d",&c,&b);
		 	r=c*b;
		 	printf("el resultado es : %d\n",r);
		 	break;
		 
		 case 4:
		 	printf("ingrese los valores a dividir\n");
		 	scanf("%f %f",&d,&e);
		 	r=d/e;
		 	printf("el resultado es : %d\n",r);
		 	break;
		 
		 case 5:
		    printf("ingrese los valores\n");
			scanf("%f %f",&d,&e);
			r=fmod(d,e);
			printf("el resultado es: %f\n",&r);
			break ;
		
		case 6:
			printf("ingrese un valor\n");
			scanf("%f", &g);
			r=pow(g,2);
			printf("la potencia del valor ingresado es : %f\n",r);
			break;
		
		case 7:
			printf("ingrese un valor\n");
		 	scanf("%d", &x);
		 	r=(sqrt(x));
		 	printf("la raiz cuadrada es : %d\n", r);
		 	break;
	 } 
	 
	 
	 printf("realizar una nueva opercacion? si=0 no=1\n");
	 scanf("%d",&z);
	 if(z!=0){
	 	z++;
	 	
	 }
	 
	 
	 
	 
	 
}

return 0;
}
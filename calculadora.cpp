#include<stdio.h>
#include<locale.h>
#include<math.h>

float soma(float s1, float s2){
	float resultado;
	resultado = s1 + s2;
	return resultado;
}
float divisao(float d1, float d2){
	float resultado;
	resultado = d1 / d2;
	return resultado;
}
float subtracao(float sub1, float sub2){
	float resultado;
	resultado = sub1 - sub2;
	return resultado;
}
float multiplicacao(float m1, float m2){
	float resultado;
	resultado = m1 * m2;
	return resultado;
}
float porcentagem(float p1, float p2){
	float resultado;
	resultado = (p1 * p2)/100;
	return resultado;
}
float raizquadrada(float r1, float r2){
	float resultado;
	resultado = (r1);
	return resultado;
}
float exponencial(float q1, float q2){
	float resultado;
	resultado = pow(q1,q2);
	return resultado;
}
float loga (float l1){
	float resultado;
	resultado = log10(l1);
	return resultado;
}
float raizquadrada(float r1){
	float resultado;
	resultado = sqrt(r1);
	return resultado;
}
main(){
	setlocale(LC_ALL,"portuguese");
	int n1,n2;
	float r;
	char operador;
	printf("\nCALCULADORA\nComandos:\nSoma = '+'\nSubtração = '-'\nMultiplicação = '*' \nDivisão = '/'\nPorcentagem = '%%' \nExponencial = '^'\nLogaritmo 'l'\nRaíz quadrada = 'v'");
	printf("\nObs:\nA operação da raíz quadrada e de logaritmo irá ficar dessa forma: número 1 multiplicado pelo resultado da raiz quadrada do segundo");
	printf("\nDigite o primeiro número, a ope-ração e logo depois o segundo número\n ");
	scanf("%d %c %d", &n1, &operador, &n2);
    switch(operador){
		case '+':
			r = soma(n1,n2);
			printf("\n%.2f", r);
			break;
		case '-':
    		r = subtracao(n1,n2);
    		printf("\n%.2f", r);
    		break;
    	case '*':
    		r = multiplicacao(n1,n2);
    		printf("\n%.2f", r);
    		break;
		case '/':
    		if(n2==0){
    			printf("O resultado é indefinido");
			}
			else{
    			r = divisao(n1,n2);
    			printf("\n%.2f", r);
    			break;
    		}
    	case '%':
    		r = porcentagem(n1,n2);
    		printf("\n%.2f", r);
    		break;
    		
    	case '^':
    		r = exponencial(n1,n2);
    		printf("\n%.2f", r);
    		break;
    	case 'l':
    		r = loga(n2);
    		r = r * n1;
    		printf("\n%.2f", r);
    		break;
    	case 'v':
    		r = raizquadrada(n2);
    		r = r * n1;
    		printf("\n%.2f", r);
    		break;
    	default: 
    		printf("Operação não reconhecida");
	}
}

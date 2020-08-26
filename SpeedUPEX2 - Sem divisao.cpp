#include <iostream>
#include <sys/time.h>

//Filipi de Luca Valim dos Santos
//RA 22216027-7


int contador=0;//contador para parar o "while"

 
    typedef unsigned long long timestamp_t;// linha 11 a linha 19 função para calcular o tempo de execução 

    static timestamp_t
    get_timestamp ()
    {
      struct timeval now;
      gettimeofday (&now, NULL);
      return  now.tv_usec + (timestamp_t)now.tv_sec * 1000000;
    }



int TestaPrimo3(int n) {// funcao para calcular se o numero eh primo
    
    int EhPrimo,
        d=3;
    if (n <= 1 || (n != 2 && n % 2 == 0))
        EhPrimo = 0;    /* nenhum numero inteiro <= 1 ou par > 2 e' primo */
    else
        EhPrimo = 1;        /* o numero e' primo ate que se prove o contrario */

    while (EhPrimo  && d <= n / 2) {
        if (n % d == 0)
            EhPrimo = 0;
        d = d + 2;        /* testar apenas Ã­mpares*/
    }
    return EhPrimo;
}



using namespace std;

int main(int argc, char** argv) {
	

	
	double aaa = 222;//RA
	double bbb = 160;//RA
	double ccc = 277;//RA
	double p;// produto entre bbb x ccc
	double numPrimos[222];//array para guardar numeros primos
	int i=0;
	double aux = 0;// 0 significa numero nao eh primo   //1 primo
	long double aux2 = 0 ;//variavél para auxiliar o calculo da somatoria dos valores dos numeros primos
	
	p = bbb * ccc;// produto entre numeros do RA
	
	// resultado do produto 44.320
	
	if(p > 5000){ // verificar o valor de p e quais numeros serao calculados

	
	timestamp_t t0 = get_timestamp(); // inicio do calculo de tempo de execução 
	while(contador != 222){// loop para calcular o numeros primos
				
	
	aux = TestaPrimo3(p);	// chamada de função 
	
	if(aux == 1){// verificação se o numero eh primo
	
	numPrimos[i] = p; // guarda o numero primo em um array
   //cout<<numPrimos[i]<<endl;imprime os numeros primos para verificação
	contador++;// cantador para parar o "while"
	i++;
	p--;// descresse o valor 44320 ate para encontrar os 222 numeros primos
	} else p--; // nao encontrou numeros primos
	
					
	}
	timestamp_t t1 = get_timestamp();// fim da medição de tempo
	double secs = (t1 - t0) / 1000000.0L; // transformação do tempo em segundos
	
	for(int j = 0; j < 223; j++){ // loop para auxiliar na somatoria
		
		aux2 = aux2 + numPrimos[j]; // somatória
	
	}
    
		for(int j = 0; j < 222; j++){ // loop para imprimir numeros primos
		
	cout<<"Numeros primos ["<<j<<"]:"<<numPrimos[j]<<endl; //impressao dos numeros primos
	
	}
	cout<<"OBS: imprime 221 primos mas o loop começa em 0 e vai ate 221 que totaliza 222 numeros primos"<<endl;
	cout<<"-----------------------------------------"<<endl;
    
	cout<<"Resultado da somatoria:"<<aux2<<endl; // impressao da somatoria
	cout<<"Tempo gasto"<<secs;	
	
	}else{
		
	timestamp_t t0 = get_timestamp(); // inicio do calculo de tempo de execução 
	while(contador != 222){// loop para calcular o numeros primos
				
	
	aux = TestaPrimo3(p);	// chamada de função 
	
	if(aux == 1){// verificação se o numero eh primo
	
	numPrimos[i] = p; // guarda o numero primo em um array
   //cout<<numPrimos[i]<<endl;imprime os numeros primos para verificação
	contador++;// cantador para parar o "while"
	i++;
	p++;// descresse o valor 44320 ate para encontrar os 222 numeros primos
	} else p++; // nao encontrou numeros primos
	
					
	}
	timestamp_t t1 = get_timestamp();// fim da medição de tempo
	double secs = (t1 - t0) / 1000000.0L; // transformação do tempo em segundos
	
	for(int j = 0; j < 223; j++){ // loop para auxiliar na somatoria
		
		aux2 = aux2 + numPrimos[j]; // somatória
	
	}
    
		for(int j = 0; j < 222; j++){ // loop para imprimir numeros primos
		
	cout<<"Numeros primos ["<<j<<"]:"<<numPrimos[j]<<endl; //impressao dos numeros primos
	
	}
	cout<<"OBS: imprime 221 primos mas o loop começa em 0 e vai ate 221 que totaliza 222 numeros primos"<<endl;
	cout<<"-----------------------------------------"<<endl;
    
	cout<<"Resultado da somatoria:"<<aux2<<endl; // impressao da somatoria
	cout<<"Tempo gasto"<<secs;	
		
	}
	
	return 0;
	
	
}

// tempo de forma tradicional:0.011481


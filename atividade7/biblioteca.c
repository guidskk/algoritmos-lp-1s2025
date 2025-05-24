// retorna o maior entre 2 numeros inteiros

int maior_2n(int a, int b){

    int maior;

    if(a > b){
        maior = a;
    }
    else{
        maior = b;
    }
    return maior;
}

// retorna o maior entre 3 numeros inteiros

int maior_3n(int a, int b, int c){

    return maior_2n(maior_2n(a, b), c);
}

// retorna o maior entre N numeros

int maior_n(int numeros[], int n){

    int maior = numeros[0];

    for(int i = 0; i < n; i++){
        maior = maior_2n(maior, numeros[i]);
    }
    return maior;
}

// verifica se um dado numero é primo (1) ou não (0)

int verificar_numero_primo(int n){
    if(n < 2){
        return 0;
    }

    if((n % 2 == 0) && (n != 2)){
        return 0;
    }

    for(int i = 3; i < n; i += 2){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

// retorna o menor entre 2 numeros inteiros

int menor_2n(int a, int b){
    
    int menor; 

    if(a < b){
        menor = a;
    }
    else{
        menor = b;
    }
    return menor;
}

// retorna o menor entre 3 numeros inteiros

int menor_3n(int a, int b, int c){
    
    return menor_2n(menor_2n(a, b), c);
}

// retorna o menor entre N numeros inteiros

int menor_n(int numeros[], int n){

    int menor = numeros[0];

    for(int i = 0; i < n; i++){
        menor = menor_2n(menor, numeros[i]);
    }
    return menor;
}

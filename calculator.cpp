#include <iostream>
int calcplus(int Number_one, int Numbert_two){
        int result = Number_one +  Numbert_two;
        return result;
}

int calcless(int Number_one, int Numbert_two){
        int result = Number_one -  Numbert_two;
        return result;
}

int calcdivision(int Number_one, int Numbert_two){
        int result = Number_one /  Numbert_two;
        return result;
}

int calcmultiplication(int Number_one, int Numbert_two){
        int result = Number_one *  Numbert_two;
        return result;
}


int main(){
    std::string calcType;
    std::string divisao = "/", multiplicaçao = "*", subtraçao = "-";
    std::cout << "Escolha entre um desses sinais para realizar o calculo: + (adiçao) / (divisao) * (multiplicaçao) - (subtraçao)" << std::endl;
    std::cin >> calcType;
    std::cout << "modo de calculo escolhido: " << calcType << std::endl;;
    std::string adicao = "+"; 
    if(calcType == adicao){
        int numberone,numbertwo;
        std::cout << "Voce escolheu adiçao, digite os numeros desejados: ";
        std::cin >> numberone >> numbertwo;
        int result = calcplus(numberone, numbertwo);
        std::cout << "resultado do calculo: " << result;
    }

    if(calcType == divisao){
        int numberone,numbertwo;
        std::cout << "Voce escolheu divisao, digite os numeros desejados: ";
        std::cin >> numberone >> numbertwo;
        int result = calcdivision(numberone, numbertwo);
        std::cout << "resultado do calculo: " << result;
    }

    if(calcType == subtraçao){
        int numberone,numbertwo;
        std::cout << "Voce escolheu subtraçao, digite os numeros desejados: ";
        std::cin >> numberone >> numbertwo;
        int result = calcless(numberone, numbertwo);
        std::cout << "resultado do calculo: " << result;
    }

    if(calcType == multiplicaçao){
        int numberone,numbertwo;
        std::cout << "Voce escolheu multiplicaçao, digite os numeros desejados: ";
        std::cin >> numberone >> numbertwo;
        int result = calcmultiplication(numberone, numbertwo);
        std::cout << "resultado do calculo: " << result;
    }
}
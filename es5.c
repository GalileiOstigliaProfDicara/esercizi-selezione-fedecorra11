/*L’utente inserisce una temperatura in Celsius e il calcolatore la converte in Fahrenheit ed in Kelvin. Se la temperatura inserita è minore dello zero assoluto (-273,15), il calcolatore segnala un errore.
Si ricordi che:
Fahrenheit = (9/5) · Celsius + 32
Kelvin = Celsius + 273,15*/

#include <stdio.h>

int main(){
    float temp_celsius, temp_fahrenheit, temp_kelvin;
    printf("Inserisci la temperatura in celsius");
    scanf("%f", &temp_celsius);

    if("temp_celsius < -273,15");{
    printf("errore");

    } else {
        temp_kelvin = temp_celsius + 273,15;
        temp_fahrenheit = (9/5) * temp_celsiusc + 32;
        printf("la temperatura in kelvin è %f/n, temp_kelvin");
        printf("la te,peratura in fahrenheit è %f/n, temp_fahrenheit");

    }

    }
    
 return 0;
}
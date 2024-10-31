public class Punto {
    float x;
    float y;

    Punto(float x, float y){ //metodo costruttore modificato per obbligare l'inizializzazione quando si crea un nuovo oggetto
        this.x=x;  //this.x si riferisce alla variabile x della classe mentre la seconda x è la variabile locale del metodo
        this.y=y;
    }

    float calcDistanceFromCenter(){
        return (float) Math.sqrt(Math.pow(x, 2) + Math.pow(y, 2));
    }

    float calcDistanceTwoPoints(Punto b){
        return (float) Math.sqrt((Math.pow(b.x - x, 2) + Math.pow(b.y - y, 2)));
    }
}

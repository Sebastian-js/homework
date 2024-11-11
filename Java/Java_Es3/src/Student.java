import java.util.ArrayList;
import java.util.List;

public class Student {
    String nome;
    String cognome;
    String classe;
    List<Voto> voti = new ArrayList<>();

    Student(String nome, String cognome, String classe) {
        this.nome=nome;
        this.cognome=cognome;
        this.classe=classe;
    }

    void add_voto(float voto, String materia, String data) {
        this.voti.add(new Voto(voto, materia, data));
    }

    float getAverage() {
        float media_voti, sum=0;
        for(int i=0; i<voti.size(); i++){
            sum += voti.get(i).voto;
        }
        return (float) sum / voti.size();
    }
    float getAverage(String subject) { //metodi con lo stesso nome ma una delle due non ha parametri, overload. Se nel main viene richiamata senza parametri il codice usa la funzione senza parametri, se invece si inserisce un parametro il codice richiama la seconda
        float sum=0;
        int n_voti=0;
        for(int i=0; i< voti.size(); i++) {
            if(subject.equals(voti.get(i).materia)) {
                sum += voti.get(i).voto;
                n_voti++;
            }
        }
        return (float) sum / n_voti;
    }
}

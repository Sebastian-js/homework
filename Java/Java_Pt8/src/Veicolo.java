abstract class Veicolo {
    int id;
    String marca;
    int anno;
    int cyl;

    public Veicolo(int id, String marca, int anno, int cyl) {
        this.id = id;
        this.marca = marca;
        this.anno = anno;
        this.cyl = cyl;
    }

    String getMarca() {
        return marca;
    }
    int getAnno() {
        return anno;
    }
    int getCyl() {
        return cyl;
    }
    int getId() {
        return id;
    }

    public String toString(){
        return "\nMarca: " + marca + "\nAnno: " + anno + "\nCilindrata: " + cyl + "cm3\nId: " + id;
    }
}


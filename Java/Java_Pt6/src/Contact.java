public class Contact {
    String name;
    String surname;
    String phone;

    Contact(String name, String surname, String phone) {
        this.name = name;
        this.surname = surname;
        this.phone = phone;
    }

    String getName() {
        return name;
    }
    String getSurname() {
        return surname;
    }
    String getPhone() {
        return phone;
    }

    @Override
    /* for printing the object in System.out.println(Contact) instead of
    System.out.println("Nome: " + Contact.name + "\nCognome: " + Contact.surname + "\nNumero di telefono: " + Contact.phone + "\n") */
    public String toString() {
        return "Nome: " + name + "\nCognome: " + surname + "\nNumero di telefono: " + phone + "\n";
    }
}

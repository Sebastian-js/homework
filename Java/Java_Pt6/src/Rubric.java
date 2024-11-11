import java.util.ArrayList;
import java.util.List;

public class Rubric {
    List<Contact> contacts = new ArrayList<>();

    void addContact(Contact contact) {
        contacts.add(contact);
    }

    void removeContact(Contact contact) {
        //searches first occurence of the object and removes it by shifting all elements after it to left by one
        contacts.remove(contact);
    }

    void printContacts() {
        for(int i=0; i<contacts.size(); i++) { //usage alternative to Contact c : contacts
            System.out.println(contacts.get(i));
        }
    }

    Contact getContact(String name, String surname) throws Exception {
        for (int i=0; i<contacts.size(); i++) {
            if (contacts.get(i).name.equals(name) && contacts.get(i).surname.equals(surname)) {
                return contacts.get(i);
            }
        }
        /// in case it doesn't find the contact is throws an exception.
        /// throw is the method and declares a new Exception object with the message saved in ""
        throw new Exception("ContactNotFoundException");
    }

    /* overrides a general method only for Rubric objects,
    changes the System.out.println() method to print the entire object */
    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        for (Contact c : contacts) { //c for each iteration is an object of the list
            sb.append("Nome: " + c.name + " - Cognome: " + c.surname + " - Phone: " + c.phone + "\n");
        }
        return sb.toString();
    }
}

// Q19. WAP to give an example of multi level inheritance.

// This program demonstrates inheritance in Java, with a hierarchy of Animal, Dog, and Poodle classes
// Each class has some behavior that is specific to it, as well as behavior inherited from its parent classes

class Animal {
    public void eat() {
        System.out.println("The animal is eating.");
    }
}

class Dog extends Animal {
    public void bark() {
        System.out.println("The dog is barking.");
    }
}

class Poodle extends Dog {
    public void fetch() {
        System.out.println("The poodle is fetching.");
    }
}

public class Q19 {
    public static void main(String[] args) {
        // create a new Poodle object
        Poodle poodle = new Poodle();

        // call the eat() method inherited from Animal
        poodle.eat();

        // call the bark() method inherited from Dog
        poodle.bark();

        // call the fetch() method defined in Poodle
        poodle.fetch();
    }

}
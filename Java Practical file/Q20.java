// Q20. WAP to given an example of Hierarchical inheritance.

// Define a parent class called Animal
class Animal {
    // Define a public method named eat
    public void eat() {
        System.out.println("The animal is eating.");
    }
}

// Define a child class called Cat that inherits from Animal
class Cat extends Animal {
    // Define a public method named meow
    public void meow() {
        System.out.println("The cat is meowing.");
    }
}

// Define another child class called Dog that also inherits from Animal
class Dog extends Animal {
    // Define a public method named bark
    public void bark() {
        System.out.println("The dog is barking.");
    }
}

// Define the main class
public class Q20 {
    public static void main(String[] args) {
        // Create an instance of Cat and an instance of Dog
        Cat cat = new Cat();
        Dog dog = new Dog();

        // Call the eat method on both instances
        cat.eat(); // inherited from Animal
        dog.eat(); // inherited from Animal

        // Call the meow method on the Cat instance and the bark method on the Dog
        // instance
        cat.meow(); // defined in Cat
        dog.bark(); // defined in Dog
    }

}

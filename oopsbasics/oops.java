package oopsbasics;

public class oops {
    public static void main(String[] args) {
        // System.out.println("Hello World");

        // Person p1 = new Person();
        // p1.name = "Ashirwad";
        // p1.age = 21;

        // System.out.println(p1.age + " " + p1.name);
        // p1.eat();
        // p1.walk(45);
        
        // Person p2 = new Person(23, "Ashi");
        // System.out.println(p2.age + " " + p2.name);
        // p2.eat();
        // p2.walk(45);

        // System.out.println(Person.count);

        Developer d1 = new Developer(23, "Ashirwad");
        System.out.println(d1.age + " " + d1.name);


    }
}

class Developer extends Person {

    public Developer(int age, String name) {
        super(age, name);
    }



}

class Person {
    String name;
    int age;

    static int count;

    // public Person(){
    //     count++;
    //     System.out.println("creating an object");
    // }

    public Person(int age, String name){
        // this();
        this.age = age;
        this.name = name;
    }

    void walk(){
        System.out.println(name + " is walking.");
    }

    void eat(){
        System.out.println(name + " is eating.");
    }

    void walk(int steps){
        System.out.println(name + " walked " + steps + " steps.");
    }

    void doWork(){
        System.out.println("Person is working.");
    }
}
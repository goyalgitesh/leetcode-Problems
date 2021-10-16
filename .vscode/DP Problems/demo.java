import java.util.*;

class A {
    int count  = 2;
    
    void print() {
        System.out.println("Hello");
    }
}

class B extends A {
    int count  = 5;
    
    void print() {
    System.out.println("World");
    }
    }


public class demo {

    public static void main(String[] args) {

        B b = new B();
        A a = new A();
        A c = new B();
        b.print();
        a.print();
        c.print();

        //System.out.println("Hello World!");
    }
        
}

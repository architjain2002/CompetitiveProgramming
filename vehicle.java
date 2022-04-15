interface Driveable {
    void horn();
}

abstract class Base {
    Base() {
        System.out.println("base constructor is called...");
    }

    abstract void horn();
}

class twoWheel extends Base implements Driveable {
    twoWheel() {
        System.out.println("2 wheeler");
    }

    public void horn() {
        System.out.println("pom pom pom");
    }
}

class threeWheel extends Base implements Driveable {

    threeWheel() {
        System.out.println("3 wheeler");
    }

    public void horn() {
        System.out.println("beep beep beep");
    }
}

class fourWheel extends Base implements Driveable {
    fourWheel() {
        System.out.println("4 wheeler");
    }

    public void horn() {
        System.out.println("honk honk honk");
    }
}

class vehicle {
    public static void main(String args[]) {
        Base b = new twoWheel();
        b.horn();

        twoWheel tw = new twoWheel();
        tw.horn();

        threeWheel thw = new threeWheel();
        thw.horn();

        fourWheel fw = new fourWheel();
        fw.horn();

    }
}
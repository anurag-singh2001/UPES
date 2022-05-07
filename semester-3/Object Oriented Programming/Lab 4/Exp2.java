class player {
    String name;
    int age;

    player(String n, int a) {
        name = n;
        age = a;
    }

    void show() {
        System.out.println("Player name : " + name);
        System.out.println("Age : " + age);
    }
}

class criket_player extends player {
    String type;

    criket_player(String n, String t, int a) {
        super(n, a);
        type = t;
    }

    public void show() {
        super.show();
        System.out.println("Player type : " + type);
    }
}

class football_player extends player {
    String type;

    football_player(String n, String t, int a) {
        super(n, a);
        type = t;
    }

    public void show() {
        super.show();
        System.out.println("Player type : " + type);
    }
}

class hockey_player extends player {
    String type;

    hockey_player(String n, String t, int a) {
        super(n, a);
        type = t;
    }

    public void show() {
        super.show();
        System.out.println("Player type : " + type);
    }
}

class Exp2 {
    public static void main(String args[]) {
        criket_player c = new criket_player("Anurag", "criket", 20);
        football_player f = new football_player("Rohan", "basketball", 19);
        hockey_player h = new hockey_player("Rahul", "tennis", 18);
        c.show();
        f.show();
        h.show();
    }
}
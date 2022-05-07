import java.io.*;
import java.lang.*;
import java.util.Scanner;

// class xyz {
//     public static void main(String args[]) {
//         String a, b;
//         char c;
//         a = "abc";
//         try {
//             b = a.substring(2,5 );
//             System.out.println(b);
//             c = a.charAt(9);
//             System.out.println(c);
//         } catch (Exception t) {
//             System.out.println("The exception is" + t);
//         }
//         System.out.println("Hari");
//     }
// }

// class xyz {
//     public static void main(String args[]) {
//         int a, b, c, d, e, f;
//         a = 25;
//         b = 4;
//         c = 0;
//         d = 3;
//         try {
//             e = a / b;
//             System.out.println(e);
//             e = a / c;
//             System.out.println(e);
//             e = a / d;
//             System.out.println(e);
//         } catch (ArithmeticException t) {
//             System.out.println("mistake");
//         }
//         System.out.println("Hari");
//     }
// }

// class xyz {
//     public static void main(String args[]) {
//         int a, b, c, d, e, f;
//         a = 25;
//         b = 4;
//         c = 0;
//         d = 3;
//         try {
//             e = a / b;
//             System.out.println(e);
//         } catch (ArithmeticException t) {
//             System.out.println("Error");
//         }
//         try {
//             e = a / c;
//             System.out.println(e);
//         } catch (ArithmeticException t) {
//             System.out.println("Error");
//         }
//         try {
//             e = a / d;
//             System.out.println(e);
//         } catch (ArithmeticException t) {
//             System.out.println("Error");
//         }
//     }
// }

// class xyz {
//     private static int read1() {
//         int i = 2, j;
//         String a;
//         try {
//             Scanner o = new Scanner(System.in);
//             a = o.nextLine();
//             i = Integer.parseInt(a);
//         } catch (Exception t) {
//             System.out.println("Not a number" + t);
//         }
//         return i;
//     }

//     public static void main(String args[]) {
//         int i, a, f[] = { 8, 12, 34, 16 };
//         a = xyz.read1();
//         try {
//             System.out.println(f[a]);
//             i = 25 / 0;
//         } catch (Exception t) {
//             System.out.println("stop" + t);
//         }

//     }
// }

// class xyz {
//     public static void main(String args[]) {
//         int a, b, c, d, e, f;
//         a = 25;
//         b = 4;
//         c = 0;
//         d = 3;
//         try {
//             e = a / b;
//             System.out.println(e);
//             e = a / c;
//             System.out.println(e);
//             e = a / d;
//             System.out.println(e);
//         } finally {
//             System.out.println("Continue");
//         }
//         e = a / d;
//         System.out.println(e);
//     }
// }

class xyz {
    public static void main(String args[]) throws IOException {
        int i;
        float x, y, k, l;
        String a = "", b;
        Scanner o = new Scanner(System.in);
        a = o.nextLine();
        a = a.trim();
        i = a.indexOf(" ");
        b = a.substring(0, i);
        try {
            x = Float.parseFloat(b);
        } catch (Exception e) {
            x = 5;
        }
        b = a.substring(i + 1);
        y = Float.parseFloat(b.trim());
        k = x + y;
        l = x * y;
        System.out.println(k + " " + l);
    }
}

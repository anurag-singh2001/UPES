class comp {
   static float real,img;
  public void getComp(float a,float b)
   { real=a;img=b; }
   public void print1() 
   { 
   System.out.println(real+"+"+img+"i");
   }

    public void mul(comp b){
        real = real*b.real;
        img = -(img*b.img);

    }
}

public class Exp8{
    public static void main(String[] args) {
        comp a = new comp();
        comp b = new comp();
        b.getComp(10, 2);
        a.mul(b);
        a.print1();
    }
}
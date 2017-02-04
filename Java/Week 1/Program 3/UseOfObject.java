/**
 * Created by ReezPatel on 03-Feb-17.
 */
public class UseOfObject {
    public static void main(String args[]) {
        Add a = new Add();
        a.add(5, 10.5f);
    }
}

class Add{
    void add(int a,float b){
        System.out.println(a+b);
    }
}

class Gen<T>{
    T ob;
    Gen(T o){
    ob = o;
    }
    T getob();
    return ob;
    }
    void show Type(){
    System.out.println("Type of T is" +ob.getClass())
    }


class GenDemo{
    public static void main(String[] args) {
        Gen<Integer>iOb;
        iOb=new Gen<Integer>(88);
        iOb.showType();
        int v=iOb.getob();
        System.out.println("value:"+v);

    }
}

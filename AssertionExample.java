public class AssertionExample{
    public static void main(String[] args) {
        int num=Integer.parseInt(args[0]);
        assert num>=10;
        assert num<20:"number should be less than 20";

        System.out.println("pass");
    }
}
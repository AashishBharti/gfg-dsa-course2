public class Calculator {
    public static <T extends Number> double add(T a, T b) {
        double sum = a.doubleValue() + b.doubleValue();
        return sum;
    }

    public static void main(String[] args) {
        double sum1 = Calculator.add(3, 4.5); // returns 7.5
        double sum2 = Calculator.add(2.5f, 4.8); // returns 7.3
        double sum3 = Calculator.add(2.0, 5L); // returns 7.0

        System.out.println("Sum 1: " + sum1);
        System.out.println("Sum 2: " + sum2);
        System.out.println("Sum 3: " + sum3);
    }
}
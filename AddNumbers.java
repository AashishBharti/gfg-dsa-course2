

    public class AddNumbers<T extends Number> {
        private T number1;
        private T number2;
     
        public AddNumbers(T num1, T num2) {
           this.number1 = num1;
           this.number2 = num2;
        }
     
        public T add() {
           if(number1 instanceof Integer && number2 instanceof Integer) {
              Integer sum = number1.intValue() + number2.intValue();
              return (T) sum;
           } else {
              throw new IllegalArgumentException("Cannot add non-integer numbers");
           }
        }
     
        public static void main(String[] args) {
           AddNumbers<Integer> addIntegers = new AddNumbers<>(50, 10);
           Integer sum = addIntegers.add();
           System.out.println("Sum of integers is: " + sum);
        }
     }
    

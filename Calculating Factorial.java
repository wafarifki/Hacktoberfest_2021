class jav
{

    public static int factorial(int number) {
        if (number == 0) {
            return 1;
        }
        if (number < 0) {
            return number;
        }
        int product = number;
        while (--number != 0) {
        product *= number;
        }
        return product;
    }

    public static void main(String[] args) {
        System.out.println(factorial(5));
        //output 1*2*3*4*5 = 120
    }

}

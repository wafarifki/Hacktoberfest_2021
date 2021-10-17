class convertTobinarycode
{
    public static String toBinaryString(int number) {
        String binary = "";
        if (number == 0) {
            return "0";
        }
        while (number != 0) {
            binary = (number % 2) + binary;
            number /= 2;
        }
        return binary;
    }

    public static void main(String[] args) {
        System.out.println(toBinaryString(127));
        //output 1111111
    }

}
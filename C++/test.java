public class test {
    public static void main(String[] args)
    {
        int myValue = 100000;

        System.out.println("Integer Minimum Value: " + Integer.MIN_VALUE);
        System.out.println("Integer Maximum Value: " + Integer.MAX_VALUE);
        System.out.println("Busted Minimum Value: " + (Integer.MIN_VALUE - 1)); // Underflow
        System.out.println("Busted Maximum Value: " + (Integer.MAX_VALUE + 1)); // Overflow

        byte myMinByteValue = Byte.MIN_VALUE;
        byte myMaxByteValue = Byte.MAX_VALUE;
        System.out.println("Byte Minimum Value: "+ myMinByteValue);
        System.out.println("Byte Maximum Value: "+ myMaxByteValue);
        
        short myMinShortValue = Short.MIN_VALUE;
        short myMaxShortValue = Short.MAX_VALUE;
        System.out.println("Short Minimum Value: "+ myMinShortValue);
        System.out.println("Short Maximum Value: "+ myMaxShortValue);

        long myLongValue = 100L;  //while using long data type always use "L" at the last of the value,
                                 // if "L" would be not present java will cast that long data type to integer.

        long myMinLongValue = Long.MIN_VALUE;
        long myMaxLongValue = Long.MAX_VALUE;
        System.out.println("Long Minimum Value: "+ myMinLongValue);
        System.out.println("Long Maximum Value: " + myMaxLongValue);
        long BigLongLiteral = 2147483647; //This will be treated as an Integer value by java
                                         // As "L" is not mentioned in the initialization part.
    }

}
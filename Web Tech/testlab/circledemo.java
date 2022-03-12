public class circledemo {
    public class circledemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        circle c = new circle();
        System.out.println("Enter the radius : ");
        c.radius = sc.nextInt();
        c.setDim(c.radius);
        c.findArea();
        c.findPerimeter();
        System.out.println("Diameter is : "+ c.diameter);
        System.out.println("Area is : "+ c.area);
        System.out.println("Perimeter is : "+ c.perimeter);
        sc.close();
    }
}

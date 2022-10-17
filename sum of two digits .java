import java.util.*;  
class SumOfNumbers  
{  
public static void main(String args[])  
{  
int x, y, sum;  
Scanner sc = new Scanner(System.in);  
System.out.print("Enter the first number: ");  
x = sc.nextInt();  
System.out.print("Enter the second number: ");  
y = sc.nextInt();  
  
System.out.println("The sum of two numbers x and y is: " + sum(x,y));  
}  
int sum(int a, int b)  
{  
int sum = a + b;  
return sum;  
}  
}  

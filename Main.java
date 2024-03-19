import java.util.Scanner;

public class Main {
    static int findSmallestPositive(int[] arr) {
        int min = -1;
        for(int i = 0; i < arr.length; i++) {
            if (arr[i] > 0) {
                min = arr[i];
                break;
            }
        }

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > 0 && arr[i] < min) {
                min = arr[i];
            }
        }
        return min;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Take the array size from the user
        System.out.println("Enter the size of the array: ");
        int arr_size = 0;
        if (sc.hasNextInt()) {
            arr_size = sc.nextInt();
        }

        // Initialize the array's
        // size using user input
        int[] arr = new int[arr_size];

        // Take user elements for the array
        System.out.println(
                "Enter the elements of the array: ");
        for (int i = 0; i < arr_size; i++) {
            if (sc.hasNextInt()) {
                arr[i] = sc.nextInt();
            }
        }
        int smallestPositive = findSmallestPositive(arr);
        if (smallestPositive == -1) {
            System.out.println("No positive number found in the array");
        } else {
            System.out.println("The smallest positive number is: " + smallestPositive);
        }
    }


}
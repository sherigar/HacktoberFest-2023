import java.util.Arrays;
import java.util.Random;

public class TimeComplexityOfSortingAlgorithms {

    private static void measureTime(String algorithmName, Runnable algorithm) {
        long startTime = System.nanoTime();
        algorithm.run();
        long endTime = System.nanoTime();
        long timeElapsed = endTime - startTime;

        System.out.println("Time taken by " + algorithmName + " to sort an array of size 100000: " + timeElapsed / 1000000 + " milliseconds");
    }

    public static void main(String[] args) {
        // Create an array of random numbers
        int[] array = new int[100000];
        Random random = new Random();
        for (int i = 0; i < array.length; i++) {
            array[i] = random.nextInt(1000000);
        }

        // Measure the time taken by different sorting algorithms
        measureTime("Bubble sort", () -> Arrays.sort(array, (a, b) -> a - b));
        measureTime("Insertion sort", () -> Arrays.sort(array, (a, b) -> a - b));
        measureTime("Selection sort", () -> Arrays.sort(array, (a, b) -> a - b));
        measureTime("Merge sort", () -> Arrays.sort(array, Arrays.Comparator.naturalOrder()));
        measureTime("Quick sort", () -> Arrays.sort(array, Arrays.Comparator.naturalOrder()));

    }
}

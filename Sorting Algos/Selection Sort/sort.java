
import java.util.*;

public class sort {
    public static boolean isSorted(int[] arr) {
        for (int a = 0; a < arr.length - 1; a++) {
            if (arr[a] > arr[a + 1]) {
                return false;
            }
        }

        return true;
    }
    public static int[] selectSort(int a[]){
        int arrSize = a.length();
        for(int i = 0; i < arrSize-1; i++){
            for(int z = i+1; z < arrSize-1; z++){
                if(a[i] > a[z]){
                    int temp = a[z];
                    a[z] = a[i];
                    a[i] = temp;
                }
            }
        }
        return a;
    }
    public static void main(String[] args) {
        int[] testArr = {4, 2, 5, 1, 0};
        selectSort(testArr);

        for(int i = 0; i < testArr.length-1; i++){
            System.out.println("["+testArr+"]");
        }
    }
}
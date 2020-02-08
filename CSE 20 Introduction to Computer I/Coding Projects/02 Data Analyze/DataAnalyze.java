package Project;
import java.util.Scanner;
public class DataAnalyze1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int sampSize = 0;

		System.out.print("Please enter the sample size: ");
		sampSize = input.nextInt();

		float[][] arr = new float[sampSize][4];
		float[] avg = new float[4];
		float min = 0, max = 0;


		if (sampSize<=0)
			System.out.print("No data to analyze. Ending program.");

		else {

			for (int i = 0; i < 4; i++) {
				System.out.println("Enter the numbers for trial " + (i+1));
				for (int j = 0; j < sampSize; j++) {
					System.out.print("Enter sample #" + (j + 1) + ": ");
					arr[j][i] = input.nextFloat();
					System.out.println();

				}

			}
			
			System.out.println("\tSample #\tTrial 1\t\tTrial 2\t\tTrial 3\t\tTrial 4"); 
			for (int i = 0; i < sampSize;i++) {
				System.out.print("\t"+(i + 1));
				for (int j = 0; j < 4;j++) {
					System.out.print("\t\t" + arr[i][j]);

				}
				System.out.println();
			}
			System.out.print("\t--------------------------------------------------");
			System.out.print("\nAverages: \t\t");
			float total = 0;

			for (int j = 0; j < 4; j++) {
				total = 0;
				for (int k = 0; k < sampSize;k++) {
					total += arr[k][j];
				}
				avg[j] = (total)/sampSize;
				System.out.print(avg[j] + "\t\t");
			}

			for (int i = 0; i < avg.length;i++) {
				if (max < avg[i]) {
					max = avg[i];
				}

			}
			min = max;
			for (int i = 0; i < avg.length; i++) {
				if (avg[i]< min)
					min = avg[i];
			}
			
			System.out.println();
			System.out.println();
			System.out.println("Min Average: " + min);
			System.out.println("Max Average: " + max);
			
			if(max == min) {
				System.out.print("\nThe trials match EXACTLY!");
			}
			else if (max < (2 * min)) {
				System.out.print("\nThe trials concur with each other!");
			}	
			else {
				System.out.print("\nThe trials do NOT concur!");
			}
		}
	}
}












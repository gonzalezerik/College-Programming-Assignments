package project01;
import java.util.Scanner;
public class Shop {


	public static String numSuffix(int i) {
		int rem = i % 10;
		switch (rem) {
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			return (i + "th");
		case 1:
			if (i % 100 != 11)
				return (i + "st");
			else
				return (i + "th");
		case 2:
			if (i % 100 != 12)
				return (i + "nd");
			else
				return (i + "th");
		case 3:
			if (i % 100 != 13)
				return (i + "rd");
			else
				return (i + "th");
		default:
			break;
		}
		return "";
	}

	public static int intro(int choices) {
		Scanner input = new Scanner(System.in);
		System.out.println("This program supports 4 functions: ");
		System.out.println("\t1. Setup Shop");
		System.out.println("\t2. Buy");
		System.out.println("\t3. List Items");
		System.out.println("\t4. Checkout");
		System.out.print("Please choose the function you want: ");

		choices = input.nextInt();
		return choices;
	}


	public static int setUp(int numItems) {
		numItems = 0;
		Scanner input = new Scanner(System.in);
		System.out.println("\n");

		System.out.print("Please enter the number of items to setup shop: ");
		numItems = input.nextInt();
		return numItems;
	}

	public static String enterNames(int i) {
		Scanner input = new Scanner(System.in);


		System.out.print("Enter the name of the " + numSuffix(i + 1) + " product: ");
		String names = input.next();
		return names;

	}

	public static double enterPrice(String[] names2, int i) {
		Scanner input = new Scanner(System.in);
		double price = 0;

		System.out.print("Enter the per package price of " + names2[i] + ": ");
		price = input.nextDouble();
		return price;
	}

	public static double enterPack(String[] names2, int i) {
		Scanner input = new Scanner(System.in);
		double pack = 0;

		System.out.print("Enter the number of packages ('x') to qualify for Special Discount (buy 'x' get 1 free) ");
		System.out.print("for " + names2[i] + ", or 0 if no Special Discount offered: ");
		pack = input.nextDouble();
		return pack;
	}


	public static double buy(String[] names2, int items, int i) {
		Scanner input = new Scanner(System.in);
		double numPack = 0;


		System.out.print("Enter the number of " + names2[i] + " packages to by: ");
		numPack = input.nextDouble();

		return numPack;


	}

	public static double items(int items, String[] names2, Double[] price2, Double[] pack2, Double[] numPack) {
		double total = 0;

		for (int i = 0; i < items; i++) {
			if (numPack[i] != 0) {
				System.out.println(numPack[i] + " packages of " + names2[i] + " @ $" + price2[i] + " per pkg = $" + (numPack[i] * price2[i]));
				total += (numPack[i] * price2[i]);
			}

		} 
		return total;	
	}

	public static void checkout(double subTotal, int items, Double[] numPack, Double[] price2, Double[] pack2,String[] names2) {
		Double[] newTotal = new Double[items];
		double total = 0;
		int count = 0;

		System.out.println("Original Sub Total: \t$" + subTotal);


		/*for (int i = 0; i < items; i++) {
			if(numPack[i] != 0) {
				newTotal[i] = (numPack[i] / pack2[i]);
				newTotal[i] = (numPack[i] / newTotal[i]);
				newTotal[i] = (newTotal[i] * price2[i]);
				total += newTotal[i];
			}
		}*/
		int count2 = 0;
		for(int i = 0; i < items; i++) {
			for (int j = 0; j < numPack[i]; j++) {
			if (pack2[i] < j) {
				count++;
			}
			}
		}
		
	

		/*for (int i = 0; i < items; i++){
			for(int j = 0; j < numPack[i];j++) {
					if (numPack[i]!= 0) {
						if(pack2[i] % i == 0) {
							count++;
						}

						newTotal[i] = (count * price2[i]);
						System.out.println("newTotal: " + newTotal[i]);
						total += newTotal[i];
						System.out.println("total: " + total);

					}
				}
			}
			*/

		System.out.println("Special Discounts: \t$-" + count);
	}



	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int numItems = 0;
		int choices = 0;
		int count = 0;
		int count2 = 0;
		int items = 0;
		double addDis = 0;
		double addRate = 0;
		double subTotal = 0;

		String[] names2 = new String[numItems];
		Double[] price2 = new Double[numItems];
		Double[] pack2 = new Double[numItems];
		Double[] numPack = new Double[numItems];



		do {
			choices = intro(choices);
			switch(choices) {
			case 1:
				items = setUp(numItems);
				names2 = new String[items];
				price2 = new Double[items];
				pack2 = new Double[items];

				for (int i = 0; i < items; i++) {

					names2[i] = enterNames(i);
					price2[i] = enterPrice(names2, i);
					pack2[i] = enterPack(names2, i);

				}


				System.out.print("Enter the dollar amount to qualify for Additional Discount (or 0 if none offered): ");
				addDis = input.nextDouble();

				System.out.print("Enter the Additional Discount rate (e.g., 0.1 for 10%): ");
				addRate = input.nextDouble();

				while (addRate > 0.5 || addRate < 0) {
					System.out.print("Invalid input. Enter a value > 0 and <= 0.5: ");
					addRate = input.nextDouble();
				}

				break;


			case 2:
				System.out.println("\n");
				numPack = new Double[items];

				for (int i = 0; i < items; i++) {

					numPack[i] = buy(names2, items, i);

				}
				break;
			case 3:
				subTotal = items(items, names2, price2, pack2,numPack);
				break;
			case 4:
				checkout(subTotal, items, numPack, price2, pack2,names2);
				count = 4;
				break;
			}

			System.out.println("\n");
		} while(count != 4);


	}

}
/*
 * enterNames(numItems, names,price,pack);

		System.out.print("Enter the dollar amount to qualify for Additional Discount (or 0 if none offered): ");
		addDis = input.nextDouble();

		System.out.print("Enter the Additional Discount rate (e.g., 0.1 for 10%): ");
		addRate = input.nextDouble();

		while (addRate > 0.5 || addRate < 0) {
			System.out.print("Invalid input. Enter a value > 0 and <= 0.5: ");
			addRate = input.nextDouble();
		}
 */

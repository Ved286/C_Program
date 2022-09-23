// C# program to Decimal to binary conversion
// using bitwise operator
// Size of an integer is assumed to be 32 bits
using System;
class gfg {
	// Function that convert Decimal to binary
	public void decToBinary(int n)
	{
		// Size of an integer is assumed to be 32 bits
		for (int i = 31; i >= 0; i--) {
			int k = n >> i;
			if ((k & 1) > 0)
				Console.Write("1");
			else
				Console.Write("0");
		}
	}
}

class geek {
	// driver code
	public static int Main()
	{
		gfg g = new gfg();
		int n = 32;
		g.decToBinary(n);
		return 0;
	}
}


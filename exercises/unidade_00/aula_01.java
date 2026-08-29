import java.util.*; 

class aula_01 {
	public static int sum_fds ( int a, int b) 
	{
		int resp = a + b; 

		return (resp); 
	}

	public static int []  invert (int [] a) 
	{
		int size = a.length;
		int[] other_arr = new int[size];

		if (size <= 0 ) 
		{
			return other_arr;
		} else 
		{
			for (int i = 0; i < size; i++ )
			{
				other_arr[i] = a[size - 1 - i];
			}
			return (other_arr);
		}
		
	 
	}

	public static void main ( String args [ ] ) 

	{
		// adicionando variavel 
		int value = 7; 
		int var = 6; 
		Scanner sc = new Scanner (System.in);
		
	}
}

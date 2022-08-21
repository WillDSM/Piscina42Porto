void	ft_putchar(char c);



void rush(int col, int lin)
{
	int quantlin = 1;
    int quantcol = 2;



while(quantlin <=lin){

	quantcol = 2;

	if(quantlin == 1 || quantlin == lin){
			ft_putchar('A');
			

		while(quantcol < col){

			ft_putchar('B');
			quantcol ++;

		}
		quantlin ++;
		ft_putchar('C');
		ft_putchar('\n');
	}
	else{
		quantcol --;
		while(quantcol <= col){
			//char qc=quantcol+48;
 			//ft_putchar(qc);
 	


			if(quantcol == 1 || quantcol == col){
				ft_putchar('B');

				if(quantcol == col){
					ft_putchar('\n');
				}

			}
			else{
				ft_putchar(' ');
			}
			quantcol ++;

		}
	}
 	quantlin ++;
}

}




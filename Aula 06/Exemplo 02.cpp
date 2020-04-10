
# include  < pilha >

usando  espaço para nome  std ;

void  imprime_pilha (pilha < int > pilha)
{
	printf ( " Pilha: \ n " );
	
	while (! pilha. empty ())
	{
		printf ( " % d \ n " , pilha. top ());
		
		pilha. pop ();
	}
	printf ( " \ n " );
}

int  main ()
{	
	pilha < int > pilha;
	
	pilha. empurrão ( 10 );
	pilha. empurrão ( 9 );
	pilha. empurrão ( 8 );
	pilha. empurrão ( 7 );
	
	imprime_pilha (pilha);
}

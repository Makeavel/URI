pri , seg = map(int , input().split())

if( 3 <= seg and seg <= 96 and seg > pri ):
    print( "crescente" )
    
elif( 3 <= seg and seg <= 96 and seg < pri ):
    print( "minguante" )
    
elif( 0 <= seg and seg <= 2 ):
    print( "nova" )	
    
elif( 97 <= seg and seg <= 100 ):
    print( "cheia" )
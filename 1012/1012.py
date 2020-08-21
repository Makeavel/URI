a , b , c = map(float , input().split())
pi = 3.14159

tri = (a * c)/2
cir = pi * (c * c)
trap = ((a + b) * c)/ 2 
quad = b**2
ret = a * b

print("TRIANGULO: %.3lf" % tri)
print("CIRCULO: %.3lf" % cir)
print("TRAPEZIO: %.3lf" % trap)
print("QUADRADO: %.3lf" % quad)
print("RETANGULO: %.3lf" % ret)
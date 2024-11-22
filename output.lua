x = 8
y = 15
z = 4
w = 1
resultado = 0
for i = 1, 5 do
if x > y then
print(x * 2)
resultado = resultado + x
x = x + 1
else
print(x + y)
resultado = resultado + y
y = y + 3
end
if z < x then
print(z * w)
resultado = resultado + z
end
print(resultado)
w = w * 2
end
print(resultado)
print(x)
print(y)
print(z)
print(w)

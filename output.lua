a = 1
b = 2
c = 3
for i = 1, 2 do
if a ~= 0 then
for i = 1, 2 do
b = b + c
if b ~= 0 then
c = c * 2
else
c = c + 1
end
for i = 1, 2 do
b = b + c
c = c * a
print(b)
print(c)
end
end
else
print(0)
end
a = a + 1
end

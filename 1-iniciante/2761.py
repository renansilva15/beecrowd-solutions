import struct # https://docs.python.org/3/library/struct.html

a, b, c, d = input().split(maxsplit=3)
a = int(a)
b = struct.unpack('f', struct.pack('f', float(b)))[0] # convert python float to c float

print('%d%f%s%s' %(a, b, c, d))
print('%d\t%.6f\t%s\t%s' %(a, b, c, d))
print('%10d%10.6f%10s%10s' %(a, b, c, d))
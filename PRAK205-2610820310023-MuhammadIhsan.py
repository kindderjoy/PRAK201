import math

tinggi, sisi_miring = map(int, input().split())

alas = math.sqrt(sisi_miring**2 - tinggi**2)
keliling = alas + tinggi + sisi_miring
luas = 0.5 * alas * tinggi

print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {tinggi} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")
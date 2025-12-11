from time import timeS

sum = 0
ts = 0
tsp =0
# time at start
ts = time.time()

for i in range(1, 100000000001):
    sum += i

print("Sum :: ", sum)

# time at end
tsp = time.time()
print("Time taken in seconds :: ", tsp - ts)
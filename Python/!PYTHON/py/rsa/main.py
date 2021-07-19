import random

# RSA in python

# Euclid algorithm for finding greatest common divisor
def gcd(a, b):
    while b!= 0:
        a, b = b, a % b
    return a

# Euclid algorithm for finding multiplicative inverse of two numbers
def multi_inverse(e, phi):
    d = 0
    x1 = 0
    x2 = 1
    y1 = 1
    t_phi = phi

    while e > 0:
        t1 = t_phi / e
        t2 = t_phi - t1 * e
        t_phi = e
        e = t2

        x = x2 - t1 * x1
        y = d - t1 * y1

        x2 = x1
        x1 = x
        d = y1
        y1 = y

    #if t_phi == 1:
    return d + phi

'''
def multi_inverse(a, b):
    origin_a = a
    prev_x = 1
    prev_y = 0
    x = 0
    y = 1

    while b != 0:
        t = b
        q = a/b
        b = a % b
        
        a = t
        t = x
        a = prev_x - q * x
        prev_x = t
        
        t = y
        y = prev_y - q * y
        prev_y = t

    return int(origin_a + prev_y)
'''

# miller rabin prime checker
def is_prime(n, k=40):
    if n == 2:
        return True
    if n % 2 == 0:
        return False

    r, s = 0, n - 1
    while s % 2 == 0:
        r += 1
        s //= 2

    for i in range(k):
        a = random.randrange(2, n - 1)
        x = (a ** s) % n
        if x == 1 or x == n - 1:
            continue

        for i in range(r - 1):
            x = (x ** 2) % n
            if x == n - 1:
                break
        else:
            return False
        
    return True

# generate the key pair
def gen_keypair(p, q):
    if is_prime(p) == False or is_prime(q) == False:
        raise ValueError("p and q must both be prime!")
    elif p == q:
        raise ValueError("p and q cannot be the same number!")

    n = p * q
    phi = (p - 1) * (q - 1)
    e = random.randrange(1, phi)

    # Euclid Algorithm, verify e and phi are coprime
    g = gcd(e, phi)
    while g != 1:
        e = random.randrange(1, phi)
        g = gcd(e, phi)

    d = multi_inverse(e, phi) # gen private key
    return [[e, n], [d, n]]

def encrypt(key, txt):
    key, n = key
    cipher = [(ord(c) ** key) % n for c in txt]
    return cipher

def decrypt(key, txt):
    key, n = key
    plain = [chr((c ** key) % n) for c in txt]
    return "".join(plain)

p = 1019 # first prime number
q = 941 # second prime number
public, private = gen_keypair(p, q)

plain_txt = "message!"
cipher_txt = encrypt(private, plain_txt)
decrypted = decrypt(public, cipher_txt)

print(f"Plain Text: {plain_txt}")
print(f"Cipher Text: {''.join([chr(i) for i in cipher_txt])}")
print(f"Decrypted: {decrypted}")

def factorail(n) :
    result = 1
    if n > 1 :
        for j in range(1, n+1) :
            result = result * j
    return result

def binomail(k,n) :
    n_fact = factorail(n)
    k_fact = factorail(k)
    n_minus_k = factorail(n-k)
    binomail_cof = n_fact / (k_fact * (n_minus_k))
    return binomail_cof

print(binomail(6,49))

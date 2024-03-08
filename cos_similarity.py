import numpy as np
def cos_similaraty (x, y) :
    result = 2 * np.sum(x*y) / ((np.sum(x**2) + np.sum(y**2)))
    return result 


if __name__ == "__main__" :
    x = np.array([2, 1, 2, 3, 2, 9])
    y = np.array([3, 4, 2, 4, 5, 5])
    print(cos_similaraty(x , y))
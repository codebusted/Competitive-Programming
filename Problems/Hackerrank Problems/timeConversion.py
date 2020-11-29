
import os
import sys

#
# Complete the timeConversion function below.
#
def timeConversion(s):
    res = ''
    hr = int(s[:2])
    if s[8] == 'P':
    	if hr != 12:
        	hr = hr + 12
    	res = res + str(hr)
    	res = res + s[2:8]
    else:
    	if hr == 12:
        	hr = '00'
        	res = res + str(hr)
        	res = res + s[2:8]
    	else:
        	res = s[:8]
    return res

if __name__ == '__main__':
    #f = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    print(result)

    #f.write(result + '\n')

    #f.close()
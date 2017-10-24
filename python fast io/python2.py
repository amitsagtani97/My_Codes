import atexit
import io
import sys
import math
 
buff = io.BytesIO()
sys.stdout = buff
 
 
@atexit.register
def write():
    sys.__stdout__.write(buff.getvalue())
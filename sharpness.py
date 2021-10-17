import cv2
import glob
from dom import DOM
from PIL import Image 
import PIL 
import os
import numpy as np


#Using glob to read the image, Main reason of using Glob here because it help in reading multiple images at a time by using the syntax *.JPG..
for img_name in glob.glob("C:/Users/saloni.shukla/Downloads/tesla.JPG"):
    img=cv2.imread(img_name)
    iqa = DOM() #DOM is a python packaged of opencv
    score = iqa.get_sharpness(img)
    print('sharpness image read')

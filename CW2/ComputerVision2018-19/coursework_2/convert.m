RGB = imread('flower.jpg');
imshow(RGB)
I = rgb2gray(RGB);
figure
imshow(I)
path='/homes/zw4518/private';
imwrite(I,pathfile,'jpg');
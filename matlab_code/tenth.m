A = randn(5)
while det(A) == 0 
    A = randn(5);
end
b = randn(5, 1);

x1 = A \ b

n = size(A, 1);
x2 = zeros(n, 1);
det_A = det(A);
for i = 1:n
    A_i = A;
    A_i(:, i) = b; 
    x2(i) = det(A_i) / det_A;
end

x2
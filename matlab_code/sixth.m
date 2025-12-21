M1 = rand(10, 10);
M1 = M1 ./ sum(M1, 1); 
M1
eig1 = eig(M1);
max_eig1 = max(eig1); 
max_eig1
[V1, D1] = eig(M1);
[~, idx1] = max(diag(D1)); 
vec1 = V1(:, idx1);
vec1

A = [83, 86, 50, 88, 3, 4;
     1, 2, 3, 4, 4, 3;
     12, 15, 22, 17, 5, 7;
     28, 63, 83, 60, 8, 0];

[R, pivot] = rref(A);
pivot_cols = find(pivot);

max_independent = A(:, pivot_cols)

non_pivot_cols = setdiff(1:size(A,2), pivot_cols);
for col = non_pivot_cols
    coeff = R(:, col); 
    coeff = coeff(pivot_cols); 
    disp(['列', num2str(col), ' = ']);
    for i = 1:length(pivot_cols)
        if coeff(i) ~= 0
            if i > 1 && coeff(i) > 0
                fprintf(' + ');
            elseif coeff(i) < 0
                fprintf(' - ');
            end
            fprintf('%g*列%d', abs(coeff(i)), pivot_cols(i));
        end
    end
    fprintf('\n');
end
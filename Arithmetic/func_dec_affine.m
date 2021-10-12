function [plain_return] = func_dec_affine(cipher_str,n_multi,n_shift)
    inv_multi = 1;
    for i = 1:100
        inv_multi = inv_multi + 26;
        r = rem(inv_multi,n_multi);
        if r == 0
            n_multi = (inv_multi/n_multi);            
            break
        end
    end  
    if r == 0
        n_multi
        to_ascii = double(cipher_str);
        [x,y] = size(to_ascii);
        plain_return = '';
        for indx = x:y
            to_multi = mod((n_multi*(to_ascii(indx)-65-n_shift)),26)+97;
            to_chars = char(to_multi);
            if cipher_str(indx) ~= ' '
                plain_return = strcat(plain_return,to_chars);
            else
                plain_return = strcat(plain_return,{' '});            
            end
        end
        plain_return = char(plain_return);
    else
        fprintf('%d bukan bilangan prima',n_multi);
        plain_return = NaN;
    end
end
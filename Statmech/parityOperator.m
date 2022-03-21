function res = parityOperator(n,dloc)
    dtot = dloc^n;
    res = zeros(dtot);
    for id = int32(0):(dtot-1)
        transId = 0;
        
        for l = 0:(n-1)
            transId = transId + Bit(id, l, n, dloc)*dloc^(n-1-l);
        end
        res(transId+1,id+1) = 1;
    end
end
function res = transEigens(n, k, dloc)
    dtot = dloc^n;
    calced = zeros(1,dtot);
    
    Sector = transSector(n, k, dloc);
    res = zeros(dtot,Sector.dim);
    for j=1:Sector.dim
        Id = Sector.rep(j);
        p  = cast(Sector.per(j),'double');
        for trans = int32(1):int32(p)
            transId = transSpin(Id, trans, n, dloc);
            res(transId+1,j) = exp(2.0*pi*1i*cast(k*trans,'double')/p)/sqrt(p);
        end
    end
end
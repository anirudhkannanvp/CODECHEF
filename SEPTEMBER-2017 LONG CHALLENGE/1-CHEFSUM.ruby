te=gets.to_i
while(te>0)
    te=te-1
    n=gets.to_i
    i=0
    ans=1000000008
    ans1=0
    arr = gets.split.map(&:to_i);
    #puts n
    while i<n
        data=arr[i]
        if(data<ans)
            ans=data
            ans1=i+1
        end
        i+=1
    end
    puts(ans1)
end
package main
import "fmt"

func main(){
var n int64
var q int64
var op int64
var arr [1000006]int64
var i int64
var k int64
var in int64
var c int64
var xoor int64
i=1
fmt.Scanf("%d %d",&n,&q)
for i<=n{
    fmt.Scanf("%d",&arr[i])
    i+=1
}
for q > 0{
q--
fmt.Scanf("%d %d %d",&op,&in,&k)
if(op==1){
    arr[in]=k
}
if(op==2){
    c=0
    xoor=arr[1]
    if(xoor==k){
        c+=1
    }
    i=2
    for i<=in{
        xoor^=arr[i]
        if(xoor==k){
        c+=1
        }
        i+=1
    }
fmt.Printf("%d\n",c)    
}
}
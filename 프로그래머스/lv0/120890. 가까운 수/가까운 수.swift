import Foundation

func solution(_ array:[Int], _ n:Int) -> Int {
    var before : Int = 101
    var temp : Int = 0

    for i in array.sorted(){
        temp = n - i
        if abs(temp) >= abs(before){
            return n - before
        }else{
            before = temp
        }
    }
 
    return n - temp
}
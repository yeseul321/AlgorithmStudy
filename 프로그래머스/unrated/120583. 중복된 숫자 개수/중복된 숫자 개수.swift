import Foundation

func solution(_ array:[Int], _ n:Int) -> Int {
    var ncount: Int = 0
    for num in array {
        if num == n { ncount += 1 }
    }
    return ncount
}
import Foundation

func solution(_ n:Int) -> Int {
    var sum: Int = 0
    for num in 1...n {
        if num % 2 == 0{
            sum += num
        }
    }
    /*
    for num in 1...n where num % 2 == 0 {
        sum += num
    } --> 이것도 가능
    */
    return sum
}
import Foundation

func solution(_ array:[Int], _ height:Int) -> Int {
    var sum: Int = 0
    for hgt in array where hgt > height {
        sum += 1
    }
    return sum
}
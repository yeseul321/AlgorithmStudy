import Foundation

func solution(_ price:Int) -> Int {
    var prc: Double = Double(price)
    switch prc {
        case 100000..<300000:
            return Int(prc * 0.95)
        case 300000..<500000:
            return Int(prc * 0.9)
        case 500000...:
            return Int(prc * 0.8)
        default :
            return Int(prc)
    }
}
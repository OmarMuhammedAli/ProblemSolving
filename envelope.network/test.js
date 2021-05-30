

const maxSubarray = arr => {
    // keeps track of the max cont. +ve segment
    let maxSegTillNow = -1 * Math.pow(2, 53) + 1
    // checks for +ve segments and updates maxSegTillNow if applicable 
    let positiveSegment = 0
    for (let i = 0; i < arr.length; i++) {
        positiveSegment += arr[i]

        // update maxSegTillNow if a segment with a higher sum is found
        if (maxSegTillNow < positiveSegment) 
            maxSegTillNow = positiveSegment

        // reset the +ve segment if its value is less than zero
        if (positiveSegment < 0) positiveSegment = 0

        
    }
    return maxSegTillNow
}
//console.log(maxSubarray([-2, -3, -4, -1, -2, -1, -5, -3]))

const removeDuplicates = arr => arr.length - [... new Set(arr)].length
//console.log(removeDuplicates([-2, -3, -4, -1, -2, -1, -5, -3, -4, -3]))

const stringToArr = str => str.substring(1, str.length-1).split(', ').map(num=>+num)
const scaleBalancing = strArr => {
    const scaleWeights = stringToArr(strArr[0])
    const leftWeight = scaleWeights[0]
    const rightWeight = scaleWeights[1]
    const weightsArr = stringToArr(strArr[1]).sort()
    
    if (leftWeight === rightWeight) return 0
    else if (weightsArr.includes(Math.abs(rightWeight - leftWeight)))
        return Math.abs(leftWeight - rightWeight)
    for (let i = 0; i < weightsArr.length; i++) {
        for (let j = i+1; j < weightsArr.length; j++) {
            if (
                rightWeight + weightsArr[i] + weightsArr[j] === leftWeight
                ||
                leftWeight + weightsArr[i] + weightsArr[j] === rightWeight
                ||
                leftWeight + weightsArr[i] === rightWeight + weightsArr[j]
                ||
                leftWeight + weightsArr[j] === rightWeight + weightsArr[i]
            )
                return `${weightsArr[i]},${weightsArr[j]}`
        }
    }
    return 'not possible'
}
//console.log(scaleBalancing(['[13, 4]', '[1, 2, 3, 6, 14]']))

class Node{
    constructor(val=0) {
        this.val = val
        this.left = null
        this.right = null
        // this.parent = 
    }
}
// class BST{
//     constructor(){
//         this.root = null
//     }
//     populateBinaryTree = (data) => {
//         if (this.root === null) this.root = new Node(data)
//         else {
//             let currentNode = this.root
//             while(true) {
//                 if (data < currentNode.val) {
//                     if (currentNode.left)
//                         currentNode = currentNode.left
//                     else {
//                         currentNode.left = new Node(data)
//                         break
//                     }
//                 }
//                 else if (data > currentNode.val) {
//                     if (currentNode.right) currentNode = currentNode.right
//                     else{
//                         currentNode.right = new Node(data)
//                         break
//                     }
//                 }
//                 else break
//             }
//         }
//     }
// }
const populateBinaryTree = (arr, index) => {
    if (index < arr.length && arr[index] !== '#'){
        if(arr[Math.floor(index/2)] === '#') index++
        const root = new Node(arr[index])
        root.left = populateBinaryTree(arr, 1 + index * 2)
        root.right = populateBinaryTree(arr, 2 + index * 2)
        return root
    }
    return null
}
const preOrder = (root) => {
    if (root !== null) {
        process.stdout.write(root.val + ' ')
        preOrder(root.left)
        preOrder(root.right)
    }
}
const preOrderTraversal = strArr => {
    // const tree = new BST()
    // strArr.forEach(ele => ele !== '#'? ele: null)
    // console.log(strArr)
    // for (let i = 0; i < strArr.length; i++ ){
    //     tree.populateBinaryTree(strArr[i])
    // }
    const root = populateBinaryTree(strArr, 0)
    preOrder(root)
}
//  preOrderTraversal(['2', '6', '#'])
preOrderTraversal([
  "5",
  "2",
  "6",
  "1",
  "9",
  "#",
  "8",
  "#",
  "#",
  "#",
  "#",
  "4",
  "#",
]);

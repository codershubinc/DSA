/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
const addTwoNumbers = function (l1, l2) {
    // Convert linked list to number in reverse order
    const getNumber = (l) => {
        let num = 0, place = 1;
        while (l) {
            num += l.val * place;
            place *= 10;
            l = l.next;
        }
        return num;
    };

    // Sum the two numbers
    let sum = getNumber(l1) + getNumber(l2);

    // Convert number back to linked list
    let dummy = new ListNode(0);
    let current = dummy;

    if (sum === 0) return new ListNode(0);

    while (sum > 0) {
        current.next = new ListNode(sum % 10);
        sum = Math.floor(sum / 10);
        current = current.next;
    }

    return dummy.next;
};

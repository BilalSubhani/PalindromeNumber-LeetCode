isPalindrome(x) {
        if (x < 0)
            return false;
        else {
            let num = x;
            let reversed = 0;
            while (num) {
                reversed = reversed * 10 + num % 10;
                num = Math.floor(num / 10);
            }
            return x === reversed;
        }
    }

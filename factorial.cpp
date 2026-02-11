#include <iostream>
using namespace std;
int factorial(int num);
int main() {
cout << factorial(10);
return 0;
}
/*int factorial(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result *= i;
    }
    return result;
} this is again iterative approach*/
 int factorial(int num){
    if(num > 1){
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }
 }
 /*num = 5 → condition true

So computer bolta hai:
👉 “abhi mujhe answer nahi pata, pehle factorial(4) ka answer lao”

IMPORTANT POINT 🔥

Computer calculate nahi karta,
wo WAIT karta hai

Ab kya hota hai?
factorial(4)


Phir same cheez:
👉 “pehle factorial(3) lao”

factorial(3)
→ factorial(2)
→ factorial(1)

YAHAN MAGIC HOTA HAI ✨
factorial(1)


num > 1 ❌ false
So return:

return 1;


Computer bolta:
👉 “ok mil gaya answer = 1”

Ab answers wapas aate hain (stack se)

Ab samjho is part ko dhyaan se 👇

factorial(2) = 2 * 1 = 2

factorial(3) = 3 * 2 = 6

factorial(4) = 4 * 6 = 24

factorial(5) = 5 * 24 = 120

Tumhara main doubt clear karta hoon 👇

❓ "Code ko kaise pata ki factorial(4) kya hai?"

✅ Answer:
Code ko nahi pata hota
Wo bas bolta hai:

“pehle us function ko chala ke answer laao, phir multiply karenge”

Jaise tum bolte ho:

“pehle chai bana lo, phir biscuit khayenge” ☕🍪

Ek line me yaad rakhna

🧠 Recursion = Pehle chhota kaam solve karo, phir bada apne-aap ho jaata hai

Agar chaho, next message me:

call stack diagram bana ke dikhaun

ya recursion ko real-life example se samjhaun

Bas bolo 😄*/
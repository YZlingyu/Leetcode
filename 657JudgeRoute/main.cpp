#include <iostream>

class Solution {
public:
    bool judgeCircle(string moves) {
        int right = 0;
        int left = 0;
        int up = 0;
        int down = 0;

        for(int i = 0; i<moves.length(); i++) {
            char n = moves[i];
            switch (n) {
                case 'L' :
                    left++;
                    break;
                case 'R' :
                    right++;
                    break;
                case 'D' :
                    down++;
                    break;
                case 'U' :
                    up++;
                    break;

            }
        }

            return left==right && up==down;
        }
    };

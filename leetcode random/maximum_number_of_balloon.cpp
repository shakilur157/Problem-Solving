class Solution {
public:
    int maxNumberOfBalloons(string text) {
        long count_b = 0;
        long count_a = 0;
        long count_l = 0;
        long count_o = 0;
        long count_n = 0;

        for(long i=0; i<text.size(); i++){
            if(text[i] == 'b'){
                count_b = count_b + 1;
            }else if(text[i] == 'a'){
                count_a = count_a + 1;
            }else if(text[i] == 'l'){
                count_l = count_l + 1;
            }else if(text[i] == 'o'){
                count_o = count_o + 1;
            }else if(text[i] == 'n'){
                count_n = count_n + 1;
            }
        }

        long min_count = min(count_b, min(count_a, min(count_l / 2, min(count_o / 2, count_n))));
        return min_count;
    }
};

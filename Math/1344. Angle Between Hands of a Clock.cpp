class Solution {
public:
    double angleClock(int hour, int minutes) {
        double m_a = minutes * 6;                     
        double hr = hour * 30 + (minutes / 2.0);       

        double diff = fabs(m_a - hr);                   
        return min(diff, 360 - diff);                  
    }
};

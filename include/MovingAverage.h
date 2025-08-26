#ifndef MOVINGAVERAGE_H
#define MOVINGAVERAGE_H

template <typename T>
class MovingAverage {
    public:
        MovingAverage() {
            arr = new T[length];
        }

        MovingAverage(int len) {
            length = len;
            arr = new T[length];
        }

        T update(T val) {
            T temp = arr[index];
            arr[index] = val;
            index++;

            if (arrFilled == false) {
                total += val;
                average = total / index;

                if (index == length) {
                    arrFilled = true;
                    index = 0;
                }

                return average;
            }
            
            if (index == length) index = 0;

            total = total - temp + val;
            average = total / length;

            return average;
        }

        T getAverage() {
            return average;
        }


    private:
        int length = 50;
        int index = 0;
        bool arrFilled = false;

        T total;
        T average;
        T* arr;
};


#endif // MOVINGAVERAGE_H
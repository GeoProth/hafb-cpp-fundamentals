#pragma once
class Counter
{
    private:
        unsigned int count_;
    public:
        Counter() : count_(0){}
        ~Counter() {std::cout <<"Bye\n";}
        Counter(unsigned int count) : count_(count){}
        // Setter & getter
        unsigned int count() {return count_;}
        void set_count(unsigned int count){count_ = count;}

        //Operator overloads
        //void operator ++() { ++count_; }
        Counter operator ++(); // prefix only
        Counter operator ++(int); // postix only
};
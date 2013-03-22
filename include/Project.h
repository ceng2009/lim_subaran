#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <string.h>
#include <iomanip>
#include <algorithm>
#ifndef PROJECT_H
#define PROJECT_H

using namespace std;

class Project
{
    public:
        Project();
        virtual ~Project();
        void multiples_of_3_and_5();
        void even_fibonacce();
        void largest_prime_factor();
        void largest_palindrome_product();
        void smallest_multiple();
        void sum_square_difference();
        void _10001st_prime();
        void largest_product_in_a_series();
        void special_pytho_triplet();
        void summation_of_prime();

        void largest_product_in_grid();
        void highly_divisible_triangular_number();
        void large_sum();
        void longest_collatz_sequence();
        void diophantine_reciprocals_a();
        void power_digit_sum();
        void number_letter_counts();
        void maximum_path_sum_I();
        void counting_sundays();
        void factorial_digit_sum();
        void name_scores();
            int name_sum(string s);
            void insertionSort(string* array,int length);
        void first_1000_digit_fibonacci();
        void truncatable_primes();
    protected:
    private:
};
